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
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`2<System.Object,System.String[]>
struct Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F;
// System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>
struct Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542;
// System.Collections.Generic.IEnumerable`1<Byn.Awrtc.ConnectionId>
struct IEnumerable_1_t29F646FCFEA75E3D80CB922607DDBFFD4D6D3CAD;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<Byn.Awrtc.ConnectionId>
struct IEqualityComparer_1_tB65425A333C35BE7A5183B01A7916A594C47A3A6;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Byn.Awrtc.ConnectionId>
struct IList_1_tACAC7B937C7F5ECEDE69AB9E77670953BF559088;
// System.Collections.Generic.Dictionary`2/KeyCollection<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996;
// System.Collections.Generic.Dictionary`2/KeyCollection<Byn.Awrtc.ConnectionId,System.Object>
struct KeyCollection_tAFDCDC48580754C83AFD55F9675360E307AE07DD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct KeyCollection_t8D665992EC0F323725D972F7D3B1AF93CA94054D;
// System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>
struct List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C;
// System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>
struct List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34;
// System.Collections.Generic.List`1<Byn.Awrtc.IceServer>
struct List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>
struct Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C;
// System.Collections.Generic.Dictionary`2/ValueCollection<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct ValueCollection_tF3C9D6758107989B03C80C662A168E4763662D9C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct ValueCollection_t6E72AD24587D85E78C134F0A35BF5217693EFD11;
// Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>
struct WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4;
// Byn.Awrtc.LocalNetwork/WeakRef`1<System.Object>
struct WeakRef_1_tFE5AD03683BE999836E84D42D3414126A15C294D;
// System.Collections.Generic.Dictionary`2/Entry<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>[]
struct EntryU5BU5D_tF08A57846E7D6413ECC19CBA4ED49708BFC8AADC;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>[]
struct EntryU5BU5D_tD473A50DF1B83C084D48708D8CF5750A8AED0855;
// System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>[]
struct List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Byn.Awrtc.ByteArrayBuffer[]
struct ByteArrayBufferU5BU5D_t8A7FF553D6F9FA9AAC1598E4D42DC7E836DBD93D;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Byn.Awrtc.ConnectionId[]
struct ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Byn.Awrtc.IceServer[]
struct IceServerU5BU5D_t890B087A6D6E8BDD77E819B9C8C15B567EC1E470;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Byn.Awrtc.NetworkEvent[]
struct NetworkEventU5BU5D_t1CCD8E08F7DEE8E531F9ABFDAB801B4830726410;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Byn.Awrtc.Base.AWebRtcCall
struct AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Byn.Awrtc.BufferedFrame
struct BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2;
// Byn.Awrtc.ByteArrayBuffer
struct ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8;
// Byn.Awrtc.CallAcceptedEventArgs
struct CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5;
// Byn.Awrtc.CallEndedEventArgs
struct CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD;
// Byn.Awrtc.CallEventArgs
struct CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147;
// Byn.Awrtc.CallEventHandler
struct CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Byn.Awrtc.DataMessageEventArgs
struct DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Byn.Awrtc.ErrorEventArgs
struct ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB;
// Byn.Awrtc.ErrorInfo
struct ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620;
// Byn.Awrtc.FrameUpdateEventArgs
struct FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Byn.Awrtc.IFrame
struct IFrame_t49C68681597313F0B8AAB76D4BB59AF074CC3014;
// Byn.Awrtc.IMediaNetwork
struct IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5;
// Byn.Awrtc.IceServer
struct IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Byn.Awrtc.LocalNetwork
struct LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784;
// Byn.Awrtc.MediaConfig
struct MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A;
// Byn.Awrtc.MessageDataBuffer
struct MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE;
// Byn.Awrtc.MessageEventArgs
struct MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Byn.Awrtc.NetworkConfig
struct NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Byn.Awrtc.WaitForIncomingCallEventArgs
struct WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;

IL2CPP_EXTERN_C RuntimeClass* AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FramePixelFormat_t0FAD646E711CD30F0C65CE6CFF0D11F94771C387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBasicNetwork_t0DC90958FE0B1FFE6600B47B3F3270429156D5B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRtcNetwork_tAA1E8F8E4CA689692406111CD8F29ED9551B50DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetEventType_t5BB10430583C93C9F413A9B013DA9CCA588A4F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6EB70CB763ED0F38063A7F9D39E7E5A0EDFBBB26____20731A0997122AAAE93B2C58C609D52BF080F0A1_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0665B3825F66A4521CBF971C2E44EE20246375E7;
IL2CPP_EXTERN_C String_t* _stringLiteral06C8172ECEC446258635338B7FBEA5162C6ACB88;
IL2CPP_EXTERN_C String_t* _stringLiteral09EFD7F108F5E8EC79313A405A35DABE70D5FEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0C58887910EAD6CC7D0BACF78F9BC207F6ADAEAD;
IL2CPP_EXTERN_C String_t* _stringLiteral14C5C730393FD9BC6197E9CC5B8DD546EC3C8AC2;
IL2CPP_EXTERN_C String_t* _stringLiteral24557446E6575FDFCEA76AB20FA4A263ABD54CEF;
IL2CPP_EXTERN_C String_t* _stringLiteral252A7EFDC2F1FD36D0D5A5B074231D03E01E9ADF;
IL2CPP_EXTERN_C String_t* _stringLiteral2A67C747DD8A55283D27F3990BAF9D8E967AC41C;
IL2CPP_EXTERN_C String_t* _stringLiteral2AC01DBC85EB9E04E7189827FB86521FEF4DF032;
IL2CPP_EXTERN_C String_t* _stringLiteral2D14A324D56E0DE7CD465A91D9ADA540141B1D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral2DF236F7E9A481C3FD9EA74719E414D5163D79E8;
IL2CPP_EXTERN_C String_t* _stringLiteral3429987E49CDAFA6EE7EA5802C98E2792FAFD58D;
IL2CPP_EXTERN_C String_t* _stringLiteral3DF513F73349C4F933AE9D6A49A319E490D18DF0;
IL2CPP_EXTERN_C String_t* _stringLiteral40C0ADCF96A2328DB0819A0B7022F5995025926B;
IL2CPP_EXTERN_C String_t* _stringLiteral40F79767EC9DDDEE3D5C6B4AB948D6240A2CE94A;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral461E25CB200D05E14DAC62F4C0A794CE425ABE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral49C8EA2F128FD0B326B76BDD5AAF122FFA376F71;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4F130946577022936EE02472C36D257149CEBE97;
IL2CPP_EXTERN_C String_t* _stringLiteral5A198E98B2248DC3CBE57D6CC76BC8B325B41223;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1B308369D046ADF66BB0153CF88C04F250DDB7;
IL2CPP_EXTERN_C String_t* _stringLiteral61658BA9D1B4D2C127BE1396467F879D626FD014;
IL2CPP_EXTERN_C String_t* _stringLiteral6362F8DFE3C2F6189EFF196C1029B51DCB7FABC3;
IL2CPP_EXTERN_C String_t* _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
IL2CPP_EXTERN_C String_t* _stringLiteral65F145CED64531C2770EE987B5D63D19FE4D8340;
IL2CPP_EXTERN_C String_t* _stringLiteral6C696396156829B872749F601A559C8B29052894;
IL2CPP_EXTERN_C String_t* _stringLiteral6E02A08AAF15C94ECB20C43E0BF5810B40421314;
IL2CPP_EXTERN_C String_t* _stringLiteral7019EEBC6E679567B06544B5D5C45AF0A69A7778;
IL2CPP_EXTERN_C String_t* _stringLiteral73FB1F88A4A3771607CC77EA748234988CEC4FD3;
IL2CPP_EXTERN_C String_t* _stringLiteral74A7C53978A15884964DF544F699661A047C5FE5;
IL2CPP_EXTERN_C String_t* _stringLiteral77BBA8F19F0973A387EDFEDC31A034436D24977D;
IL2CPP_EXTERN_C String_t* _stringLiteral8692E343EE22DD00DC83C8A9C6BB384AF9116807;
IL2CPP_EXTERN_C String_t* _stringLiteral89C8A76A5A5CB961BE66CCE473419E5ECF7C48C8;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADD5B2F895D132E788567E84C7F23638A56C022;
IL2CPP_EXTERN_C String_t* _stringLiteral8BB73AE203E0E8B52385E79F7CBAEC935E8DC070;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteral8BFCC1B7A51C3BFE06D662EEFAC980EDC86CB45F;
IL2CPP_EXTERN_C String_t* _stringLiteral8EF1F186012EA308133DFBD830EFC3939099B683;
IL2CPP_EXTERN_C String_t* _stringLiteral90704D33BFBCB8D644DD646C625D53D8E0DD2243;
IL2CPP_EXTERN_C String_t* _stringLiteral91CAEAC72E6E047DE9226AC571C10D0E9B4BA8D4;
IL2CPP_EXTERN_C String_t* _stringLiteral9345BD7109103FEC485091B4FD7E9598ECF00FE4;
IL2CPP_EXTERN_C String_t* _stringLiteral94148143B24AD60B8C006E5197C131BE027F52CD;
IL2CPP_EXTERN_C String_t* _stringLiteral948A5499CD67BE96D8600B0E8F5E01CF6FAB08C4;
IL2CPP_EXTERN_C String_t* _stringLiteral949F6645EABC641C468B6C5ED3CD41383E6CDBEE;
IL2CPP_EXTERN_C String_t* _stringLiteral95A18A32231BDD5D9B5E164D36FC1F9D798BF341;
IL2CPP_EXTERN_C String_t* _stringLiteral99BD9CCE57FDCB70299030B139503D39CB502255;
IL2CPP_EXTERN_C String_t* _stringLiteralA32CC2C27A3F82A2E501C52FB0A8B98CA8E46DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralA46D058F10FF6C2B41CE88A650808ADCD86BB510;
IL2CPP_EXTERN_C String_t* _stringLiteralADA503CFA7FE8076F55639D2C7EB135A40905DB3;
IL2CPP_EXTERN_C String_t* _stringLiteralBAE08B8B9EA5083281A2DE32E51435A768F96A57;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC350A97A9C6B7BA97EE2DB62823E0D41D293A21C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB567365DE256CA7657B87B07F7460967192E95E;
IL2CPP_EXTERN_C String_t* _stringLiteralD209EDE295C1FC2EBC3C7152DE0EC39EED463166;
IL2CPP_EXTERN_C String_t* _stringLiteralD54424AF9E912A25E4065D909E583EED1B4237C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD5BA4609CB0FD909BDA090538EAC923C13077148;
IL2CPP_EXTERN_C String_t* _stringLiteralD63F2F886B52F79785A42EC95EA195115165F4E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CAA5F273743E5567CE672029477AEC35422E8A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD965DB9FCEEFC777059E3B331DDF004688E302B;
IL2CPP_EXTERN_C String_t* _stringLiteralDFAE1D0E5FE7378F27A096F9DFC22FE932F0C5E2;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F8572CE3547C631F4BC5F005689A0BC5E0EE20;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE930265A93DA6F2CCA6B502401F1155FA6F9F0B8;
IL2CPP_EXTERN_C String_t* _stringLiteralE9DC9AF3921EAD61E9EB1C5EE95CD56DA665AF31;
IL2CPP_EXTERN_C String_t* _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC1B3F1A679F21CFA9AF9C186382E523CBF695AC;
IL2CPP_EXTERN_C String_t* _stringLiteralEE79F59E1EC1FB6FA72D14968CF2245EDCD2CBEE;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1EFF3603EC27740BAA219B667EBD75A78D0D33;
IL2CPP_EXTERN_C String_t* _stringLiteralF170264088A3033B7139C3345835B7B93EC8FECD;
IL2CPP_EXTERN_C String_t* _stringLiteralF854A90D8B816EE8D81106B17A3772254E45AE63;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB549FE66FB8935E431398D5D2328B7CEFB1A8D;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE666A278BD008D4A68AA501A64008BF710468A;
IL2CPP_EXTERN_C const RuntimeMethod* AWebRtcCall_Call_m7AD1C0845C10BCB4385A2E8A11CF35BD4DAE8CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWebRtcCall_Configure_mBAB34E64CD89C3D1A45DA1189A8D68567CD0E703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWebRtcCall_Listen_m479C190B936DFBCDF396CF6A8B0921709FA6CB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWebRtcCall_UnpackStringMsg_mB0CFF7A6E1A0AEC6D71E858CEB3F319A82663DFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteArrayBuffer_Dispose_mBDCB25D21BC4CD54EF9DC430E7C5CCE183C5200E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteArrayBuffer_get_Buffer_mF7982705EFA0C018C06567ACD5274EF307B9078E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteArrayBuffer_get_ContentLength_m3C66B9598E0E265F0EBA86D36EEED3E5BDAC0C54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m7B558E0EBC2543C4E9CC88DA1E04A2811AD2B18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m9980803030822077943E5C933E0688DB105B9CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m29B10244968556F1EEFE987B0C83B73597140898_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m66DB9F416FF18D17A8F9CEF11E3A8286D183098D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8DA02D05DA333EAE7F1B703CE91CDA212A17B0EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m42609DDED0249DA14BD2B76A9A8B4C4F78C337BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m72450D89B384B4ABFA674F36AFDD6DCFCC84539C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m97BD1C2684BC60B8E0B2BD88C0235505152CFD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5B57BB3D0C823604DC126B93904F1F9EDE48022D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C754EE9E30E8E007230EEE3C5F928BA18C4E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7DCC20B51621E2D41B0B43141FB8F62E6B4B20B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IceServer__ctor_mAEE12F88B4F3DB2EF8F87C8FE820E4AFFE52184D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m246CCE364EB9C4C163802434ACA5F8FE1F42C6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4B1BB1EF8E21F2528A0AABFA3B898A1F0BA5C2F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m146CF5F21997F993E7DD8720CBE881B1409DC6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m74D95FD0C9C144AE99DD8738950D86AC5BF1AAAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD264F474F11F0E6FBE415A1596BE3578E7669537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mB547917F8477F8A6320F4DB9180ACB1B311CAA69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m67DC01D7FD26C4B9E91696E99B3D1B310BA76552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7ABAD61A338499F2477A7CC58A96F29A0A1DE5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED7FB4970DC04DF296F8C2937C405E5DEDC2A6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m975DD5AE69B0BFD713D6B3CA200CDD023A1CD3A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m10061B756E204913A45333C86A064386CCE17A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m49885D86FCF235DBD048894830528DB3CF2AF1BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalNetwork_ConnectClient_m5FFC02A41B091E2860F22390B600F829A6F87AFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConfig_set_IceServers_mADC0293C8A6ECF63990157DE40D6DD2AF4C0E76F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkEvent_FromByteArray_m7FFAB5917075130FBA65506BE2CE3FED4C6CE5CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkEvent__ctor_m0CBD870B498BDA850F660472770077423A85B7FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m56767622B11E2FCF00CC3A8F220A1DEF60E9BD13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD37040A5E8979D35189788E6452C363FC25CDE76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m5949945EB7287C9B665DC304439B768A57A1B7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA8395CF7B0A9958099D4A0FB5A2EC2189A948121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6464AA4B9DCDD49C2004175656BACF0E944418DB 
{
};

// System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF08A57846E7D6413ECC19CBA4ED49708BFC8AADC* ____entries_1;
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
	KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF3C9D6758107989B03C80C662A168E4763662D9C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD473A50DF1B83C084D48708D8CF5750A8AED0855* ____entries_1;
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
	KeyCollection_t8D665992EC0F323725D972F7D3B1AF93CA94054D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6E72AD24587D85E78C134F0A35BF5217693EFD11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* ____dictionary_0;
};

// System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>
struct List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteArrayBufferU5BU5D_t8A7FF553D6F9FA9AAC1598E4D42DC7E836DBD93D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>
struct List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Byn.Awrtc.IceServer>
struct List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IceServerU5BU5D_t890B087A6D6E8BDD77E819B9C8C15B567EC1E470* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>
struct Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	NetworkEventU5BU5D_t1CCD8E08F7DEE8E531F9ABFDAB801B4830726410* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>
struct WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4  : public RuntimeObject
{
	// System.WeakReference Byn.Awrtc.LocalNetwork/WeakRef`1::mRef
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___mRef_0;
};

// Byn.Awrtc.Base.AWebRtcCall
struct AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD  : public RuntimeObject
{
	// Byn.Awrtc.NetworkConfig Byn.Awrtc.Base.AWebRtcCall::mNetworkConfig
	NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* ___mNetworkConfig_1;
	// Byn.Awrtc.MediaConfig Byn.Awrtc.Base.AWebRtcCall::mMediaConfig
	MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* ___mMediaConfig_2;
	// Byn.Awrtc.CallEventHandler Byn.Awrtc.Base.AWebRtcCall::CallEvent
	CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* ___CallEvent_3;
	// Byn.Awrtc.IMediaNetwork Byn.Awrtc.Base.AWebRtcCall::mNetwork
	RuntimeObject* ___mNetwork_4;
	// System.Boolean Byn.Awrtc.Base.AWebRtcCall::mConferenceMode
	bool ___mConferenceMode_5;
	// Byn.Awrtc.Base.AWebRtcCall/CallState Byn.Awrtc.Base.AWebRtcCall::mState
	int32_t ___mState_8;
	// System.Boolean Byn.Awrtc.Base.AWebRtcCall::mIsDisposed
	bool ___mIsDisposed_9;
	// System.Boolean Byn.Awrtc.Base.AWebRtcCall::mLocalFrameEvents
	bool ___mLocalFrameEvents_10;
	// System.Boolean Byn.Awrtc.Base.AWebRtcCall::mServerInactive
	bool ___mServerInactive_11;
	// System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId> Byn.Awrtc.Base.AWebRtcCall::mConnectionIds
	List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* ___mConnectionIds_12;
	// System.Boolean Byn.Awrtc.Base.AWebRtcCall::mPendingListenCall
	bool ___mPendingListenCall_13;
	// System.Boolean Byn.Awrtc.Base.AWebRtcCall::mPendingCallCall
	bool ___mPendingCallCall_14;
	// System.String Byn.Awrtc.Base.AWebRtcCall::mPendingAddress
	String_t* ___mPendingAddress_15;
};

// Byn.Awrtc.BufferedFrame
struct BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2  : public RuntimeObject
{
	// System.Byte[] Byn.Awrtc.BufferedFrame::mBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mBuffer_0;
	// System.Int32 Byn.Awrtc.BufferedFrame::mWidth
	int32_t ___mWidth_1;
	// System.Int32 Byn.Awrtc.BufferedFrame::mHeight
	int32_t ___mHeight_2;
	// System.Int32 Byn.Awrtc.BufferedFrame::mRotation
	int32_t ___mRotation_3;
	// System.Boolean Byn.Awrtc.BufferedFrame::mTopRowFirst
	bool ___mTopRowFirst_4;
	// Byn.Awrtc.FramePixelFormat Byn.Awrtc.BufferedFrame::mFormat
	int32_t ___mFormat_5;
};

// Byn.Awrtc.ByteArrayBuffer
struct ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8  : public RuntimeObject
{
	// System.Byte[] Byn.Awrtc.ByteArrayBuffer::array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array_2;
	// System.Int32 Byn.Awrtc.ByteArrayBuffer::positionWrite
	int32_t ___positionWrite_3;
	// System.Int32 Byn.Awrtc.ByteArrayBuffer::positionRead
	int32_t ___positionRead_4;
	// System.Int32 Byn.Awrtc.ByteArrayBuffer::offset
	int32_t ___offset_5;
	// System.Boolean Byn.Awrtc.ByteArrayBuffer::mFromPool
	bool ___mFromPool_6;
	// System.Boolean Byn.Awrtc.ByteArrayBuffer::mDisposed
	bool ___mDisposed_7;
};

// Byn.Awrtc.CallEventArgs
struct CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147  : public RuntimeObject
{
	// Byn.Awrtc.CallEventType Byn.Awrtc.CallEventArgs::mType
	int32_t ___mType_0;
};

// Byn.Awrtc.DefaultValues
struct DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// Byn.Awrtc.ErrorInfo
struct ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620  : public RuntimeObject
{
	// System.String Byn.Awrtc.ErrorInfo::mErrorMessage
	String_t* ___mErrorMessage_10;
};

// Byn.Awrtc.IceServer
struct IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Byn.Awrtc.IceServer::mUrls
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___mUrls_0;
	// System.String Byn.Awrtc.IceServer::mUsername
	String_t* ___mUsername_1;
	// System.String Byn.Awrtc.IceServer::mCredential
	String_t* ___mCredential_2;
};

// Byn.Awrtc.MessageDataBufferExt
struct MessageDataBufferExt_t9EBB9D48359DA7AF9F08B81F4423F6DF242D9473  : public RuntimeObject
{
};

// Byn.Awrtc.NetworkConfig
struct NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Byn.Awrtc.IceServer> Byn.Awrtc.NetworkConfig::mIceServers
	List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* ___mIceServers_0;
	// System.String Byn.Awrtc.NetworkConfig::mSignalingUrl
	String_t* ___mSignalingUrl_1;
	// System.Boolean Byn.Awrtc.NetworkConfig::mAllowRenegotiation
	bool ___mAllowRenegotiation_2;
	// System.Boolean Byn.Awrtc.NetworkConfig::mIsConference
	bool ___mIsConference_3;
};

// Byn.Awrtc.SLog
struct SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// Byn.Awrtc.ConnectionId
struct ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 
{
	// System.Int16 Byn.Awrtc.ConnectionId::id
	int16_t ___id_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Byn.Awrtc.ErrorEventArgs
struct ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB  : public CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147
{
	// Byn.Awrtc.ErrorInfo Byn.Awrtc.ErrorEventArgs::mErrorInfo
	ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___mErrorInfo_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// Byn.Awrtc.WaitForIncomingCallEventArgs
struct WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255  : public CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147
{
	// System.String Byn.Awrtc.WaitForIncomingCallEventArgs::mAddress
	String_t* ___mAddress_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tE7EEBFDBD77CAEE63DB6AFD4F5162D364EF66602 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tE7EEBFDBD77CAEE63DB6AFD4F5162D364EF66602__padding[128];
	};
};

// System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>
struct Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,System.Object>
struct KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6EB70CB763ED0F38063A7F9D39E7E5A0EDFBBB26  : public RuntimeObject
{
};

// Byn.Awrtc.CallAcceptedEventArgs
struct CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5  : public CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147
{
	// Byn.Awrtc.ConnectionId Byn.Awrtc.CallAcceptedEventArgs::mConnectionId
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___mConnectionId_1;
};

// Byn.Awrtc.CallEndedEventArgs
struct CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD  : public CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147
{
	// Byn.Awrtc.ConnectionId Byn.Awrtc.CallEndedEventArgs::mConnectionId
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___mConnectionId_1;
};

// Byn.Awrtc.DataMessageEventArgs
struct DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9  : public CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147
{
	// Byn.Awrtc.ConnectionId Byn.Awrtc.DataMessageEventArgs::mConnectionId
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___mConnectionId_1;
	// System.Byte[] Byn.Awrtc.DataMessageEventArgs::mContent
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mContent_2;
	// System.Boolean Byn.Awrtc.DataMessageEventArgs::mReliable
	bool ___mReliable_3;
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

// Byn.Awrtc.FrameUpdateEventArgs
struct FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F  : public CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147
{
	// Byn.Awrtc.FramePixelFormat Byn.Awrtc.FrameUpdateEventArgs::mFormat
	int32_t ___mFormat_1;
	// Byn.Awrtc.ConnectionId Byn.Awrtc.FrameUpdateEventArgs::mConnectionId
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___mConnectionId_2;
	// System.Int32 Byn.Awrtc.FrameUpdateEventArgs::mTrackId
	int32_t ___mTrackId_3;
	// Byn.Awrtc.IFrame Byn.Awrtc.FrameUpdateEventArgs::mFrame
	RuntimeObject* ___mFrame_4;
};

// Byn.Awrtc.LocalNetwork
struct LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784  : public RuntimeObject
{
	// System.Int32 Byn.Awrtc.LocalNetwork::mId
	int32_t ___mId_3;
	// Byn.Awrtc.ConnectionId Byn.Awrtc.LocalNetwork::mNextNetworkId
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___mNextNetworkId_4;
	// System.String Byn.Awrtc.LocalNetwork::mServerAddress
	String_t* ___mServerAddress_5;
	// System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent> Byn.Awrtc.LocalNetwork::mEvents
	Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* ___mEvents_6;
	// System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>> Byn.Awrtc.LocalNetwork::mConnectionNetwork
	Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* ___mConnectionNetwork_7;
	// System.Boolean Byn.Awrtc.LocalNetwork::disposedValue
	bool ___disposedValue_8;
};

// Byn.Awrtc.MediaConfig
struct MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A  : public RuntimeObject
{
	// System.Boolean Byn.Awrtc.MediaConfig::mAudio
	bool ___mAudio_0;
	// System.Boolean Byn.Awrtc.MediaConfig::mVideo
	bool ___mVideo_1;
	// System.String Byn.Awrtc.MediaConfig::mVideoDeviceName
	String_t* ___mVideoDeviceName_2;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mMinWidth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mMinWidth_3;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mMinHeight
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mMinHeight_4;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mMaxWidth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mMaxWidth_5;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mMaxHeight
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mMaxHeight_6;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mIdealWidth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mIdealWidth_7;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mIdealHeight
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mIdealHeight_8;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mIdealFrameRate
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mIdealFrameRate_9;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mMinFrameRate
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mMinFrameRate_10;
	// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::mMaxFrameRate
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mMaxFrameRate_11;
	// Byn.Awrtc.FramePixelFormat Byn.Awrtc.MediaConfig::mFormat
	int32_t ___mFormat_12;
};

// Byn.Awrtc.MessageEventArgs
struct MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2  : public CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147
{
	// Byn.Awrtc.ConnectionId Byn.Awrtc.MessageEventArgs::mConnectionId
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___mConnectionId_1;
	// System.Boolean Byn.Awrtc.MessageEventArgs::mReliable
	bool ___mReliable_2;
	// System.String Byn.Awrtc.MessageEventArgs::mContent
	String_t* ___mContent_3;
};

// Byn.Awrtc.NetworkEvent
struct NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E 
{
	// Byn.Awrtc.NetEventType Byn.Awrtc.NetworkEvent::type
	uint8_t ___type_0;
	// Byn.Awrtc.ConnectionId Byn.Awrtc.NetworkEvent::connectionId
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___connectionId_1;
	// System.Object Byn.Awrtc.NetworkEvent::data
	RuntimeObject* ___data_2;
};
// Native definition for P/Invoke marshalling of Byn.Awrtc.NetworkEvent
struct NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_pinvoke
{
	uint8_t ___type_0;
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___connectionId_1;
	Il2CppIUnknown* ___data_2;
};
// Native definition for COM marshalling of Byn.Awrtc.NetworkEvent
struct NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_com
{
	uint8_t ___type_0;
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___connectionId_1;
	Il2CppIUnknown* ___data_2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>
struct Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,System.Object>
struct Enumerator_t29356869AD666753565852C5270676CB9ACD677F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`2<System.Object,System.String[]>
struct Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Byn.Awrtc.CallEventHandler
struct CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.Dictionary`2/KeyCollection<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.Dictionary`2/KeyCollection<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>
struct List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteArrayBufferU5BU5D_t8A7FF553D6F9FA9AAC1598E4D42DC7E836DBD93D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>

// System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>
struct List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>

// System.Collections.Generic.List`1<Byn.Awrtc.IceServer>
struct List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IceServerU5BU5D_t890B087A6D6E8BDD77E819B9C8C15B567EC1E470* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Byn.Awrtc.IceServer>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>

// System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>

// Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>

// Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>

// Byn.Awrtc.Base.AWebRtcCall
struct AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields
{
	// System.String Byn.Awrtc.Base.AWebRtcCall::LOGTAG
	String_t* ___LOGTAG_0;
	// System.Byte Byn.Awrtc.Base.AWebRtcCall::MESSAGE_TYPE_DATA
	uint8_t ___MESSAGE_TYPE_DATA_6;
	// System.Byte Byn.Awrtc.Base.AWebRtcCall::MESSAGE_TYPE_STRING
	uint8_t ___MESSAGE_TYPE_STRING_7;
};

// Byn.Awrtc.Base.AWebRtcCall

// Byn.Awrtc.BufferedFrame

// Byn.Awrtc.BufferedFrame

// Byn.Awrtc.ByteArrayBuffer
struct ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields
{
	// System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>[] Byn.Awrtc.ByteArrayBuffer::sPool
	List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* ___sPool_0;
	// System.Boolean Byn.Awrtc.ByteArrayBuffer::LOG_GC_CALLS
	bool ___LOG_GC_CALLS_1;
	// System.Int32[] Byn.Awrtc.ByteArrayBuffer::MultiplyDeBruijnBitPosition
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MultiplyDeBruijnBitPosition_8;
};

// Byn.Awrtc.ByteArrayBuffer

// Byn.Awrtc.CallEventArgs

// Byn.Awrtc.CallEventArgs

// Byn.Awrtc.DefaultValues
struct DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_StaticFields
{
	// System.Boolean Byn.Awrtc.DefaultValues::sAuthenticateAsClientBugWorkaround
	bool ___sAuthenticateAsClientBugWorkaround_0;
};

// Byn.Awrtc.DefaultValues

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// Byn.Awrtc.ErrorInfo
struct ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields
{
	// System.String Byn.Awrtc.ErrorInfo::SERVER_INIT_FAILED_ADDRESS_IN_USE
	String_t* ___SERVER_INIT_FAILED_ADDRESS_IN_USE_0;
	// System.String Byn.Awrtc.ErrorInfo::CONNECTION_FAILED_ADDRESS_UNKNOWN
	String_t* ___CONNECTION_FAILED_ADDRESS_UNKNOWN_1;
	// System.String Byn.Awrtc.ErrorInfo::SERVER_INIT_FAILED_REQURED_CONNECTION_OFFLINE
	String_t* ___SERVER_INIT_FAILED_REQURED_CONNECTION_OFFLINE_2;
	// System.String Byn.Awrtc.ErrorInfo::CONNECTION_FAILED_REQURED_CONNECTION_OFFLINE
	String_t* ___CONNECTION_FAILED_REQURED_CONNECTION_OFFLINE_3;
	// System.String Byn.Awrtc.ErrorInfo::DISCONNECTED_REQURED_CONNECTION_OFFLINE
	String_t* ___DISCONNECTED_REQURED_CONNECTION_OFFLINE_4;
	// System.String Byn.Awrtc.ErrorInfo::SERVER_CLOSED_REQURED_CONNECTION_OFFLINE
	String_t* ___SERVER_CLOSED_REQURED_CONNECTION_OFFLINE_5;
	// System.String Byn.Awrtc.ErrorInfo::CONNECTION_FAILED_TO_CONNECT_DIRECTLY
	String_t* ___CONNECTION_FAILED_TO_CONNECT_DIRECTLY_6;
	// System.String Byn.Awrtc.ErrorInfo::INCOMING_CONNECTION_FAILED_TO_CONNECT_DIRECTLY
	String_t* ___INCOMING_CONNECTION_FAILED_TO_CONNECT_DIRECTLY_7;
	// System.String Byn.Awrtc.ErrorInfo::DISCONNECTED_DUE_TO_TIMEOUT
	String_t* ___DISCONNECTED_DUE_TO_TIMEOUT_8;
	// System.String Byn.Awrtc.ErrorInfo::CONFIGURATION_FAILED
	String_t* ___CONFIGURATION_FAILED_9;
};

// Byn.Awrtc.ErrorInfo

// Byn.Awrtc.IceServer

// Byn.Awrtc.IceServer

// Byn.Awrtc.MessageDataBufferExt

// Byn.Awrtc.MessageDataBufferExt

// Byn.Awrtc.NetworkConfig

// Byn.Awrtc.NetworkConfig

// Byn.Awrtc.SLog
struct SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields
{
	// System.String Byn.Awrtc.SLog::TAG_WARNING
	String_t* ___TAG_WARNING_0;
	// System.String Byn.Awrtc.SLog::TAG_ERROR
	String_t* ___TAG_ERROR_1;
	// System.String Byn.Awrtc.SLog::TAG_EXCEPTION
	String_t* ___TAG_EXCEPTION_2;
	// System.String Byn.Awrtc.SLog::TAG_INFO
	String_t* ___TAG_INFO_3;
	// System.String Byn.Awrtc.SLog::TAG_DEBUG
	String_t* ___TAG_DEBUG_4;
	// System.String Byn.Awrtc.SLog::TAG_VERBOSE
	String_t* ___TAG_VERBOSE_5;
	// System.Action`2<System.Object,System.String[]> Byn.Awrtc.SLog::sLogger
	Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* ___sLogger_6;
};

// Byn.Awrtc.SLog

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.ValueType

// System.ValueType

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// Byn.Awrtc.ConnectionId
struct ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields
{
	// Byn.Awrtc.ConnectionId Byn.Awrtc.ConnectionId::INVALID
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___INVALID_0;
};

// Byn.Awrtc.ConnectionId

// System.Double

// System.Double

// Byn.Awrtc.ErrorEventArgs

// Byn.Awrtc.ErrorEventArgs

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// Byn.Awrtc.WaitForIncomingCallEventArgs

// Byn.Awrtc.WaitForIncomingCallEventArgs

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>

// System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>

// System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,System.Object>

// System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6EB70CB763ED0F38063A7F9D39E7E5A0EDFBBB26_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::20731A0997122AAAE93B2C58C609D52BF080F0A1
	__StaticArrayInitTypeSizeU3D128_tE7EEBFDBD77CAEE63DB6AFD4F5162D364EF66602 ___20731A0997122AAAE93B2C58C609D52BF080F0A1_0;
};

// <PrivateImplementationDetails>

// Byn.Awrtc.CallAcceptedEventArgs

// Byn.Awrtc.CallAcceptedEventArgs

// Byn.Awrtc.CallEndedEventArgs

// Byn.Awrtc.CallEndedEventArgs

// Byn.Awrtc.DataMessageEventArgs

// Byn.Awrtc.DataMessageEventArgs

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Byn.Awrtc.FrameUpdateEventArgs

// Byn.Awrtc.FrameUpdateEventArgs

// Byn.Awrtc.LocalNetwork
struct LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields
{
	// System.String Byn.Awrtc.LocalNetwork::LOCK_ADDRESS
	String_t* ___LOCK_ADDRESS_0;
	// System.Int32 Byn.Awrtc.LocalNetwork::sNextId
	int32_t ___sNextId_1;
	// System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>> Byn.Awrtc.LocalNetwork::mServers
	Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* ___mServers_2;
};

// Byn.Awrtc.LocalNetwork

// Byn.Awrtc.MediaConfig

// Byn.Awrtc.MediaConfig

// Byn.Awrtc.MessageEventArgs

// Byn.Awrtc.MessageEventArgs

// Byn.Awrtc.NetworkEvent

// Byn.Awrtc.NetworkEvent

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>

// System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,System.Object>

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Action`2<System.Object,System.String[]>

// System.Action`2<System.Object,System.String[]>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.Object,System.Object>

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// Byn.Awrtc.CallEventHandler

// Byn.Awrtc.CallEventHandler

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>[]
struct List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* m_Items[1];

	inline List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
// Byn.Awrtc.ConnectionId[]
struct ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 m_Items[1];

	inline ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tAFDCDC48580754C83AFD55F9675360E307AE07DD* Dictionary_2_get_Keys_m7216E57F620C2AA30E821C3234DCE70DCE902EE2_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Byn.Awrtc.ConnectionId>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA8395CF7B0A9958099D4A0FB5A2EC2189A948121_gshared (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED159BEF822F4EACA16D32B4385DFD759D7B340E_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T Byn.Awrtc.LocalNetwork/WeakRef`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRef_1_Get_mD5A8B826889D2E217520B6F2E93CA819C3CD11CD_gshared (WeakRef_1_tFE5AD03683BE999836E84D42D3414126A15C294D* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork/WeakRef`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRef_1__ctor_m90958DE09411B8DD7079E8883D5879C6071E8BD4_gshared (WeakRef_1_tFE5AD03683BE999836E84D42D3414126A15C294D* __this, RuntimeObject* ___0_val, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3957715F043B7D769BADECA24C743309DEBB5824_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_gshared (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_gshared (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_gshared_inline (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_gshared (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF6A054EA639D5600E736A01ADF562AE0EF77517D_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD6D19BC9DB582E3FD8273867E3B682E5C82E15A3_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m644B5C907D7A6F7D9F8EDC2DA25D8F00A08E8F8B_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_gshared_inline (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E Queue_1_Dequeue_m56767622B11E2FCF00CC3A8F220A1DEF60E9BD13_gshared (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E Queue_1_Peek_m5949945EB7287C9B665DC304439B768A57A1B7D2_gshared (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mDDD3BA7000F27EFD798E8ECC3ED0602AD0E82F83_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t29356869AD666753565852C5270676CB9ACD677F Dictionary_2_GetEnumerator_m8EF60BDCD171041816962D7DC33856852A92B785_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D0B47E6A493C9384DBED0F7BC20C79F7333E9F3_gshared (Enumerator_t29356869AD666753565852C5270676CB9ACD677F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77 Enumerator_get_Current_mD35B15B10BACB9E14C27DF7098ECC286B440C8C2_gshared_inline (Enumerator_t29356869AD666753565852C5270676CB9ACD677F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB21761616024C09A7A89870EA58C9E1FF90731B4_gshared_inline (KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 KeyValuePair_2_get_Key_mBF956937A226AD351129828F9AA44BB78D1DF199_gshared_inline (KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9EEC0812F1537B52FC32FA6D4BE536BD1A8FDAE7_gshared (Enumerator_t29356869AD666753565852C5270676CB9ACD677F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD37040A5E8979D35189788E6452C363FC25CDE76_gshared (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB2057A83D86C76BBC9779B239B13B28831D4818B_gshared (Dictionary_2_t8C93FF0AF03A3A7A1922AAE0F6E6F04B865C7CC4* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m67DC01D7FD26C4B9E91696E99B3D1B310BA76552_gshared (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_gshared_inline (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m74D95FD0C9C144AE99DD8738950D86AC5BF1AAAE_gshared (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mB547917F8477F8A6320F4DB9180ACB1B311CAA69_gshared (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_gshared_inline (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, const RuntimeMethod* method) ;

// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.ByteArrayBuffer::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer__ctor_m72DD481534B3487AE567EF47BD69EFA178E22CF0 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arr, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.SLog::LW(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>::.ctor()
inline void List_1__ctor_m7ABAD61A338499F2477A7CC58A96F29A0A1DE5F9 (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.UInt32 Byn.Awrtc.ByteArrayBuffer::NextPowerOfTwo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteArrayBuffer_NextPowerOfTwo_m0A222D7741963842F06925AF6241627873E7E1AC (uint32_t ___0_v, const RuntimeMethod* method) ;
// System.Int32 Byn.Awrtc.ByteArrayBuffer::GetPower(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_GetPower_mC394B35C54440081DE7696251C46634A76D8F6BA (uint32_t ___0_anyPowerOfTwo, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>::get_Count()
inline int32_t List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_inline (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Byn.Awrtc.ByteArrayBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer__ctor_m48EB301B03B6ACF33C919674178BA6B3385468B9 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>::get_Item(System.Int32)
inline ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* List_1_get_Item_m10061B756E204913A45333C86A064386CCE17A1E (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* (*) (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD264F474F11F0E6FBE415A1596BE3578E7669537 (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void Byn.Awrtc.ByteArrayBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_Reset_mC5250194BCEC35BC3A14C97FDAB601926E8DA1BD (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.ByteArrayBuffer>::Add(T)
inline void List_1_Add_m146CF5F21997F993E7DD8720CBE881B1409DC6FC_inline (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* __this, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C*, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Byn.Awrtc.CallEventArgs::.ctor(Byn.Awrtc.CallEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B (CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.String Byn.Awrtc.ErrorInfo::get_ErrorMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ErrorInfo_get_ErrorMessage_mE918B75DB5A1A316BAAB7B16D03260F2C132C6E8_inline (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* __this, const RuntimeMethod* method) ;
// System.String Byn.Awrtc.ErrorEventArgs::GuessError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_GuessError_m7710C874D20B2204951BAA3887139759651AB522 (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.ErrorInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorInfo__ctor_m3AEA9E29713388D1F4298105AB270AFAAC9149D9 (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* __this, String_t* ___0_error, const RuntimeMethod* method) ;
// Byn.Awrtc.CallEventType Byn.Awrtc.CallEventArgs::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CallEventArgs_get_Type_m6C6F57DE5DB32EE8C7473324218610ECF1BDF3E7_inline (CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* __this, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.ConnectionId::op_Inequality(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_Inequality_m4E23A23BA6AEFE873ECA1D197175B68F0617DC32 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.ConnectionId::.ctor(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionId__ctor_mD6FB77426F0ACC9BFB11034E4C2CAA6052DE5FA7_inline (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, int16_t ___0_lId, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.ConnectionId::op_Equality(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_Equality_m0707CBDAC4D84A59240D98D4AE259F9F8DB143BD (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.ConnectionId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_Equals_m35743E4DD4A06BBB041AA3038196950D6956EDF6 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.ConnectionId::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_IsValid_m5D1825E8CAF6F48D4C8B64AF60AC46FDF24E7011 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
// System.Int32 Byn.Awrtc.ConnectionId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionId_GetHashCode_m0401767F6FD490AE5F6F04D3AAD3ABFA59010AB3 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, const RuntimeMethod* method) ;
// System.String System.Int16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23 (int16_t* __this, const RuntimeMethod* method) ;
// System.String Byn.Awrtc.ConnectionId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionId_ToString_mCE02582732D141880A5883AC6A8D852A5C756652 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String Byn.Awrtc.IceServer::get_Username()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IceServer_get_Username_m57F16DE3845C8634519ACC62B0E0E82D86356EA4_inline (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) ;
// System.String Byn.Awrtc.IceServer::get_Credential()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IceServer_get_Credential_m63F420875D884F2BE9E1B162566D5BBFE4A51969_inline (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::get_Keys()
inline KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996* Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9 (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996* (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, const RuntimeMethod*))Dictionary_2_get_Keys_m7216E57F620C2AA30E821C3234DCE70DCE902EE2_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Byn.Awrtc.ConnectionId>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::.ctor()
inline void Queue_1__ctor_mA8395CF7B0A9958099D4A0FB5A2EC2189A948121 (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C*, const RuntimeMethod*))Queue_1__ctor_mA8395CF7B0A9958099D4A0FB5A2EC2189A948121_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::.ctor()
inline void Dictionary_2__ctor_m72450D89B384B4ABFA674F36AFDD6DCFCC84539C (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, const RuntimeMethod*))Dictionary_2__ctor_mED159BEF822F4EACA16D32B4385DFD759D7B340E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419 (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::get_Item(TKey)
inline WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* (*) (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// T Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>::Get()
inline LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4 (WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* __this, const RuntimeMethod* method)
{
	return ((  LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* (*) (WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4*, const RuntimeMethod*))WeakRef_1_Get_mD5A8B826889D2E217520B6F2E93CA819C3CD11CD_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m92436B3569C3A6A00834A7043118BB9633D42E2A (RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.LocalNetwork::IsAddressInUse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalNetwork_IsAddressInUse_m54FC6264EDB8DA4C313C021B83406ACA472B49F2 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, String_t* ___0_serverAddress, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_m45BE9C3606718262C2F53E4A58240BAF02483E56 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, uint8_t ___0_type, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_id, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___2_error, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>::.ctor(T)
inline void WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9 (WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_val, const RuntimeMethod* method)
{
	((  void (*) (WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4*, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784*, const RuntimeMethod*))WeakRef_1__ctor_m90958DE09411B8DD7079E8883D5879C6071E8BD4_gshared)(__this, ___0_val, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m97BD1C2684BC60B8E0B2BD88C0235505152CFD6B (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* __this, String_t* ___0_key, WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542*, String_t*, WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mB231B79419FA9D4FD449D7829F0E00D14CA380CD (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, String_t* ___2_address, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetworkEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_mE0C344F12B9881B8ECF9588E29DBAD951EE4CFEE (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E ___0_ev, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.LocalNetwork::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalNetwork_get_IsServer_mFD664AA82D5E75A636F4AB0E12505C986E4296EC (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_m4F1AAF7838CCE29B6C0D9BFB057D613A0A1E1DE3 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, uint8_t ___0_type, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_id, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::Remove(TKey)
inline bool Dictionary_2_Remove_m66DB9F416FF18D17A8F9CEF11E3A8286D183098D (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// Byn.Awrtc.ConnectionId Byn.Awrtc.LocalNetwork::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 LocalNetwork_NextConnectionId_m8345C778767F0E42CDB94BDA1AA44BFFC242F2F2 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork::ConnectClient(Byn.Awrtc.LocalNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_ConnectClient_m5FFC02A41B091E2860F22390B600F829A6F87AFF (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_client, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500 (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4*, const RuntimeMethod*))Dictionary_2_set_Item_m3957715F043B7D769BADECA24C743309DEBB5824_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::GetEnumerator()
inline Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6 (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 (*) (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*, const RuntimeMethod*))List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>::Dispose()
inline void Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3 (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6*, const RuntimeMethod*))Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>::get_Current()
inline ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_inline (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6* __this, const RuntimeMethod* method)
{
	return ((  ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 (*) (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6*, const RuntimeMethod*))Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_gshared_inline)(__this, method);
}
// System.Void Byn.Awrtc.LocalNetwork::Disconnect(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Disconnect_mE56724C49BFD5E68C1206022EE65CA2400477ABF (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Byn.Awrtc.ConnectionId>::MoveNext()
inline bool Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851 (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6*, const RuntimeMethod*))Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::Clear()
inline void Dictionary_2_Clear_m7B558E0EBC2543C4E9CC88DA1E04A2811AD2B18B (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, const RuntimeMethod*))Dictionary_2_Clear_mF6A054EA639D5600E736A01ADF562AE0EF77517D_gshared)(__this, method);
}
// System.Void Byn.Awrtc.LocalNetwork::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_StopServer_mF5A3A792986747E1576556C93BC3A92DE2A7AA0F (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8DA02D05DA333EAE7F1B703CE91CDA212A17B0EE (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD6D19BC9DB582E3FD8273867E3B682E5C82E15A3_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::get_Item(TKey)
inline WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491 (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, const RuntimeMethod* method)
{
	return ((  WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, const RuntimeMethod*))Dictionary_2_get_Item_m644B5C907D7A6F7D9F8EDC2DA25D8F00A08E8F8B_gshared)(__this, ___0_key, method);
}
// System.Void Byn.Awrtc.LocalNetwork::ReceiveData(Byn.Awrtc.LocalNetwork,System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_ReceiveData_m00F9F3310B9CCFE3664436D80876EF4CF315F71A (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_network, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, int32_t ___2_offset, int32_t ___3_length, bool ___4_reliable, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork::CleanupWreakReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_CleanupWreakReferences_mFD6E2A04AD629BFA51ABD6E55CBA75D45130A224 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::get_Count()
inline int32_t Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_inline (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C*, const RuntimeMethod*))Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::Dequeue()
inline NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E Queue_1_Dequeue_m56767622B11E2FCF00CC3A8F220A1DEF60E9BD13 (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method)
{
	return ((  NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E (*) (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C*, const RuntimeMethod*))Queue_1_Dequeue_m56767622B11E2FCF00CC3A8F220A1DEF60E9BD13_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::Peek()
inline NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E Queue_1_Peek_m5949945EB7287C9B665DC304439B768A57A1B7D2 (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method)
{
	return ((  NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E (*) (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C*, const RuntimeMethod*))Queue_1_Peek_m5949945EB7287C9B665DC304439B768A57A1B7D2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, const RuntimeMethod*))Dictionary_2_ContainsKey_mDDD3BA7000F27EFD798E8ECC3ED0602AD0E82F83_gshared)(__this, ___0_key, method);
}
// System.Void Byn.Awrtc.LocalNetwork::InternalDisconnect(Byn.Awrtc.LocalNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_InternalDisconnect_m7316956C07DC620C73581EEA376A6CF8409AB52D (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_ln, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork::InternalDisconnect(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_InternalDisconnect_m3A0804F62396EAE4542423762B673D66DCFF90E4 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::GetEnumerator()
inline Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE Dictionary_2_GetEnumerator_m9980803030822077943E5C933E0688DB105B9CE5 (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m8EF60BDCD171041816962D7DC33856852A92B785_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::Dispose()
inline void Enumerator_Dispose_m5B57BB3D0C823604DC126B93904F1F9EDE48022D (Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE*, const RuntimeMethod*))Enumerator_Dispose_m3D0B47E6A493C9384DBED0F7BC20C79F7333E9F3_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::get_Current()
inline KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399 Enumerator_get_Current_m7DCC20B51621E2D41B0B43141FB8F62E6B4B20B2_inline (Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399 (*) (Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE*, const RuntimeMethod*))Enumerator_get_Current_mD35B15B10BACB9E14C27DF7098ECC286B440C8C2_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::get_Value()
inline WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* KeyValuePair_2_get_Value_m4B1BB1EF8E21F2528A0AABFA3B898A1F0BA5C2F0_inline (KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399* __this, const RuntimeMethod* method)
{
	return ((  WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* (*) (KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB21761616024C09A7A89870EA58C9E1FF90731B4_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::get_Key()
inline ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 KeyValuePair_2_get_Key_m246CCE364EB9C4C163802434ACA5F8FE1F42C6B0_inline (KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399* __this, const RuntimeMethod* method)
{
	return ((  ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 (*) (KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBF956937A226AD351129828F9AA44BB78D1DF199_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::MoveNext()
inline bool Enumerator_MoveNext_m39C754EE9E30E8E007230EEE3C5F928BA18C4E24 (Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE*, const RuntimeMethod*))Enumerator_MoveNext_m9EEC0812F1537B52FC32FA6D4BE536BD1A8FDAE7_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.MessageDataBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, RuntimeObject* ___2_dt, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mA46FFF771F9CD6E1C8DDFF476C0BD117007D5C80 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___2_errorInfo, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mEF44539E731EBBD4FAF7274A349D34F1126FD9E2 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Byn.Awrtc.NetworkEvent>::Enqueue(T)
inline void Queue_1_Enqueue_mD37040A5E8979D35189788E6452C363FC25CDE76 (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C*, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E, const RuntimeMethod*))Queue_1_Enqueue_mD37040A5E8979D35189788E6452C363FC25CDE76_gshared)(__this, ___0_item, method);
}
// Byn.Awrtc.ConnectionId Byn.Awrtc.LocalNetwork::FindConnectionId(Byn.Awrtc.LocalNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 LocalNetwork_FindConnectionId_mD267F95EF0E2B7E31B36F5D308A9776E68401CE6 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_network, const RuntimeMethod* method) ;
// Byn.Awrtc.ByteArrayBuffer Byn.Awrtc.ByteArrayBuffer::Get(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* ByteArrayBuffer_Get_m3281A3A589DC27B7AA164600AE7B34ED6FF814D2 (int32_t ___0_size, bool ___1_enforceZeroOffset, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.ByteArrayBuffer::CopyFrom(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_CopyFrom_m1FC3E903E65FEB98A5940190026178273D63EBB2 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arr, int32_t ___1_srcOffset, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_PositionReadRelative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionReadRelative_m6744691413C85626915E746913A3C1A66DC6C53E_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.SLog::LE(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LE_m9311AF7DA8AE883A95CEF0751ED30D23AA829B94 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) ;
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_PositionWriteRelative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionWriteRelative_m2CC7D7CDA5AABB1D8FBA5C95F4C7D5D9B6AC611F_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.ByteArrayBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_m4A77E55C0245AB61F4F376849EE45E4E39CEDA93 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, uint8_t ___0_type, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_id, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* ___2_data, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Byn.Awrtc.ConnectionId,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::Remove(TKey)
inline bool Dictionary_2_Remove_m29B10244968556F1EEFE987B0C83B73597140898 (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, const RuntimeMethod*))Dictionary_2_Remove_mB2057A83D86C76BBC9779B239B13B28831D4818B_gshared)(__this, ___0_key, method);
}
// System.Void Byn.Awrtc.LocalNetwork::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Shutdown_m61DCCABD52523F6B6B41E7EC7CB5D51ACD0DED7D (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Byn.Awrtc.LocalNetwork/WeakRef`1<Byn.Awrtc.LocalNetwork>>::.ctor()
inline void Dictionary_2__ctor_m42609DDED0249DA14BD2B76A9A8B4C4F78C337BD (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// System.Void Byn.Awrtc.MediaConfig::.ctor(Byn.Awrtc.MediaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig__ctor_m2E9B827C59D0E09C52CCAA02793EC90072E30A65 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* ___0_other, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC (StringBuilder_t* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0 (const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Byn.Awrtc.IceServer>::get_Item(System.Int32)
inline IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* List_1_get_Item_m49885D86FCF235DBD048894830528DB3CF2AF1BD (List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* (*) (List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<Byn.Awrtc.IceServer>::get_Count()
inline int32_t List_1_get_Count_m975DD5AE69B0BFD713D6B3CA200CDD023A1CD3A8_inline (List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String Byn.Awrtc.NetworkConfig::get_SignalingUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NetworkConfig_get_SignalingUrl_mFB0516DF1BC404414AC3490A36F3B65465255CD2_inline (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.NetworkConfig::get_IsConference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkConfig_get_IsConference_mCEB7079529140541805C1E187121429FE6390697_inline (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.IceServer>::.ctor()
inline void List_1__ctor_mED7FB4970DC04DF296F8C2937C405E5DEDC2A6AA (List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Byn.Awrtc.NetEventType Byn.Awrtc.NetworkEvent::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t NetworkEvent_get_Type_m749301699A91615CD355389E04E3E64032CFCB11_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// Byn.Awrtc.ConnectionId Byn.Awrtc.NetworkEvent::get_ConnectionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// System.Object Byn.Awrtc.NetworkEvent::get_RawData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkEvent_get_RawData_m010612D39AA930FDD4260A0D07FB12C9804E0192_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// Byn.Awrtc.MessageDataBuffer Byn.Awrtc.NetworkEvent::get_MessageData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// System.Byte[] Byn.Awrtc.NetworkEvent::GetDataAsByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetworkEvent_GetDataAsByteArray_m568204908708933BC4A21BEC55ABC5305E6C2697 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// System.String Byn.Awrtc.NetworkEvent::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEvent_get_Info_m0CD887E4E39567B9DBAAEBC46879985482E9D0BE (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// Byn.Awrtc.ErrorInfo Byn.Awrtc.NetworkEvent::get_ErrorInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* NetworkEvent_get_ErrorInfo_m790CDBC78B6D32DC7B3ECC1D6E8CF7F149FE014F (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mE67FC5AD4E0D46E8CE4DDA096620A94556B33F09 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_m0CBD870B498BDA850F660472770077423A85B7FB (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, RuntimeObject* ___2_dt, const RuntimeMethod* method) ;
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_Offset_m8D76EF91272F63C71B625CCD459816C32F15C8D8_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) ;
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_PositionWriteAbsolute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionWriteAbsolute_mA19A3E432DF05415EB2D82F69E07F006BDB43152 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) ;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_mB4DC448C2229347732EB34E8EE5C54EE171BE2A3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
// System.String Byn.Awrtc.NetworkEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEvent_ToString_mF0B49EAA98C221A242FCC1504B5566E7858F672C (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) ;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Byte[] Byn.Awrtc.ByteArrayBuffer::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteArrayBuffer_get_Buffer_mF7982705EFA0C018C06567ACD5274EF307B9078E (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.ByteArrayBuffer::set_PositionWriteRelative(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteArrayBuffer_set_PositionWriteRelative_m404083D7F5F4D5AC26EB3329E6BEC515DEE9CFB1_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15 (int16_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.NetworkEvent::AttachError(Byn.Awrtc.ErrorInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkEvent_AttachError_mF50D6D3BFBA8020CC7A93662FE52890703208DD4_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___0_error, const RuntimeMethod* method) ;
// System.String[] Byn.Awrtc.SLog::MergeTags(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tags, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_newTags, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.SLog::LogArray(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8 (RuntimeObject* ___0_obj, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.String>(T[]&,System.Int32)
inline void Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
// System.Void System.Action`2<System.Object,System.String[]>::Invoke(T1,T2)
inline void Action_2_Invoke_m9CDAB913D08292B7A7D1318BAE78325EEA8C11D5_inline (Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* __this, RuntimeObject* ___0_arg1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7*, RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.NetworkConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfig__ctor_m0AE0FDBD4ECDD5658C2D5844463A9F9D61F47EB5 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::.ctor()
inline void List_1__ctor_m67DC01D7FD26C4B9E91696E99B3D1B310BA76552 (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*, const RuntimeMethod*))List_1__ctor_m67DC01D7FD26C4B9E91696E99B3D1B310BA76552_gshared)(__this, method);
}
// System.Boolean Byn.Awrtc.NetworkConfig::get_AllowRenegotiation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkConfig_get_AllowRenegotiation_m19C17F8A7D7AC17DF1D412C1A420C18B0A176837_inline (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::CheckDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.SLog::L(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_L_m29F9D573958A70843D02EBB5A988FFD3D6023195 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::EnsureConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_EnsureConfiguration_m10234AA21678F6EC618D59034E311D7ABEB09186 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::ProcessCall(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_ProcessCall_m2EA3C171A75C255710FD4E301EDCAE973714330D (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::PendingCall(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_PendingCall_m552EB57809B7C78DE965B00A0C2D2447A5CA9525 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::ProcessListen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_ProcessListen_m942E1723FDA5BFB8D96C67AF2CFAE0A76693FC31 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::PendingListen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_PendingListen_m68D65334F0F12E0BB3C85F4ACB0794B3394C714D (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::Send(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Send_m02ED4A8CFD3A119AAAD018DB68049D449702CC7D (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_message, bool ___1_reliable, const RuntimeMethod* method) ;
// System.Byte[] Byn.Awrtc.Base.AWebRtcCall::PackStringMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWebRtcCall_PackStringMsg_m541C916DFFE349A27ABBCAB140307EC120F152E9 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::IsStringMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_IsStringMsg_mF6FD7F7E50E5BA64659CE3B0D0C415A39CB1494E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Byte[] Byn.Awrtc.Base.AWebRtcCall::PackDataMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWebRtcCall_PackDataMsg_m543EB718C49FE11C9E29DB123C8EF7C416A1D536 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::OnConfigurationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_OnConfigurationFailed_m224529A37E7AF75501895C4778192A724CE4669A (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_error, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::OnConfigurationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_OnConfigurationComplete_m5C34524B1CE3482E6E21B5A326F3A31FA55B123F (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.FrameUpdateEventArgs::.ctor(Byn.Awrtc.ConnectionId,Byn.Awrtc.IFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameUpdateEventArgs__ctor_m05F8E94F9619CA434E3D798995808AAC2115EB16 (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_conId, RuntimeObject* ___1_frame, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::TriggerCallEvent(Byn.Awrtc.CallEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___0_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::Add(T)
inline void List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_inline (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, const RuntimeMethod*))List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_gshared_inline)(__this, ___0_item, method);
}
// System.Void Byn.Awrtc.CallAcceptedEventArgs::.ctor(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallAcceptedEventArgs__ctor_mA3AF7F3E7716C822F53FC736B3A3139484DFC7CF (CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_connectionId, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.ErrorEventArgs::.ctor(Byn.Awrtc.CallEventType,Byn.Awrtc.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_mBB04F7DB056528287DF7910A3D3AF4CAB53F0EDA (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* __this, int32_t ___0_eventType, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___1_errorInfo, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::Contains(T)
inline bool List_1_Contains_m74D95FD0C9C144AE99DD8738950D86AC5BF1AAAE (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, const RuntimeMethod*))List_1_Contains_m74D95FD0C9C144AE99DD8738950D86AC5BF1AAAE_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::Remove(T)
inline bool List_1_Remove_mB547917F8477F8A6320F4DB9180ACB1B311CAA69 (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, const RuntimeMethod*))List_1_Remove_mB547917F8477F8A6320F4DB9180ACB1B311CAA69_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<Byn.Awrtc.ConnectionId>::get_Count()
inline int32_t List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_inline (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*, const RuntimeMethod*))List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_gshared_inline)(__this, method);
}
// System.Void Byn.Awrtc.CallEndedEventArgs::.ctor(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallEndedEventArgs__ctor_mD50EFA3DEB25C0EFB4AA06C66126E158F0DC6E6A (CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_connectionId, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.WaitForIncomingCallEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForIncomingCallEventArgs__ctor_mC379C8D451FF05E7B0250165CD88B07E06C2930C (WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255* __this, String_t* ___0_address, const RuntimeMethod* method) ;
// System.Byte[] Byn.Awrtc.MessageDataBufferExt::Copy(Byn.Awrtc.MessageDataBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageDataBufferExt_Copy_m6628C408FF9B181C8AD9737AF5A8FBA0C03BC8EC (RuntimeObject* ___0_buffer, const RuntimeMethod* method) ;
// System.String Byn.Awrtc.Base.AWebRtcCall::UnpackStringMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWebRtcCall_UnpackStringMsg_mB0CFF7A6E1A0AEC6D71E858CEB3F319A82663DFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.MessageEventArgs::.ctor(Byn.Awrtc.ConnectionId,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEventArgs__ctor_m7647C6440347809EFC77AB64C1275BAD6E098248 (MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, String_t* ___1_message, bool ___2_reliable, const RuntimeMethod* method) ;
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::IsDataMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_IsDataMsg_m854E78A88BCBC5ECEA5F9D6D9C32988C59C7BD2E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Byte[] Byn.Awrtc.Base.AWebRtcCall::UnpackDataMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWebRtcCall_UnpackDataMsg_m8E6178BC303306E10C298AE83585FEDAAF5AE304 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_msg, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.DataMessageEventArgs::.ctor(Byn.Awrtc.ConnectionId,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMessageEventArgs__ctor_m124D5E4A61259583FEB20A7F07E7279FD4C23CD9 (DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, bool ___2_reliable, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::ClearPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_ClearPending_m2E8CD1E54BB41FF79F840F768969FE6479DD2271 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.MediaConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig__ctor_m74B48595BB33375E761C1712B675F646CDE9C7EA (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.CallEventHandler::Invoke(System.Object,Byn.Awrtc.CallEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_inline (CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method) ;
// System.Void Byn.Awrtc.Base.AWebRtcCall::DoPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_DoPending_m3D7190BD67EF62312E0189A439762F880B108FEB (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) ;
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
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_PositionWriteRelative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionWriteRelative_m2CC7D7CDA5AABB1D8FBA5C95F4C7D5D9B6AC611F (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___positionWrite_3;
		return L_0;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::set_PositionWriteRelative(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_set_PositionWriteRelative_m404083D7F5F4D5AC26EB3329E6BEC515DEE9CFB1 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___positionWrite_3 = L_0;
		return;
	}
}
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_PositionWriteAbsolute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionWriteAbsolute_mA19A3E432DF05415EB2D82F69E07F006BDB43152 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___positionWrite_3;
		int32_t L_1 = __this->___offset_5;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::set_PositionWriteAbsolute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_set_PositionWriteAbsolute_mA7982BB7772E5CE9A6495EB75DED9287D47DAF41 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->___offset_5;
		__this->___positionWrite_3 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		return;
	}
}
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_PositionReadRelative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionReadRelative_m6744691413C85626915E746913A3C1A66DC6C53E (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___positionRead_4;
		return L_0;
	}
}
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_PositionReadAbsolute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionReadAbsolute_m73983E515DD8910D8F29F1C99AB33A702EA43588 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___positionRead_4;
		int32_t L_1 = __this->___offset_5;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_Offset_m8D76EF91272F63C71B625CCD459816C32F15C8D8 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___offset_5;
		return L_0;
	}
}
// System.Byte[] Byn.Awrtc.ByteArrayBuffer::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteArrayBuffer_get_Buffer_mF7982705EFA0C018C06567ACD5274EF307B9078E (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mDisposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0F8572CE3547C631F4BC5F005689A0BC5E0EE20)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteArrayBuffer_get_Buffer_mF7982705EFA0C018C06567ACD5274EF307B9078E_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___array_2;
		return L_2;
	}
}
// System.Int32 Byn.Awrtc.ByteArrayBuffer::get_ContentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_ContentLength_m3C66B9598E0E265F0EBA86D36EEED3E5BDAC0C54 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mDisposed_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0F8572CE3547C631F4BC5F005689A0BC5E0EE20)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteArrayBuffer_get_ContentLength_m3C66B9598E0E265F0EBA86D36EEED3E5BDAC0C54_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->___positionWrite_3;
		return L_2;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::set_ContentLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_set_ContentLength_m130FC5A57AC41C623C502434E692EF2118F64429 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___positionWrite_3 = L_0;
		return;
	}
}
// System.Boolean Byn.Awrtc.ByteArrayBuffer::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteArrayBuffer_get_IsDisposed_m2076E51C5E0C308249E6BA3A59824452D8C51AA9 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mDisposed_7;
		return L_0;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer__ctor_m48EB301B03B6ACF33C919674178BA6B3385468B9 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___mFromPool_6 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___mFromPool_6 = (bool)1;
		int32_t L_0 = ___0_size;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___array_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___array_2), (void*)L_1);
		__this->___offset_5 = 0;
		__this->___positionWrite_3 = 0;
		__this->___positionRead_4 = 0;
		return;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer__ctor_m0DCB1EE93324961765BB0B71BB3EE8895D523B2A (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arr, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_arr;
		NullCheck(L_1);
		ByteArrayBuffer__ctor_m72DD481534B3487AE567EF47BD69EFA178E22CF0(__this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer__ctor_m72DD481534B3487AE567EF47BD69EFA178E22CF0 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arr, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		__this->___mFromPool_6 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___mFromPool_6 = (bool)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_arr;
		__this->___array_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___array_2), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->___offset_5 = L_1;
		__this->___positionRead_4 = 0;
		int32_t L_2 = ___2_length;
		__this->___positionWrite_3 = L_2;
		return;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_Reset_mC5250194BCEC35BC3A14C97FDAB601926E8DA1BD (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		__this->___mDisposed_7 = (bool)0;
		__this->___positionRead_4 = 0;
		__this->___positionWrite_3 = 0;
		return;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_Finalize_mF1AB93F0C7A628788DCEC758F9E5688FBB6CC79C (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DF513F73349C4F933AE9D6A49A319E490D18DF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_0 = __this->___mDisposed_7;
				if (L_0)
				{
					goto IL_0027_1;
				}
			}
			{
				bool L_1 = __this->___mFromPool_6;
				if (!L_1)
				{
					goto IL_0027_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
				bool L_2 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___LOG_GC_CALLS_1;
				if (!L_2)
				{
					goto IL_0027_1;
				}
			}
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
				il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
				SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(_stringLiteral3DF513F73349C4F933AE9D6A49A319E490D18DF0, L_3, NULL);
			}

IL_0027_1:
			{
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		return;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::CopyFrom(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_CopyFrom_m1FC3E903E65FEB98A5940190026178273D63EBB2 (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arr, int32_t ___1_srcOffset, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_arr;
		int32_t L_1 = ___1_srcOffset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___array_2;
		int32_t L_3 = __this->___offset_5;
		int32_t L_4 = ___2_len;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, L_4, NULL);
		int32_t L_5 = ___2_len;
		__this->___positionWrite_3 = L_5;
		return;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer__cctor_m1B236CCC4486A29EF105A70BD2288EB494D1556C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7ABAD61A338499F2477A7CC58A96F29A0A1DE5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6EB70CB763ED0F38063A7F9D39E7E5A0EDFBBB26____20731A0997122AAAE93B2C58C609D52BF080F0A1_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_0 = (List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B*)(List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B*)SZArrayNew(List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0), (void*)L_0);
		((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___LOG_GC_CALLS_1 = (bool)0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6EB70CB763ED0F38063A7F9D39E7E5A0EDFBBB26____20731A0997122AAAE93B2C58C609D52BF080F0A1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___MultiplyDeBruijnBitPosition_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___MultiplyDeBruijnBitPosition_8), (void*)L_2);
		List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_4 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
		V_0 = L_4;
		List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_5 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_6 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 0;
				goto IL_0049_1;
			}

IL_0039_1:
			{
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_7 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
				int32_t L_8 = V_1;
				List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* L_9 = (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C*)il2cpp_codegen_object_new(List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				List_1__ctor_m7ABAD61A338499F2477A7CC58A96F29A0A1DE5F9(L_9, List_1__ctor_m7ABAD61A338499F2477A7CC58A96F29A0A1DE5F9_RuntimeMethod_var);
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_9);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C*)L_9);
				int32_t L_10 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
			}

IL_0049_1:
			{
				int32_t L_11 = V_1;
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_12 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
				NullCheck(L_12);
				if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Int32 Byn.Awrtc.ByteArrayBuffer::GetPower(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_GetPower_mC394B35C54440081DE7696251C46634A76D8F6BA (uint32_t ___0_anyPowerOfTwo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_anyPowerOfTwo;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)125613361)))>>((int32_t)27)));
		il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___MultiplyDeBruijnBitPosition_8;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		uint32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.UInt32 Byn.Awrtc.ByteArrayBuffer::NextPowerOfTwo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteArrayBuffer_NextPowerOfTwo_m0A222D7741963842F06925AF6241627873E7E1AC (uint32_t ___0_v, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_v;
		uint32_t L_1 = ___0_v;
		___0_v = ((int32_t)((int32_t)L_0|((int32_t)((uint32_t)L_1>>1))));
		uint32_t L_2 = ___0_v;
		uint32_t L_3 = ___0_v;
		___0_v = ((int32_t)((int32_t)L_2|((int32_t)((uint32_t)L_3>>2))));
		uint32_t L_4 = ___0_v;
		uint32_t L_5 = ___0_v;
		___0_v = ((int32_t)((int32_t)L_4|((int32_t)((uint32_t)L_5>>4))));
		uint32_t L_6 = ___0_v;
		uint32_t L_7 = ___0_v;
		___0_v = ((int32_t)((int32_t)L_6|((int32_t)((uint32_t)L_7>>8))));
		uint32_t L_8 = ___0_v;
		uint32_t L_9 = ___0_v;
		___0_v = ((int32_t)((int32_t)L_8|((int32_t)((uint32_t)L_9>>((int32_t)16)))));
		uint32_t L_10 = ___0_v;
		___0_v = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		uint32_t L_11 = ___0_v;
		return L_11;
	}
}
// Byn.Awrtc.ByteArrayBuffer Byn.Awrtc.ByteArrayBuffer::Get(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* ByteArrayBuffer_Get_m3281A3A589DC27B7AA164600AE7B34ED6FF814D2 (int32_t ___0_size, bool ___1_enforceZeroOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD264F474F11F0E6FBE415A1596BE3578E7669537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m10061B756E204913A45333C86A064386CCE17A1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* V_2 = NULL;
	List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* V_3 = NULL;
	{
		int32_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = ByteArrayBuffer_NextPowerOfTwo_m0A222D7741963842F06925AF6241627873E7E1AC(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = ((int32_t)128);
	}

IL_0015:
	{
		uint32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = ByteArrayBuffer_GetPower_mC394B35C54440081DE7696251C46634A76D8F6BA(L_3, NULL);
		V_1 = L_4;
		List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_5 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
		V_3 = L_5;
		List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_6 = V_3;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)L_6, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_7 = V_3;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_7, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_8 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
				int32_t L_9 = V_1;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				NullCheck(L_11);
				int32_t L_12;
				L_12 = List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_inline(L_11, List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_003f_1;
				}
			}
			{
				uint32_t L_13 = V_0;
				ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_14 = (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*)il2cpp_codegen_object_new(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				ByteArrayBuffer__ctor_m48EB301B03B6ACF33C919674178BA6B3385468B9(L_14, L_13, NULL);
				V_2 = L_14;
				goto IL_0071;
			}

IL_003f_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_15 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
				int32_t L_16 = V_1;
				NullCheck(L_15);
				int32_t L_17 = L_16;
				List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
				List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* L_19 = L_18;
				List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* L_20 = L_19;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_inline(L_20, List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_RuntimeMethod_var);
				NullCheck(L_20);
				ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_22;
				L_22 = List_1_get_Item_m10061B756E204913A45333C86A064386CCE17A1E(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), List_1_get_Item_m10061B756E204913A45333C86A064386CCE17A1E_RuntimeMethod_var);
				V_2 = L_22;
				List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* L_23 = L_19;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_inline(L_23, List_1_get_Count_m30CDFD1E12704F874B325194B161D378E8A60400_RuntimeMethod_var);
				NullCheck(L_23);
				List_1_RemoveAt_mD264F474F11F0E6FBE415A1596BE3578E7669537(L_23, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), List_1_RemoveAt_mD264F474F11F0E6FBE415A1596BE3578E7669537_RuntimeMethod_var);
				ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_25 = V_2;
				NullCheck(L_25);
				ByteArrayBuffer_Reset_mC5250194BCEC35BC3A14C97FDAB601926E8DA1BD(L_25, NULL);
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_26 = V_2;
		return L_26;
	}
}
// System.Void Byn.Awrtc.ByteArrayBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayBuffer_Dispose_mBDCB25D21BC4CD54EF9DC430E7C5CCE183C5200E (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m146CF5F21997F993E7DD8720CBE881B1409DC6FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_0 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
		V_0 = L_0;
		List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_3 = __this->___mDisposed_7;
				if (!L_3)
				{
					goto IL_001f_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_4);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0F8572CE3547C631F4BC5F005689A0BC5E0EE20)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteArrayBuffer_Dispose_mBDCB25D21BC4CD54EF9DC430E7C5CCE183C5200E_RuntimeMethod_var)));
			}

IL_001f_1:
			{
				__this->___mDisposed_7 = (bool)1;
				bool L_5 = __this->___mFromPool_6;
				if (!L_5)
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___array_2;
				NullCheck(L_6);
				il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
				int32_t L_7;
				L_7 = ByteArrayBuffer_GetPower_mC394B35C54440081DE7696251C46634A76D8F6BA(((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
				V_1 = L_7;
				List_1U5BU5D_tE8BECFB970B06210ECFC19C683632B221CECBE3B* L_8 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var))->___sPool_0;
				int32_t L_9 = V_1;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				List_1_t442B01033403050D7ED28308C6BCDE4A60FFFE3C* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				NullCheck(L_11);
				List_1_Add_m146CF5F21997F993E7DD8720CBE881B1409DC6FC_inline(L_11, __this, List_1_Add_m146CF5F21997F993E7DD8720CBE881B1409DC6FC_RuntimeMethod_var);
			}

IL_0049_1:
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
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
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_Multicast(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* currentDelegate = reinterpret_cast<CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_args, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenInst(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_args, method);
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenStatic(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_args, method);
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenStaticInvoker(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_args);
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_ClosedStaticInvoker(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_args);
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenVirtual(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_args);
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenInterface(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_args);
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenGenericVirtual(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* >::Invoke(method, ___0_sender, ___1_args);
}
void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenGenericInterface(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* >::Invoke(method, ___0_sender, ___1_args);
}
// System.Void Byn.Awrtc.CallEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallEventHandler__ctor_m3F755A51343911494EB71D72D73E6A0C3E6F8665 (CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenStatic;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_Multicast;
}
// System.Void Byn.Awrtc.CallEventHandler::Invoke(System.Object,Byn.Awrtc.CallEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD (CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_args, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Byn.Awrtc.CallEventHandler::BeginInvoke(System.Object,Byn.Awrtc.CallEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallEventHandler_BeginInvoke_mA193AF7DAD6723410124F2B5FBBB1810353939CC (CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_sender;
	__d_args[1] = ___1_args;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Byn.Awrtc.CallEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallEventHandler_EndInvoke_m48FAEFFA9E06DE23834865FEC86C816233AD3FC3 (CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// Byn.Awrtc.CallEventType Byn.Awrtc.CallEventArgs::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallEventArgs_get_Type_m6C6F57DE5DB32EE8C7473324218610ECF1BDF3E7 (CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mType_0;
		return L_0;
	}
}
// System.Void Byn.Awrtc.CallEventArgs::.ctor(Byn.Awrtc.CallEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B (CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_type;
		__this->___mType_0 = L_0;
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
// Byn.Awrtc.ConnectionId Byn.Awrtc.CallAcceptedEventArgs::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 CallAcceptedEventArgs_get_ConnectionId_mAE7329DBB7BB9A90355C2801D5BDC7A02595D602 (CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___mConnectionId_1;
		return L_0;
	}
}
// System.Void Byn.Awrtc.CallAcceptedEventArgs::.ctor(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallAcceptedEventArgs__ctor_mA3AF7F3E7716C822F53FC736B3A3139484DFC7CF (CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_connectionId, const RuntimeMethod* method) 
{
	{
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(__this, 2, NULL);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_connectionId;
		__this->___mConnectionId_1 = L_0;
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
// Byn.Awrtc.ConnectionId Byn.Awrtc.CallEndedEventArgs::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 CallEndedEventArgs_get_ConnectionId_m87C0B0E802AFDFE36F425B0146279CD0B85393AA (CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___mConnectionId_1;
		return L_0;
	}
}
// System.Void Byn.Awrtc.CallEndedEventArgs::.ctor(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallEndedEventArgs__ctor_mD50EFA3DEB25C0EFB4AA06C66126E158F0DC6E6A (CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_connectionId, const RuntimeMethod* method) 
{
	{
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(__this, 3, NULL);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_connectionId;
		__this->___mConnectionId_1 = L_0;
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
// Byn.Awrtc.CallErrorType Byn.Awrtc.ErrorEventArgs::get_ErrorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorEventArgs_get_ErrorType_m982253FA5159350383DEA9701B168CB9429A1694 (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
	}
}
// Byn.Awrtc.ErrorInfo Byn.Awrtc.ErrorEventArgs::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ErrorEventArgs_get_Info_m08384B451C8A93717E483A2F1A44DAF795FFDC38 (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* __this, const RuntimeMethod* method) 
{
	{
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_0 = __this->___mErrorInfo_1;
		return L_0;
	}
}
// System.String Byn.Awrtc.ErrorEventArgs::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_ErrorMessage_mF43B741F5BB7348DF6D0B72EA6E7148C72432F3A (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* __this, const RuntimeMethod* method) 
{
	{
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_0 = __this->___mErrorInfo_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ErrorInfo_get_ErrorMessage_mE918B75DB5A1A316BAAB7B16D03260F2C132C6E8_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Byn.Awrtc.ErrorEventArgs::.ctor(Byn.Awrtc.CallEventType,Byn.Awrtc.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_mBB04F7DB056528287DF7910A3D3AF4CAB53F0EDA (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* __this, int32_t ___0_eventType, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___1_errorInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_eventType;
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(__this, L_0, NULL);
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_1 = ___1_errorInfo;
		__this->___mErrorInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mErrorInfo_1), (void*)L_1);
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_2 = __this->___mErrorInfo_1;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = ErrorEventArgs_GuessError_m7710C874D20B2204951BAA3887139759651AB522(__this, NULL);
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_4 = (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620*)il2cpp_codegen_object_new(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ErrorInfo__ctor_m3AEA9E29713388D1F4298105AB270AFAAC9149D9(L_4, L_3, NULL);
		__this->___mErrorInfo_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mErrorInfo_1), (void*)L_4);
	}

IL_0027:
	{
		return;
	}
}
// System.String Byn.Awrtc.ErrorEventArgs::GuessError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_GuessError_m7710C874D20B2204951BAA3887139759651AB522 (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24557446E6575FDFCEA76AB20FA4A263ABD54CEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADD5B2F895D132E788567E84C7F23638A56C022);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = CallEventArgs_get_Type_m6C6F57DE5DB32EE8C7473324218610ECF1BDF3E7_inline(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0021;
	}

IL_0011:
	{
		V_0 = _stringLiteral8ADD5B2F895D132E788567E84C7F23638A56C022;
		goto IL_0027;
	}

IL_0019:
	{
		V_0 = _stringLiteral24557446E6575FDFCEA76AB20FA4A263ABD54CEF;
		goto IL_0027;
	}

IL_0021:
	{
		V_0 = _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
	}

IL_0027:
	{
		String_t* L_3 = V_0;
		return L_3;
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
// System.String Byn.Awrtc.WaitForIncomingCallEventArgs::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaitForIncomingCallEventArgs_get_Address_m0C3DC8A9F6AED43652C69208A2B3A8146CDB91A9 (WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mAddress_1;
		return L_0;
	}
}
// System.Void Byn.Awrtc.WaitForIncomingCallEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForIncomingCallEventArgs__ctor_mC379C8D451FF05E7B0250165CD88B07E06C2930C (WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	{
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(__this, 1, NULL);
		String_t* L_0 = ___0_address;
		__this->___mAddress_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAddress_1), (void*)L_0);
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
// Byn.Awrtc.ConnectionId Byn.Awrtc.MessageEventArgs::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 MessageEventArgs_get_ConnectionId_m4D273224E183CB8F3DB086F8FD1678338512EF30 (MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___mConnectionId_1;
		return L_0;
	}
}
// System.Boolean Byn.Awrtc.MessageEventArgs::get_Reliable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageEventArgs_get_Reliable_m0995B9A96300FDB8DA6C35ADE43D0CAF044FA723 (MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mReliable_2;
		return L_0;
	}
}
// System.String Byn.Awrtc.MessageEventArgs::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageEventArgs_get_Content_m5B902F8AD684D4D6651FE626DBBDB9C7192E7A4C (MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mContent_3;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MessageEventArgs::.ctor(Byn.Awrtc.ConnectionId,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEventArgs__ctor_m7647C6440347809EFC77AB64C1275BAD6E098248 (MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, String_t* ___1_message, bool ___2_reliable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		__this->___mConnectionId_1 = L_0;
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(__this, 5, NULL);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___0_id;
		__this->___mConnectionId_1 = L_1;
		String_t* L_2 = ___1_message;
		__this->___mContent_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mContent_3), (void*)L_2);
		bool L_3 = ___2_reliable;
		__this->___mReliable_2 = L_3;
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
// Byn.Awrtc.ConnectionId Byn.Awrtc.DataMessageEventArgs::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 DataMessageEventArgs_get_ConnectionId_mDC1012FBD065ECEE59239C4E87506229480182E9 (DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___mConnectionId_1;
		return L_0;
	}
}
// System.Byte[] Byn.Awrtc.DataMessageEventArgs::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataMessageEventArgs_get_Content_mCE51E8F23487973A1A66FAA50F0BE0F4E0CAC035 (DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mContent_2;
		return L_0;
	}
}
// System.Boolean Byn.Awrtc.DataMessageEventArgs::get_Reliable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMessageEventArgs_get_Reliable_m7BD08AE994F41D5663D9BD6F1605FEC7FD6E11A9 (DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mReliable_3;
		return L_0;
	}
}
// System.Void Byn.Awrtc.DataMessageEventArgs::.ctor(Byn.Awrtc.ConnectionId,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMessageEventArgs__ctor_m124D5E4A61259583FEB20A7F07E7279FD4C23CD9 (DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, bool ___2_reliable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		__this->___mConnectionId_1 = L_0;
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(__this, ((int32_t)10), NULL);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___0_id;
		__this->___mConnectionId_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_data;
		__this->___mContent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mContent_2), (void*)L_2);
		bool L_3 = ___2_reliable;
		__this->___mReliable_3 = L_3;
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
// Byn.Awrtc.FramePixelFormat Byn.Awrtc.FrameUpdateEventArgs::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameUpdateEventArgs_get_Format_m7C36A48116A63B09974E6B1FC1029D593B50AF47 (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mFormat_1;
		return L_0;
	}
}
// Byn.Awrtc.ConnectionId Byn.Awrtc.FrameUpdateEventArgs::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 FrameUpdateEventArgs_get_ConnectionId_mC99AEE297CC99FB8D057ABBA64F1E29444775BB3 (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___mConnectionId_2;
		return L_0;
	}
}
// System.Int32 Byn.Awrtc.FrameUpdateEventArgs::get_TrackId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameUpdateEventArgs_get_TrackId_mFC3C40311E8D65F380C772F7F2A35DA92172333A (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mTrackId_3;
		return L_0;
	}
}
// System.Boolean Byn.Awrtc.FrameUpdateEventArgs::get_IsRemote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameUpdateEventArgs_get_IsRemote_m85DF3814C0760433082C563BBE9AA4BB01B4FCB9 (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___mConnectionId_2;
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		bool L_2;
		L_2 = ConnectionId_op_Inequality_m4E23A23BA6AEFE873ECA1D197175B68F0617DC32(L_0, L_1, NULL);
		return L_2;
	}
}
// Byn.Awrtc.IFrame Byn.Awrtc.FrameUpdateEventArgs::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrameUpdateEventArgs_get_Frame_mDD9525664672FCEDDDC6F0CBC37E69137BDE0BB1 (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___mFrame_4;
		return L_0;
	}
}
// System.Void Byn.Awrtc.FrameUpdateEventArgs::.ctor(Byn.Awrtc.ConnectionId,Byn.Awrtc.IFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameUpdateEventArgs__ctor_m05F8E94F9619CA434E3D798995808AAC2115EB16 (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_conId, RuntimeObject* ___1_frame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		__this->___mConnectionId_2 = L_0;
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(__this, 4, NULL);
		__this->___mFormat_1 = 1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___0_conId;
		__this->___mConnectionId_2 = L_1;
		RuntimeObject* L_2 = ___1_frame;
		__this->___mFrame_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mFrame_4), (void*)L_2);
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
// System.Void Byn.Awrtc.ConnectionId::.ctor(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionId__ctor_mD6FB77426F0ACC9BFB11034E4C2CAA6052DE5FA7 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, int16_t ___0_lId, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_lId;
		__this->___id_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionId__ctor_mD6FB77426F0ACC9BFB11034E4C2CAA6052DE5FA7_AdjustorThunk (RuntimeObject* __this, int16_t ___0_lId, const RuntimeMethod* method)
{
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*>(__this + _offset);
	ConnectionId__ctor_mD6FB77426F0ACC9BFB11034E4C2CAA6052DE5FA7_inline(_thisAdjusted, ___0_lId, method);
}
// System.Boolean Byn.Awrtc.ConnectionId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_Equals_m35743E4DD4A06BBB041AA3038196950D6956EDF6 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = (*(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*)__this);
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ConnectionId_op_Equality_m0707CBDAC4D84A59240D98D4AE259F9F8DB143BD(((*(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*)((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*)(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*)UnBox(L_1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var)))), L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConnectionId_Equals_m35743E4DD4A06BBB041AA3038196950D6956EDF6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ConnectionId_Equals_m35743E4DD4A06BBB041AA3038196950D6956EDF6(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean Byn.Awrtc.ConnectionId::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_IsValid_m5D1825E8CAF6F48D4C8B64AF60AC46FDF24E7011 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = (*(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*)__this);
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		bool L_2;
		L_2 = ConnectionId_op_Inequality_m4E23A23BA6AEFE873ECA1D197175B68F0617DC32(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ConnectionId_IsValid_m5D1825E8CAF6F48D4C8B64AF60AC46FDF24E7011_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ConnectionId_IsValid_m5D1825E8CAF6F48D4C8B64AF60AC46FDF24E7011(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Byn.Awrtc.ConnectionId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionId_GetHashCode_m0401767F6FD490AE5F6F04D3AAD3ABFA59010AB3 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = (&__this->___id_1);
		int32_t L_1;
		L_1 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionId_GetHashCode_m0401767F6FD490AE5F6F04D3AAD3ABFA59010AB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionId_GetHashCode_m0401767F6FD490AE5F6F04D3AAD3ABFA59010AB3(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Byn.Awrtc.ConnectionId::op_Equality(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_Equality_m0707CBDAC4D84A59240D98D4AE259F9F8DB143BD (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_i1;
		int16_t L_1 = L_0.___id_1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___1_i2;
		int16_t L_3 = L_2.___id_1;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Byn.Awrtc.ConnectionId::op_Inequality(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_Inequality_m4E23A23BA6AEFE873ECA1D197175B68F0617DC32 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_i1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_i2;
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ConnectionId_op_Equality_m0707CBDAC4D84A59240D98D4AE259F9F8DB143BD(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Byn.Awrtc.ConnectionId::op_LessThan(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_LessThan_mB9BA51DEAB8BE0B3C441167C81F0769AE37481E4 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_i1;
		int16_t L_1 = L_0.___id_1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___1_i2;
		int16_t L_3 = L_2.___id_1;
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Byn.Awrtc.ConnectionId::op_GreaterThan(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_GreaterThan_m2FB347127031EEDD5FF60C6443E2792F26D98B63 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_i1;
		int16_t L_1 = L_0.___id_1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___1_i2;
		int16_t L_3 = L_2.___id_1;
		return (bool)((((int32_t)L_1) > ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Byn.Awrtc.ConnectionId::op_LessThanOrEqual(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_LessThanOrEqual_mE40F4560DC361DD2CD72921C10152DF8533BA8B1 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_i1;
		int16_t L_1 = L_0.___id_1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___1_i2;
		int16_t L_3 = L_2.___id_1;
		return (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Byn.Awrtc.ConnectionId::op_GreaterThanOrEqual(Byn.Awrtc.ConnectionId,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionId_op_GreaterThanOrEqual_mD519C82C8441A6D704675BA477782453F0F98FC5 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_i1, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_i2, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = ___0_i1;
		int16_t L_1 = L_0.___id_1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___1_i2;
		int16_t L_3 = L_2.___id_1;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Byn.Awrtc.ConnectionId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionId_ToString_mCE02582732D141880A5883AC6A8D852A5C756652 (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = (&__this->___id_1);
		String_t* L_1;
		L_1 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionId_ToString_mCE02582732D141880A5883AC6A8D852A5C756652_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionId_ToString_mCE02582732D141880A5883AC6A8D852A5C756652(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Byn.Awrtc.ConnectionId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionId__cctor_m36862D4A6968E2877DEE3B696641EF46BFF24A7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7));
		(&V_0)->___id_1 = (int16_t)(-1);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = V_0;
		((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0 = L_0;
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
// System.Boolean Byn.Awrtc.DefaultValues::get_AuthenticateAsClientBugWorkaround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultValues_get_AuthenticateAsClientBugWorkaround_m1044AA3F64367F01016184FDBB36CB0803E20DBD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_il2cpp_TypeInfo_var);
		bool L_0 = ((DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_il2cpp_TypeInfo_var))->___sAuthenticateAsClientBugWorkaround_0;
		return L_0;
	}
}
// System.Void Byn.Awrtc.DefaultValues::set_AuthenticateAsClientBugWorkaround(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues_set_AuthenticateAsClientBugWorkaround_m16AB83A61C784B0A9DE38A6566991E218761CAD6 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_il2cpp_TypeInfo_var);
		((DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tF672DC5FEFA8009440F928F4FD51EA3F5328058E_il2cpp_TypeInfo_var))->___sAuthenticateAsClientBugWorkaround_0 = L_0;
		return;
	}
}
// System.Void Byn.Awrtc.DefaultValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues__cctor_mE86D74461A396D1F29B93850EE7397A33301E145 (const RuntimeMethod* method) 
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
// System.String Byn.Awrtc.ErrorInfo::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorInfo_get_ErrorMessage_mE918B75DB5A1A316BAAB7B16D03260F2C132C6E8 (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mErrorMessage_10;
		return L_0;
	}
}
// System.Void Byn.Awrtc.ErrorInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorInfo__ctor_m3AEA9E29713388D1F4298105AB270AFAAC9149D9 (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_error;
		__this->___mErrorMessage_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mErrorMessage_10), (void*)L_0);
		return;
	}
}
// System.String Byn.Awrtc.ErrorInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorInfo_ToString_mE2C7093F3AA3F5527E679C6EF149F6F96B87427D (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mErrorMessage_10;
		return L_0;
	}
}
// System.Void Byn.Awrtc.ErrorInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorInfo__cctor_m7BE334369910CB5370367E71D39CCA87355169DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D14A324D56E0DE7CD465A91D9ADA540141B1D9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A198E98B2248DC3CBE57D6CC76BC8B325B41223);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F1B308369D046ADF66BB0153CF88C04F250DDB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65F145CED64531C2770EE987B5D63D19FE4D8340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E02A08AAF15C94ECB20C43E0BF5810B40421314);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74A7C53978A15884964DF544F699661A047C5FE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8692E343EE22DD00DC83C8A9C6BB384AF9116807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90704D33BFBCB8D644DD646C625D53D8E0DD2243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral949F6645EABC641C468B6C5ED3CD41383E6CDBEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF854A90D8B816EE8D81106B17A3772254E45AE63);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___SERVER_INIT_FAILED_ADDRESS_IN_USE_0 = _stringLiteral74A7C53978A15884964DF544F699661A047C5FE5;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___SERVER_INIT_FAILED_ADDRESS_IN_USE_0), (void*)_stringLiteral74A7C53978A15884964DF544F699661A047C5FE5);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONNECTION_FAILED_ADDRESS_UNKNOWN_1 = _stringLiteral5F1B308369D046ADF66BB0153CF88C04F250DDB7;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONNECTION_FAILED_ADDRESS_UNKNOWN_1), (void*)_stringLiteral5F1B308369D046ADF66BB0153CF88C04F250DDB7);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___SERVER_INIT_FAILED_REQURED_CONNECTION_OFFLINE_2 = _stringLiteral65F145CED64531C2770EE987B5D63D19FE4D8340;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___SERVER_INIT_FAILED_REQURED_CONNECTION_OFFLINE_2), (void*)_stringLiteral65F145CED64531C2770EE987B5D63D19FE4D8340);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONNECTION_FAILED_REQURED_CONNECTION_OFFLINE_3 = _stringLiteral5A198E98B2248DC3CBE57D6CC76BC8B325B41223;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONNECTION_FAILED_REQURED_CONNECTION_OFFLINE_3), (void*)_stringLiteral5A198E98B2248DC3CBE57D6CC76BC8B325B41223);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___DISCONNECTED_REQURED_CONNECTION_OFFLINE_4 = _stringLiteral8692E343EE22DD00DC83C8A9C6BB384AF9116807;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___DISCONNECTED_REQURED_CONNECTION_OFFLINE_4), (void*)_stringLiteral8692E343EE22DD00DC83C8A9C6BB384AF9116807);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___SERVER_CLOSED_REQURED_CONNECTION_OFFLINE_5 = _stringLiteral90704D33BFBCB8D644DD646C625D53D8E0DD2243;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___SERVER_CLOSED_REQURED_CONNECTION_OFFLINE_5), (void*)_stringLiteral90704D33BFBCB8D644DD646C625D53D8E0DD2243);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONNECTION_FAILED_TO_CONNECT_DIRECTLY_6 = _stringLiteral6E02A08AAF15C94ECB20C43E0BF5810B40421314;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONNECTION_FAILED_TO_CONNECT_DIRECTLY_6), (void*)_stringLiteral6E02A08AAF15C94ECB20C43E0BF5810B40421314);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___INCOMING_CONNECTION_FAILED_TO_CONNECT_DIRECTLY_7 = _stringLiteral949F6645EABC641C468B6C5ED3CD41383E6CDBEE;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___INCOMING_CONNECTION_FAILED_TO_CONNECT_DIRECTLY_7), (void*)_stringLiteral949F6645EABC641C468B6C5ED3CD41383E6CDBEE);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___DISCONNECTED_DUE_TO_TIMEOUT_8 = _stringLiteral2D14A324D56E0DE7CD465A91D9ADA540141B1D9F;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___DISCONNECTED_DUE_TO_TIMEOUT_8), (void*)_stringLiteral2D14A324D56E0DE7CD465A91D9ADA540141B1D9F);
		((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONFIGURATION_FAILED_9 = _stringLiteralF854A90D8B816EE8D81106B17A3772254E45AE63;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONFIGURATION_FAILED_9), (void*)_stringLiteralF854A90D8B816EE8D81106B17A3772254E45AE63);
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
// System.Collections.Generic.List`1<System.String> Byn.Awrtc.IceServer::get_Urls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* IceServer_get_Urls_mC05D2A925F50F12F4133F06AF30E516C4698F7A8 (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mUrls_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_1, L_0, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Byn.Awrtc.IceServer::get_Username()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IceServer_get_Username_m57F16DE3845C8634519ACC62B0E0E82D86356EA4 (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mUsername_1;
		return L_0;
	}
}
// System.String Byn.Awrtc.IceServer::get_Credential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IceServer_get_Credential_m63F420875D884F2BE9E1B162566D5BBFE4A51969 (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mCredential_2;
		return L_0;
	}
}
// System.Void Byn.Awrtc.IceServer::.ctor(System.Collections.Generic.List`1<System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceServer__ctor_mAEE12F88B4F3DB2EF8F87C8FE820E4AFFE52184D (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_lUrls, String_t* ___1_lUsername, String_t* ___2_lCredential, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___mUrls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUrls_0), (void*)L_0);
		__this->___mUsername_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUsername_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___mCredential_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCredential_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___0_lUrls;
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C696396156829B872749F601A559C8B29052894)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IceServer__ctor_mAEE12F88B4F3DB2EF8F87C8FE820E4AFFE52184D_RuntimeMethod_var)));
	}

IL_0035:
	{
		String_t* L_3 = ___1_lUsername;
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3429987E49CDAFA6EE7EA5802C98E2792FAFD58D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IceServer__ctor_mAEE12F88B4F3DB2EF8F87C8FE820E4AFFE52184D_RuntimeMethod_var)));
	}

IL_0043:
	{
		String_t* L_5 = ___2_lCredential;
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C58887910EAD6CC7D0BACF78F9BC207F6ADAEAD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IceServer__ctor_mAEE12F88B4F3DB2EF8F87C8FE820E4AFFE52184D_RuntimeMethod_var)));
	}

IL_0051:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___0_lUrls;
		__this->___mUrls_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUrls_0), (void*)L_7);
		String_t* L_8 = ___1_lUsername;
		__this->___mUsername_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUsername_1), (void*)L_8);
		String_t* L_9 = ___2_lCredential;
		__this->___mCredential_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCredential_2), (void*)L_9);
		return;
	}
}
// System.Void Byn.Awrtc.IceServer::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IceServer__ctor_m83B96F2CE5A6DF8315B20FA0421B4C1259CC984A (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, String_t* ___0_lUrl, String_t* ___1_lUsername, String_t* ___2_lCredential, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___mUrls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUrls_0), (void*)L_0);
		__this->___mUsername_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUsername_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___mCredential_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCredential_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___mUrls_0;
		String_t* L_2 = ___0_lUrl;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, L_2, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		String_t* L_3 = ___1_lUsername;
		__this->___mUsername_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUsername_1), (void*)L_3);
		String_t* L_4 = ___2_lCredential;
		__this->___mCredential_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCredential_2), (void*)L_4);
		return;
	}
}
// System.String Byn.Awrtc.IceServer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IceServer_ToString_mCCE817EF4221CCA3E14DD419EBA604945AB74B2E (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F79767EC9DDDEE3D5C6B4AB948D6240A2CE94A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA503CFA7FE8076F55639D2C7EB135A40905DB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9DC9AF3921EAD61E9EB1C5EE95CD56DA665AF31);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralADA503CFA7FE8076F55639D2C7EB135A40905DB3, NULL);
		V_1 = 0;
		goto IL_0048;
	}

IL_0022:
	{
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_0031:
	{
		StringBuilder_t* L_8 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___mUrls_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_9, L_10, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_11, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->___mUrls_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_15, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral40F79767EC9DDDEE3D5C6B4AB948D6240A2CE94A, NULL);
		StringBuilder_t* L_21 = V_0;
		String_t* L_22;
		L_22 = IceServer_get_Username_m57F16DE3845C8634519ACC62B0E0E82D86356EA4_inline(__this, NULL);
		NullCheck(L_21);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, L_22, NULL);
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteralE9DC9AF3921EAD61E9EB1C5EE95CD56DA665AF31, NULL);
		StringBuilder_t* L_26 = V_0;
		String_t* L_27;
		L_27 = IceServer_get_Credential_m63F420875D884F2BE9E1B162566D5BBFE4A51969_inline(__this, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		return L_32;
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
// System.Collections.Generic.IList`1<Byn.Awrtc.ConnectionId> Byn.Awrtc.LocalNetwork::get_Connections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalNetwork_get_Connections_mBC573749B211E04B522D55565BD393907D593CA0 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_0 = __this->___mConnectionNetwork_7;
		NullCheck(L_0);
		KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996* L_1;
		L_1 = Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9(L_0, Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9_RuntimeMethod_var);
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_2;
		L_2 = Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14(L_1, Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Byn.Awrtc.LocalNetwork::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalNetwork_get_IsServer_mFD664AA82D5E75A636F4AB0E12505C986E4296EC (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mServerAddress_5;
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Byn.Awrtc.LocalNetwork::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork__ctor_m446005B764F5446EF80EA73C89DF7B4A20BE1C05 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m72450D89B384B4ABFA674F36AFDD6DCFCC84539C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mA8395CF7B0A9958099D4A0FB5A2EC2189A948121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7));
		(&V_0)->___id_1 = (int16_t)1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = V_0;
		__this->___mNextNetworkId_4 = L_0;
		Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* L_1 = (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C*)il2cpp_codegen_object_new(Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mA8395CF7B0A9958099D4A0FB5A2EC2189A948121(L_1, Queue_1__ctor_mA8395CF7B0A9958099D4A0FB5A2EC2189A948121_RuntimeMethod_var);
		__this->___mEvents_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEvents_6), (void*)L_1);
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_2 = (Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F*)il2cpp_codegen_object_new(Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m72450D89B384B4ABFA674F36AFDD6DCFCC84539C(L_2, Dictionary_2__ctor_m72450D89B384B4ABFA674F36AFDD6DCFCC84539C_RuntimeMethod_var);
		__this->___mConnectionNetwork_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mConnectionNetwork_7), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		int32_t L_3 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___sNextId_1;
		__this->___mId_3 = L_3;
		int32_t L_4 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___sNextId_1;
		((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___sNextId_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		return;
	}
}
// System.Boolean Byn.Awrtc.LocalNetwork::IsAddressInUse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalNetwork_IsAddressInUse_m54FC6264EDB8DA4C313C021B83406ACA472B49F2 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, String_t* ___0_serverAddress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_0 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2;
		String_t* L_1 = ___0_serverAddress;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419(L_0, L_1, Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_3 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2;
		String_t* L_4 = ___0_serverAddress;
		NullCheck(L_3);
		WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_5;
		L_5 = Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E(L_3, L_4, Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E_RuntimeMethod_var);
		NullCheck(L_5);
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_6;
		L_6 = WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4(L_5, WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		String_t* L_7 = ___0_serverAddress;
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		String_t* L_8 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___LOCK_ADDRESS_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::StartServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_StartServer_m7538F43D30967C3E976532B27F871FE21C52604C (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, String_t* ___0_serverAddress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m97BD1C2684BC60B8E0B2BD88C0235505152CFD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_serverAddress;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___mId_3;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Concat_m92436B3569C3A6A00834A7043118BB9633D42E2A(L_3, NULL);
		___0_serverAddress = L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___0_serverAddress;
		bool L_6;
		L_6 = LocalNetwork_IsAddressInUse_m54FC6264EDB8DA4C313C021B83406ACA472B49F2(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_7 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		il2cpp_codegen_runtime_class_init_inline(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		String_t* L_8 = ((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___SERVER_INIT_FAILED_ADDRESS_IN_USE_0;
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_9 = (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620*)il2cpp_codegen_object_new(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ErrorInfo__ctor_m3AEA9E29713388D1F4298105AB270AFAAC9149D9(L_9, L_8, NULL);
		LocalNetwork_Enqueue_m45BE9C3606718262C2F53E4A58240BAF02483E56(__this, 4, L_7, L_9, NULL);
		return;
	}

IL_0035:
	{
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_10 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2;
		String_t* L_11 = ___0_serverAddress;
		WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_12 = (WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4*)il2cpp_codegen_object_new(WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9(L_12, __this, WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9_RuntimeMethod_var);
		NullCheck(L_10);
		Dictionary_2_set_Item_m97BD1C2684BC60B8E0B2BD88C0235505152CFD6B(L_10, L_11, L_12, Dictionary_2_set_Item_m97BD1C2684BC60B8E0B2BD88C0235505152CFD6B_RuntimeMethod_var);
		String_t* L_13 = ___0_serverAddress;
		__this->___mServerAddress_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mServerAddress_5), (void*)L_13);
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_14 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		String_t* L_15 = ___0_serverAddress;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_16;
		memset((&L_16), 0, sizeof(L_16));
		NetworkEvent__ctor_mB231B79419FA9D4FD449D7829F0E00D14CA380CD((&L_16), 3, L_14, L_15, /*hidden argument*/NULL);
		LocalNetwork_Enqueue_mE0C344F12B9881B8ECF9588E29DBAD951EE4CFEE(__this, L_16, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_StopServer_mF5A3A792986747E1576556C93BC3A92DE2A7AA0F (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m66DB9F416FF18D17A8F9CEF11E3A8286D183098D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = LocalNetwork_get_IsServer_mFD664AA82D5E75A636F4AB0E12505C986E4296EC(__this, NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		LocalNetwork_Enqueue_m4F1AAF7838CCE29B6C0D9BFB057D613A0A1E1DE3(__this, 5, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_2 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2;
		String_t* L_3 = __this->___mServerAddress_5;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_Remove_m66DB9F416FF18D17A8F9CEF11E3A8286D183098D(L_2, L_3, Dictionary_2_Remove_m66DB9F416FF18D17A8F9CEF11E3A8286D183098D_RuntimeMethod_var);
		__this->___mServerAddress_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mServerAddress_5), (void*)(String_t*)NULL);
	}

IL_002c:
	{
		return;
	}
}
// Byn.Awrtc.ConnectionId Byn.Awrtc.LocalNetwork::Connect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 LocalNetwork_Connect_mC2404307ACA3A9F5291E112FBF65D12C6794C5F9 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* V_2 = NULL;
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0;
		L_0 = LocalNetwork_NextConnectionId_m8345C778767F0E42CDB94BDA1AA44BFFC242F2F2(__this, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_1 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2;
		String_t* L_2 = ___0_address;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419(L_1, L_2, Dictionary_2_ContainsKey_m3EF45924A9F6841FB10BC072C2DF1D558F191419_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_4 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2;
		String_t* L_5 = ___0_address;
		NullCheck(L_4);
		WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_6;
		L_6 = Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E(L_4, L_5, Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E_RuntimeMethod_var);
		NullCheck(L_6);
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_7;
		L_7 = WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4(L_6, WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		V_2 = L_7;
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_9 = V_2;
		NullCheck(L_9);
		LocalNetwork_ConnectClient_m5FFC02A41B091E2860F22390B600F829A6F87AFF(L_9, __this, NULL);
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_10 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_12 = ((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2;
		String_t* L_13 = ___0_address;
		NullCheck(L_12);
		WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_14;
		L_14 = Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E(L_12, L_13, Dictionary_2_get_Item_m5C07AABA291540D4840E0A4099EC2B572FA9C63E_RuntimeMethod_var);
		NullCheck(L_10);
		Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500(L_10, L_11, L_14, Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500_RuntimeMethod_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_15 = V_0;
		LocalNetwork_Enqueue_m4F1AAF7838CCE29B6C0D9BFB057D613A0A1E1DE3(__this, 6, L_15, NULL);
		V_1 = (bool)1;
	}

IL_0052:
	{
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_0067;
		}
	}
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_StaticFields*)il2cpp_codegen_static_fields_for(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var))->___CONNECTION_FAILED_ADDRESS_UNKNOWN_1;
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_19 = (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620*)il2cpp_codegen_object_new(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		ErrorInfo__ctor_m3AEA9E29713388D1F4298105AB270AFAAC9149D9(L_19, L_18, NULL);
		LocalNetwork_Enqueue_m45BE9C3606718262C2F53E4A58240BAF02483E56(__this, 7, L_17, L_19, NULL);
	}

IL_0067:
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_20 = V_0;
		return L_20;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Shutdown_m61DCCABD52523F6B6B41E7EC7CB5D51ACD0DED7D (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m7B558E0EBC2543C4E9CC88DA1E04A2811AD2B18B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_0 = __this->___mConnectionNetwork_7;
		NullCheck(L_0);
		KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996* L_1;
		L_1 = Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9(L_0, Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9_RuntimeMethod_var);
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_2;
		L_2 = Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14(L_1, Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 L_3;
		L_3 = List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6(L_2, List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3((&V_0), Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0018_1:
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_4;
				L_4 = Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_inline((&V_0), Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
				V_1 = L_4;
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_5 = V_1;
				LocalNetwork_Disconnect_mE56724C49BFD5E68C1206022EE65CA2400477ABF(__this, L_5, NULL);
			}

IL_0027_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851((&V_0), Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_7 = __this->___mConnectionNetwork_7;
		NullCheck(L_7);
		Dictionary_2_Clear_m7B558E0EBC2543C4E9CC88DA1E04A2811AD2B18B(L_7, Dictionary_2_Clear_m7B558E0EBC2543C4E9CC88DA1E04A2811AD2B18B_RuntimeMethod_var);
		LocalNetwork_StopServer_mF5A3A792986747E1576556C93BC3A92DE2A7AA0F(__this, NULL);
		return;
	}
}
// System.Boolean Byn.Awrtc.LocalNetwork::SendData(Byn.Awrtc.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalNetwork_SendData_mF43832101833AF4B559F58C44FA621BAD2857E44 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_userId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, int32_t ___2_offset, int32_t ___3_length, bool ___4_reliable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8DA02D05DA333EAE7F1B703CE91CDA212A17B0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_data;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_data;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (bool)0;
	}

IL_0009:
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_2 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_3 = ___0_userId;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m8DA02D05DA333EAE7F1B703CE91CDA212A17B0EE(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m8DA02D05DA333EAE7F1B703CE91CDA212A17B0EE_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_5 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_6 = ___0_userId;
		NullCheck(L_5);
		WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_7;
		L_7 = Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491(L_5, L_6, Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491_RuntimeMethod_var);
		NullCheck(L_7);
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_8;
		L_8 = WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4(L_7, WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_data;
		int32_t L_10 = ___2_offset;
		int32_t L_11 = ___3_length;
		bool L_12 = ___4_reliable;
		NullCheck(L_8);
		LocalNetwork_ReceiveData_m00F9F3310B9CCFE3664436D80876EF4CF315F71A(L_8, __this, L_9, L_10, L_11, L_12, NULL);
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Update_m9BFE98591FA7F3752F757811AA4EBFED527D58D3 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	{
		LocalNetwork_CleanupWreakReferences_mFD6E2A04AD629BFA51ABD6E55CBA75D45130A224(__this, NULL);
		return;
	}
}
// System.Boolean Byn.Awrtc.LocalNetwork::Dequeue(Byn.Awrtc.NetworkEvent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalNetwork_Dequeue_m94CCF44350CAB6C4F0C87A7B044C7EDA32C1FB52 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m56767622B11E2FCF00CC3A8F220A1DEF60E9BD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* L_0 = __this->___mEvents_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_inline(L_0, Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* L_2 = ___0_evt;
		il2cpp_codegen_initobj(L_2, sizeof(NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E));
		return (bool)0;
	}

IL_0016:
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* L_3 = ___0_evt;
		Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* L_4 = __this->___mEvents_6;
		NullCheck(L_4);
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_5;
		L_5 = Queue_1_Dequeue_m56767622B11E2FCF00CC3A8F220A1DEF60E9BD13(L_4, Queue_1_Dequeue_m56767622B11E2FCF00CC3A8F220A1DEF60E9BD13_RuntimeMethod_var);
		*(NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*)L_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*)L_3)->___data_2), (void*)NULL);
		return (bool)1;
	}
}
// System.Boolean Byn.Awrtc.LocalNetwork::Peek(Byn.Awrtc.NetworkEvent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalNetwork_Peek_m4C517A2583D0F728A28E2F5B5DC18D44DA0B03BE (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m5949945EB7287C9B665DC304439B768A57A1B7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* L_0 = __this->___mEvents_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_inline(L_0, Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* L_2 = ___0_evt;
		il2cpp_codegen_initobj(L_2, sizeof(NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E));
		return (bool)0;
	}

IL_0016:
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* L_3 = ___0_evt;
		Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* L_4 = __this->___mEvents_6;
		NullCheck(L_4);
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_5;
		L_5 = Queue_1_Peek_m5949945EB7287C9B665DC304439B768A57A1B7D2(L_4, Queue_1_Peek_m5949945EB7287C9B665DC304439B768A57A1B7D2_RuntimeMethod_var);
		*(NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*)L_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*)L_3)->___data_2), (void*)NULL);
		return (bool)1;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Flush_m98622DCC29611BA16117EC3011E2DC9E37D9A375 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Disconnect(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Disconnect_mE56724C49BFD5E68C1206022EE65CA2400477ABF (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* V_0 = NULL;
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_0 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___0_id;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC(L_0, L_1, Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_3 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_4 = ___0_id;
		NullCheck(L_3);
		WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_5;
		L_5 = Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491(L_3, L_4, Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491_RuntimeMethod_var);
		NullCheck(L_5);
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_6;
		L_6 = WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4(L_5, WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		V_0 = L_6;
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_8 = V_0;
		NullCheck(L_8);
		LocalNetwork_InternalDisconnect_m7316956C07DC620C73581EEA376A6CF8409AB52D(L_8, __this, NULL);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_9 = ___0_id;
		LocalNetwork_InternalDisconnect_m3A0804F62396EAE4542423762B673D66DCFF90E4(__this, L_9, NULL);
		return;
	}

IL_0032:
	{
		LocalNetwork_CleanupWreakReferences_mFD6E2A04AD629BFA51ABD6E55CBA75D45130A224(__this, NULL);
	}

IL_0038:
	{
		return;
	}
}
// Byn.Awrtc.ConnectionId Byn.Awrtc.LocalNetwork::FindConnectionId(Byn.Awrtc.LocalNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 LocalNetwork_FindConnectionId_mD267F95EF0E2B7E31B36F5D308A9776E68401CE6 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_network, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m9980803030822077943E5C933E0688DB105B9CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5B57BB3D0C823604DC126B93904F1F9EDE48022D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C754EE9E30E8E007230EEE3C5F928BA18C4E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7DCC20B51621E2D41B0B43141FB8F62E6B4B20B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m246CCE364EB9C4C163802434ACA5F8FE1F42C6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m4B1BB1EF8E21F2528A0AABFA3B898A1F0BA5C2F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_0 = __this->___mConnectionNetwork_7;
		NullCheck(L_0);
		Enumerator_tE65555667F20AAD942CD1082EF457D38FC276EAE L_1;
		L_1 = Dictionary_2_GetEnumerator_m9980803030822077943E5C933E0688DB105B9CE5(L_0, Dictionary_2_GetEnumerator_m9980803030822077943E5C933E0688DB105B9CE5_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5B57BB3D0C823604DC126B93904F1F9EDE48022D((&V_0), Enumerator_Dispose_m5B57BB3D0C823604DC126B93904F1F9EDE48022D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_tEE0772B14DC8CED31A378B1B4E636C9E5A529399 L_2;
				L_2 = Enumerator_get_Current_m7DCC20B51621E2D41B0B43141FB8F62E6B4B20B2_inline((&V_0), Enumerator_get_Current_m7DCC20B51621E2D41B0B43141FB8F62E6B4B20B2_RuntimeMethod_var);
				V_1 = L_2;
				WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_3;
				L_3 = KeyValuePair_2_get_Value_m4B1BB1EF8E21F2528A0AABFA3B898A1F0BA5C2F0_inline((&V_1), KeyValuePair_2_get_Value_m4B1BB1EF8E21F2528A0AABFA3B898A1F0BA5C2F0_RuntimeMethod_var);
				NullCheck(L_3);
				LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_4;
				L_4 = WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4(L_3, WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
				LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_5 = ___0_network;
				if ((!(((RuntimeObject*)(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784*)L_4) == ((RuntimeObject*)(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784*)L_5))))
				{
					goto IL_002f_1;
				}
			}
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_6;
				L_6 = KeyValuePair_2_get_Key_m246CCE364EB9C4C163802434ACA5F8FE1F42C6B0_inline((&V_1), KeyValuePair_2_get_Key_m246CCE364EB9C4C163802434ACA5F8FE1F42C6B0_RuntimeMethod_var);
				V_2 = L_6;
				goto IL_004e;
			}

IL_002f_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m39C754EE9E30E8E007230EEE3C5F928BA18C4E24((&V_0), Enumerator_MoveNext_m39C754EE9E30E8E007230EEE3C5F928BA18C4E24_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_8 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		return L_8;
	}

IL_004e:
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_9 = V_2;
		return L_9;
	}
}
// Byn.Awrtc.ConnectionId Byn.Awrtc.LocalNetwork::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 LocalNetwork_NextConnectionId_m8345C778767F0E42CDB94BDA1AA44BFFC242F2F2 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___mNextNetworkId_4;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* L_1 = (&__this->___mNextNetworkId_4);
		int16_t* L_2 = (&L_1->___id_1);
		int16_t* L_3 = L_2;
		int32_t L_4 = *((int16_t*)L_3);
		*((int16_t*)L_3) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		return L_0;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::ConnectClient(Byn.Awrtc.LocalNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_ConnectClient_m5FFC02A41B091E2860F22390B600F829A6F87AFF (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_client, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = LocalNetwork_get_IsServer_mFD664AA82D5E75A636F4AB0E12505C986E4296EC(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LocalNetwork_ConnectClient_m5FFC02A41B091E2860F22390B600F829A6F87AFF_RuntimeMethod_var)));
	}

IL_000e:
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2;
		L_2 = LocalNetwork_NextConnectionId_m8345C778767F0E42CDB94BDA1AA44BFFC242F2F2(__this, NULL);
		V_0 = L_2;
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_3 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_4 = V_0;
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_5 = ___0_client;
		WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_6 = (WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4*)il2cpp_codegen_object_new(WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9(L_6, L_5, WeakRef_1__ctor_mE379E3E04D0D9C92C39FAD0BC74080C4CE4613C9_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500(L_3, L_4, L_6, Dictionary_2_set_Item_m21DFB10BDCD9ABE1A494F5F90E7F938396AAC500_RuntimeMethod_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_7 = V_0;
		LocalNetwork_Enqueue_m4F1AAF7838CCE29B6C0D9BFB057D613A0A1E1DE3(__this, 6, L_7, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.ByteArrayBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_m4A77E55C0245AB61F4F376849EE45E4E39CEDA93 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, uint8_t ___0_type, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_id, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* ___2_data, const RuntimeMethod* method) 
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint8_t L_0 = ___0_type;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_id;
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_2 = ___2_data;
		NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D((&V_0), L_0, L_1, L_2, NULL);
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_3 = V_0;
		LocalNetwork_Enqueue_mE0C344F12B9881B8ECF9588E29DBAD951EE4CFEE(__this, L_3, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_m45BE9C3606718262C2F53E4A58240BAF02483E56 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, uint8_t ___0_type, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_id, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___2_error, const RuntimeMethod* method) 
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint8_t L_0 = ___0_type;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_id;
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_2 = ___2_error;
		NetworkEvent__ctor_mA46FFF771F9CD6E1C8DDFF476C0BD117007D5C80((&V_0), L_0, L_1, L_2, NULL);
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_3 = V_0;
		LocalNetwork_Enqueue_mE0C344F12B9881B8ECF9588E29DBAD951EE4CFEE(__this, L_3, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_m4F1AAF7838CCE29B6C0D9BFB057D613A0A1E1DE3 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, uint8_t ___0_type, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_id, const RuntimeMethod* method) 
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint8_t L_0 = ___0_type;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_id;
		NetworkEvent__ctor_mEF44539E731EBBD4FAF7274A349D34F1126FD9E2((&V_0), L_0, L_1, NULL);
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_2 = V_0;
		LocalNetwork_Enqueue_mE0C344F12B9881B8ECF9588E29DBAD951EE4CFEE(__this, L_2, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Enqueue(Byn.Awrtc.NetworkEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Enqueue_mE0C344F12B9881B8ECF9588E29DBAD951EE4CFEE (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E ___0_ev, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD37040A5E8979D35189788E6452C363FC25CDE76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* L_0 = __this->___mEvents_6;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_1 = ___0_ev;
		NullCheck(L_0);
		Queue_1_Enqueue_mD37040A5E8979D35189788E6452C363FC25CDE76(L_0, L_1, Queue_1_Enqueue_mD37040A5E8979D35189788E6452C363FC25CDE76_RuntimeMethod_var);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::ReceiveData(Byn.Awrtc.LocalNetwork,System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_ReceiveData_m00F9F3310B9CCFE3664436D80876EF4CF315F71A (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_network, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, int32_t ___2_offset, int32_t ___3_length, bool ___4_reliable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC350A97A9C6B7BA97EE2DB62823E0D41D293A21C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC1B3F1A679F21CFA9AF9C186382E523CBF695AC);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* V_1 = NULL;
	uint8_t V_2 = 0;
	{
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_0 = ___0_network;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1;
		L_1 = LocalNetwork_FindConnectionId_mD267F95EF0E2B7E31B36F5D308A9776E68401CE6(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___3_length;
		il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_3;
		L_3 = ByteArrayBuffer_Get_m3281A3A589DC27B7AA164600AE7B34ED6FF814D2(L_2, (bool)0, NULL);
		V_1 = L_3;
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_data;
		int32_t L_6 = ___2_offset;
		int32_t L_7 = ___3_length;
		NullCheck(L_4);
		ByteArrayBuffer_CopyFrom_m1FC3E903E65FEB98A5940190026178273D63EBB2(L_4, L_5, L_6, L_7, NULL);
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ByteArrayBuffer_get_PositionReadRelative_m6744691413C85626915E746913A3C1A66DC6C53E_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ByteArrayBuffer_get_PositionReadRelative_m6744691413C85626915E746913A3C1A66DC6C53E_inline(L_10, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteralC350A97A9C6B7BA97EE2DB62823E0D41D293A21C, L_13, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LE_m9311AF7DA8AE883A95CEF0751ED30D23AA829B94(L_14, L_15, NULL);
	}

IL_0043:
	{
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = ByteArrayBuffer_get_PositionWriteRelative_m2CC7D7CDA5AABB1D8FBA5C95F4C7D5D9B6AC611F_inline(L_16, NULL);
		if (L_17)
		{
			goto IL_005b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LE_m9311AF7DA8AE883A95CEF0751ED30D23AA829B94(_stringLiteralEC1B3F1A679F21CFA9AF9C186382E523CBF695AC, L_18, NULL);
	}

IL_005b:
	{
		V_2 = 1;
		bool L_19 = ___4_reliable;
		if (!L_19)
		{
			goto IL_0063;
		}
	}
	{
		V_2 = 2;
	}

IL_0063:
	{
		uint8_t L_20 = V_2;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_21 = V_0;
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_22 = V_1;
		LocalNetwork_Enqueue_m4A77E55C0245AB61F4F376849EE45E4E39CEDA93(__this, L_20, L_21, L_22, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::InternalDisconnect(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_InternalDisconnect_m3A0804F62396EAE4542423762B673D66DCFF90E4 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m29B10244968556F1EEFE987B0C83B73597140898_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_0 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___0_id;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC(L_0, L_1, Dictionary_2_ContainsKey_m9671D1AB2C79A6365B6DB6A12716C1D7546136BC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_3 = ___0_id;
		LocalNetwork_Enqueue_m4F1AAF7838CCE29B6C0D9BFB057D613A0A1E1DE3(__this, 8, L_3, NULL);
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_4 = __this->___mConnectionNetwork_7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_5 = ___0_id;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_m29B10244968556F1EEFE987B0C83B73597140898(L_4, L_5, Dictionary_2_Remove_m29B10244968556F1EEFE987B0C83B73597140898_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::InternalDisconnect(Byn.Awrtc.LocalNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_InternalDisconnect_m7316956C07DC620C73581EEA376A6CF8409AB52D (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* ___0_ln, const RuntimeMethod* method) 
{
	{
		LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_0 = ___0_ln;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1;
		L_1 = LocalNetwork_FindConnectionId_mD267F95EF0E2B7E31B36F5D308A9776E68401CE6(__this, L_0, NULL);
		LocalNetwork_InternalDisconnect_m3A0804F62396EAE4542423762B673D66DCFF90E4(__this, L_1, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::CleanupWreakReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_CleanupWreakReferences_mFD6E2A04AD629BFA51ABD6E55CBA75D45130A224 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_0 = __this->___mConnectionNetwork_7;
		NullCheck(L_0);
		KeyCollection_t691BF2E5F655171C7316429DCDCB7B2628079996* L_1;
		L_1 = Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9(L_0, Dictionary_2_get_Keys_mE688B202FD4B603C26D73C409A14E131D17936E9_RuntimeMethod_var);
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_2;
		L_2 = Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14(L_1, Enumerable_ToList_TisConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_mEAB17A29F7628D50F74D519CDBEC7330B82F3D14_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 L_3;
		L_3 = List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6(L_2, List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3((&V_0), Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0018_1:
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_4;
				L_4 = Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_inline((&V_0), Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
				V_1 = L_4;
				Dictionary_2_t8ED1051B76803104AC1EA91F6D7745316556185F* L_5 = __this->___mConnectionNetwork_7;
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_6 = V_1;
				NullCheck(L_5);
				WeakRef_1_t5D263072727CAC99506B21A7B8CF0FDEEE8957D4* L_7;
				L_7 = Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491(L_5, L_6, Dictionary_2_get_Item_m8DC57B3E8545FDD62B0E5B0CB2F8CBF1B3940491_RuntimeMethod_var);
				NullCheck(L_7);
				LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* L_8;
				L_8 = WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4(L_7, WeakRef_1_Get_mF5CBD6A745F45769343DCD7D3870DC29BF9E36C4_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_003a_1;
				}
			}
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_9 = V_1;
				LocalNetwork_InternalDisconnect_m3A0804F62396EAE4542423762B673D66DCFF90E4(__this, L_9, NULL);
			}

IL_003a_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851((&V_0), Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0053;
			}
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
// System.Void Byn.Awrtc.LocalNetwork::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Dispose_m79DB60F2EE5FC3E5270EA018FCE213C011F1D7C1 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposedValue_8;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		LocalNetwork_Shutdown_m61DCCABD52523F6B6B41E7EC7CB5D51ACD0DED7D(__this, NULL);
	}

IL_0011:
	{
		__this->___disposedValue_8 = (bool)1;
	}

IL_0018:
	{
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork_Dispose_m0620EEA27F4A384E04CD5AC02E7ECA21B30F9935 (LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void Byn.Awrtc.LocalNetwork::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void Byn.Awrtc.LocalNetwork::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNetwork__cctor_mEF1B802D7B2E5E29FBA13E0344712564CE3B66F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m42609DDED0249DA14BD2B76A9A8B4C4F78C337BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAE08B8B9EA5083281A2DE32E51435A768F96A57);
		s_Il2CppMethodInitialized = true;
	}
	{
		((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___LOCK_ADDRESS_0 = _stringLiteralBAE08B8B9EA5083281A2DE32E51435A768F96A57;
		Il2CppCodeGenWriteBarrier((void**)(&((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___LOCK_ADDRESS_0), (void*)_stringLiteralBAE08B8B9EA5083281A2DE32E51435A768F96A57);
		((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___sNextId_1 = 1;
		Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542* L_0 = (Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542*)il2cpp_codegen_object_new(Dictionary_2_t907180CFEF158A54B3476E924A59563F86D2C542_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m42609DDED0249DA14BD2B76A9A8B4C4F78C337BD(L_0, Dictionary_2__ctor_m42609DDED0249DA14BD2B76A9A8B4C4F78C337BD_RuntimeMethod_var);
		((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_StaticFields*)il2cpp_codegen_static_fields_for(LocalNetwork_t78CE29B71D6EA8FC8AF39A210A3FBE327C724784_il2cpp_TypeInfo_var))->___mServers_2), (void*)L_0);
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
// System.Boolean Byn.Awrtc.MediaConfig::get_Audio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaConfig_get_Audio_m89FD434CCC612229BCDDC0E88DE76178E44F6565 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mAudio_0;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_Audio(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_Audio_mEF0C5C20C8453EC52D1367AF5186887877F59FC5 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___mAudio_0 = L_0;
		return;
	}
}
// System.Boolean Byn.Awrtc.MediaConfig::get_Video()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaConfig_get_Video_m311BF103BC16DAC4FBD5BF9E024F97CB84853AA1 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mVideo_1;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_Video(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_Video_mFC087E206C5146CB1BA577180D2097532E6F83A5 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___mVideo_1 = L_0;
		return;
	}
}
// System.String Byn.Awrtc.MediaConfig::get_VideoDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MediaConfig_get_VideoDeviceName_m7FEDCBE565DF6AF9E2D7EF19BB271733CFEDEC36 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mVideoDeviceName_2;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_VideoDeviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_VideoDeviceName_m5BCD59DD1606D48BF5CCFEC65ADD5E17C9F81B4D (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___mVideoDeviceName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mVideoDeviceName_2), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_MinWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_MinWidth_mF5F15AFF3F4A17A1033D0A2C801514C873919DD0 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mMinWidth_3;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_MinWidth(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_MinWidth_m06C6DB20CD6A0B1294E7F206792A521D11811036 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mMinWidth_3 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_MinHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_MinHeight_m4156959DF52443FA36E16EAC3EB05999810D8B42 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mMinHeight_4;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_MinHeight(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_MinHeight_mF05DBA14BF42ED493757C99EBBA968EEF8D26797 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mMinHeight_4 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_MaxWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_MaxWidth_m34CF68FB36197450790E683FC427B25E1D2F2086 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mMaxWidth_5;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_MaxWidth(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_MaxWidth_mF8403DB8C41AB346AB9E70E3E2C9C6C09DAAABDE (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mMaxWidth_5 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_MaxHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_MaxHeight_m21C71ACC779DACE97A3CAB0BD4B7E4B72E8B699D (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mMaxHeight_6;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_MaxHeight(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_MaxHeight_m4735EB7449E77AB14C015C55179380CAE2C5561E (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mMaxHeight_6 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_IdealWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_IdealWidth_m3DC647D6B62BAF6E940EB07C85A691C911354A27 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mIdealWidth_7;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_IdealWidth(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_IdealWidth_m92830DF9D19AADD5CEE89B93ED97F9F5128D5A74 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mIdealWidth_7 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_IdealHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_IdealHeight_m616D7CC7D06BB2DE1D8AE6F26265A805DAF7061B (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mIdealHeight_8;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_IdealHeight(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_IdealHeight_mD91A0B16B8BCC9A96DF2505702CA925412BCBE86 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mIdealHeight_8 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_IdealFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_IdealFrameRate_mC2B7C270E6810762AC70D3B3C538AB5FBD86ADBF (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mIdealFrameRate_9;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_IdealFrameRate(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_IdealFrameRate_m74FA8F1894EC9AF551EE8926D3994B8DDA44F272 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mIdealFrameRate_9 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_MinFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_MinFrameRate_m6065442D0F6D8EF9AB58EE5FD55B3F0813B4570A (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mMinFrameRate_10;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_MinFrameRate(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_MinFrameRate_mBD7CFC2C605D162BB00A4A656A42D416905A388B (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mMinFrameRate_10 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Byn.Awrtc.MediaConfig::get_MaxFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 MediaConfig_get_MaxFrameRate_m40B63D9FAA3A24E0E38F78291232711771588470 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___mMaxFrameRate_11;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_MaxFrameRate(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_MaxFrameRate_mD2C4DAE4D77785F6A0B24B643B903224B7DA1C91 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___mMaxFrameRate_11 = L_0;
		return;
	}
}
// Byn.Awrtc.FramePixelFormat Byn.Awrtc.MediaConfig::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MediaConfig_get_Format_m5329E45BBD240B4684AB4CD69EAF36323BCC2795 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mFormat_12;
		return L_0;
	}
}
// System.Void Byn.Awrtc.MediaConfig::set_Format(Byn.Awrtc.FramePixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig_set_Format_mDBA17E7125E65329DCE64F305C558DE9CC46BF2D (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___mFormat_12 = L_0;
		return;
	}
}
// System.Void Byn.Awrtc.MediaConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig__ctor_m74B48595BB33375E761C1712B675F646CDE9C7EA (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___mAudio_0 = (bool)1;
		__this->___mVideo_1 = (bool)1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_0), (-1), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___mMinFrameRate_10 = L_0;
		__this->___mFormat_12 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.MediaConfig::.ctor(Byn.Awrtc.MediaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaConfig__ctor_m2E9B827C59D0E09C52CCAA02793EC90072E30A65 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___mAudio_0 = (bool)1;
		__this->___mVideo_1 = (bool)1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_0), (-1), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___mMinFrameRate_10 = L_0;
		__this->___mFormat_12 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_1 = ___0_other;
		NullCheck(L_1);
		bool L_2 = L_1->___mAudio_0;
		__this->___mAudio_0 = L_2;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_3 = ___0_other;
		NullCheck(L_3);
		bool L_4 = L_3->___mVideo_1;
		__this->___mVideo_1 = L_4;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_5 = ___0_other;
		NullCheck(L_5);
		String_t* L_6 = L_5->___mVideoDeviceName_2;
		__this->___mVideoDeviceName_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mVideoDeviceName_2), (void*)L_6);
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_7 = ___0_other;
		NullCheck(L_7);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = L_7->___mMinWidth_3;
		__this->___mMinWidth_3 = L_8;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_9 = ___0_other;
		NullCheck(L_9);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = L_9->___mMinHeight_4;
		__this->___mMinHeight_4 = L_10;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_11 = ___0_other;
		NullCheck(L_11);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12 = L_11->___mMaxWidth_5;
		__this->___mMaxWidth_5 = L_12;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_13 = ___0_other;
		NullCheck(L_13);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_14 = L_13->___mMaxHeight_6;
		__this->___mMaxHeight_6 = L_14;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_15 = ___0_other;
		NullCheck(L_15);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16 = L_15->___mIdealWidth_7;
		__this->___mIdealWidth_7 = L_16;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_17 = ___0_other;
		NullCheck(L_17);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_18 = L_17->___mIdealHeight_8;
		__this->___mIdealHeight_8 = L_18;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_19 = ___0_other;
		NullCheck(L_19);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_20 = L_19->___mMinFrameRate_10;
		__this->___mMinFrameRate_10 = L_20;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_21 = ___0_other;
		NullCheck(L_21);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = L_21->___mMaxFrameRate_11;
		__this->___mMaxFrameRate_11 = L_22;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_23 = ___0_other;
		NullCheck(L_23);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_24 = L_23->___mIdealFrameRate_9;
		__this->___mIdealFrameRate_9 = L_24;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_25 = ___0_other;
		NullCheck(L_25);
		int32_t L_26 = L_25->___mFormat_12;
		__this->___mFormat_12 = L_26;
		return;
	}
}
// Byn.Awrtc.MediaConfig Byn.Awrtc.MediaConfig::DeepClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* MediaConfig_DeepClone_m6F71EFBDA05F8E8DBDD0D6410AC174C745737AB5 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_0 = (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A*)il2cpp_codegen_object_new(MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MediaConfig__ctor_m2E9B827C59D0E09C52CCAA02793EC90072E30A65(L_0, __this, NULL);
		return L_0;
	}
}
// System.String Byn.Awrtc.MediaConfig::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MediaConfig_ToString_mA0EF133ECE94DB6D4E883799CF6698EC579C9E76 (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FramePixelFormat_t0FAD646E711CD30F0C65CE6CFF0D11F94771C387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06C8172ECEC446258635338B7FBEA5162C6ACB88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461E25CB200D05E14DAC62F4C0A794CE425ABE0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C8EA2F128FD0B326B76BDD5AAF122FFA376F71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7019EEBC6E679567B06544B5D5C45AF0A69A7778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73FB1F88A4A3771607CC77EA748234988CEC4FD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77BBA8F19F0973A387EDFEDC31A034436D24977D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89C8A76A5A5CB961BE66CCE473419E5ECF7C48C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral948A5499CD67BE96D8600B0E8F5E01CF6FAB08C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD209EDE295C1FC2EBC3C7152DE0EC39EED463166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5BA4609CB0FD909BDA090538EAC923C13077148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE79F59E1EC1FB6FA72D14968CF2245EDCD2CBEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1EFF3603EC27740BAA219B667EBD75A78D0D33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE666A278BD008D4A68AA501A64008BF710468A);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		StringBuilder_t* L_3 = L_1;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralEE79F59E1EC1FB6FA72D14968CF2245EDCD2CBEE, NULL);
		StringBuilder_t* L_5 = L_3;
		bool L_6 = __this->___mAudio_0;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_5, L_6, NULL);
		StringBuilder_t* L_8 = L_5;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteralEF1EFF3603EC27740BAA219B667EBD75A78D0D33, NULL);
		StringBuilder_t* L_10 = L_8;
		bool L_11 = __this->___mVideo_1;
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_10, L_11, NULL);
		StringBuilder_t* L_13 = L_10;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral7019EEBC6E679567B06544B5D5C45AF0A69A7778, NULL);
		StringBuilder_t* L_15 = L_13;
		String_t* L_16 = __this->___mVideoDeviceName_2;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = L_15;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral461E25CB200D05E14DAC62F4C0A794CE425ABE0C, NULL);
		StringBuilder_t* L_20 = L_18;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_21 = __this->___mMinWidth_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = L_21;
		RuntimeObject* L_23 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_20, L_23, NULL);
		StringBuilder_t* L_25 = L_20;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral89C8A76A5A5CB961BE66CCE473419E5ECF7C48C8, NULL);
		StringBuilder_t* L_27 = L_25;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_28 = __this->___mMinHeight_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_29 = L_28;
		RuntimeObject* L_30 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_27, L_30, NULL);
		StringBuilder_t* L_32 = L_27;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteral948A5499CD67BE96D8600B0E8F5E01CF6FAB08C4, NULL);
		StringBuilder_t* L_34 = L_32;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_35 = __this->___mMaxWidth_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_36 = L_35;
		RuntimeObject* L_37 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_34, L_37, NULL);
		StringBuilder_t* L_39 = L_34;
		NullCheck(L_39);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, _stringLiteral73FB1F88A4A3771607CC77EA748234988CEC4FD3, NULL);
		StringBuilder_t* L_41 = L_39;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_42 = __this->___mMaxHeight_6;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_43 = L_42;
		RuntimeObject* L_44 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_41, L_44, NULL);
		StringBuilder_t* L_46 = L_41;
		NullCheck(L_46);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, _stringLiteral06C8172ECEC446258635338B7FBEA5162C6ACB88, NULL);
		StringBuilder_t* L_48 = L_46;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_49 = __this->___mIdealWidth_7;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_50 = L_49;
		RuntimeObject* L_51 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_48, L_51, NULL);
		StringBuilder_t* L_53 = L_48;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteral49C8EA2F128FD0B326B76BDD5AAF122FFA376F71, NULL);
		StringBuilder_t* L_55 = L_53;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_56 = __this->___mIdealHeight_8;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_57 = L_56;
		RuntimeObject* L_58 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_55, L_58, NULL);
		StringBuilder_t* L_60 = L_55;
		NullCheck(L_60);
		StringBuilder_t* L_61;
		L_61 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_60, _stringLiteralD209EDE295C1FC2EBC3C7152DE0EC39EED463166, NULL);
		StringBuilder_t* L_62 = L_60;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_63 = __this->___mMinFrameRate_10;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_64 = L_63;
		RuntimeObject* L_65 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_64);
		NullCheck(L_62);
		StringBuilder_t* L_66;
		L_66 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_62, L_65, NULL);
		StringBuilder_t* L_67 = L_62;
		NullCheck(L_67);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_67, _stringLiteralFEE666A278BD008D4A68AA501A64008BF710468A, NULL);
		StringBuilder_t* L_69 = L_67;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_70 = __this->___mMaxFrameRate_11;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_71 = L_70;
		RuntimeObject* L_72 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_69, L_72, NULL);
		StringBuilder_t* L_74 = L_69;
		NullCheck(L_74);
		StringBuilder_t* L_75;
		L_75 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_74, _stringLiteral77BBA8F19F0973A387EDFEDC31A034436D24977D, NULL);
		StringBuilder_t* L_76 = L_74;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_77 = __this->___mIdealFrameRate_9;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_78 = L_77;
		RuntimeObject* L_79 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_78);
		NullCheck(L_76);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_76, L_79, NULL);
		StringBuilder_t* L_81 = L_76;
		NullCheck(L_81);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_81, _stringLiteralD5BA4609CB0FD909BDA090538EAC923C13077148, NULL);
		StringBuilder_t* L_83 = L_81;
		int32_t L_84 = __this->___mFormat_12;
		int32_t L_85 = L_84;
		RuntimeObject* L_86 = Box(FramePixelFormat_t0FAD646E711CD30F0C65CE6CFF0D11F94771C387_il2cpp_TypeInfo_var, &L_85);
		NullCheck(L_83);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_83, L_86, NULL);
		StringBuilder_t* L_88 = L_83;
		NullCheck(L_88);
		StringBuilder_t* L_89;
		L_89 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_88, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_88);
		String_t* L_90;
		L_90 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_88);
		return L_90;
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
// System.String Byn.Awrtc.MessageDataBufferExt::AsStringUnicode(Byn.Awrtc.MessageDataBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageDataBufferExt_AsStringUnicode_m370A6E9D2474F44FED29CEFE09DFFF19D8AD8D58 (RuntimeObject* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_buffer;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000e:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		RuntimeObject* L_3 = ___0_buffer;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Byn.Awrtc.MessageDataBuffer::get_Buffer() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5 = ___0_buffer;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_Offset() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___0_buffer;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_2);
		String_t* L_9;
		L_9 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_4, L_6, L_8);
		return L_9;
	}
}
// System.Byte[] Byn.Awrtc.MessageDataBufferExt::Copy(Byn.Awrtc.MessageDataBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageDataBufferExt_Copy_m6628C408FF9B181C8AD9737AF5A8FBA0C03BC8EC (RuntimeObject* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_buffer;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Byn.Awrtc.MessageDataBuffer::get_Buffer() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5 = ___0_buffer;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_Offset() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		RuntimeObject* L_8 = ___0_buffer;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, L_6, (RuntimeArray*)L_7, 0, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
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
// System.Collections.Generic.List`1<Byn.Awrtc.IceServer> Byn.Awrtc.NetworkConfig::get_IceServers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* NetworkConfig_get_IceServers_m4BCDF260A6752D59C158653947B7249082E4C840 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	{
		List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* L_0 = __this->___mIceServers_0;
		return L_0;
	}
}
// System.Void Byn.Awrtc.NetworkConfig::set_IceServers(System.Collections.Generic.List`1<Byn.Awrtc.IceServer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfig_set_IceServers_mADC0293C8A6ECF63990157DE40D6DD2AF4C0E76F (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_1 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9345BD7109103FEC485091B4FD7E9598ECF00FE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkConfig_set_IceServers_mADC0293C8A6ECF63990157DE40D6DD2AF4C0E76F_RuntimeMethod_var)));
	}

IL_000e:
	{
		List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* L_2 = ___0_value;
		__this->___mIceServers_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mIceServers_0), (void*)L_2);
		return;
	}
}
// System.String Byn.Awrtc.NetworkConfig::get_SignalingUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkConfig_get_SignalingUrl_mFB0516DF1BC404414AC3490A36F3B65465255CD2 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mSignalingUrl_1;
		return L_0;
	}
}
// System.Void Byn.Awrtc.NetworkConfig::set_SignalingUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfig_set_SignalingUrl_mEEBC8B90F3497F8BBBB86DF5BD3A148FE20501F1 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___mSignalingUrl_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSignalingUrl_1), (void*)L_0);
		return;
	}
}
// System.Boolean Byn.Awrtc.NetworkConfig::get_AllowRenegotiation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkConfig_get_AllowRenegotiation_m19C17F8A7D7AC17DF1D412C1A420C18B0A176837 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mAllowRenegotiation_2;
		return L_0;
	}
}
// System.Void Byn.Awrtc.NetworkConfig::set_AllowRenegotiation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfig_set_AllowRenegotiation_m0F6E94F27EBD3F2A7B5B1454C3DCB1A2D9F0AE0D (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___mAllowRenegotiation_2 = L_0;
		return;
	}
}
// System.Boolean Byn.Awrtc.NetworkConfig::get_IsConference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkConfig_get_IsConference_mCEB7079529140541805C1E187121429FE6390697 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mIsConference_3;
		return L_0;
	}
}
// System.Void Byn.Awrtc.NetworkConfig::set_IsConference(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfig_set_IsConference_mD1E8F61D68F5D7B50D6E2EBAAFC93D9483D7B7A8 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___mIsConference_3 = L_0;
		return;
	}
}
// System.String Byn.Awrtc.NetworkConfig::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkConfig_ToString_m4848DD3B8369705B20F2A2B023BF449CBF07B03D (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m975DD5AE69B0BFD713D6B3CA200CDD023A1CD3A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m49885D86FCF235DBD048894830528DB3CF2AF1BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252A7EFDC2F1FD36D0D5A5B074231D03E01E9ADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A67C747DD8A55283D27F3990BAF9D8E967AC41C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CAA5F273743E5567CE672029477AEC35422E8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFAE1D0E5FE7378F27A096F9DFC22FE932F0C5E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralDFAE1D0E5FE7378F27A096F9DFC22FE932F0C5E2, NULL);
		V_1 = 0;
		goto IL_004d;
	}

IL_0022:
	{
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_0031:
	{
		StringBuilder_t* L_8 = V_0;
		List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* L_9 = __this->___mIceServers_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* L_11;
		L_11 = List_1_get_Item_m49885D86FCF235DBD048894830528DB3CF2AF1BD(L_9, L_10, List_1_get_Item_m49885D86FCF235DBD048894830528DB3CF2AF1BD_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_8);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_12, NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* L_16 = __this->___mIceServers_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m975DD5AE69B0BFD713D6B3CA200CDD023A1CD3A8_inline(L_16, List_1_get_Count_m975DD5AE69B0BFD713D6B3CA200CDD023A1CD3A8_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral2A67C747DD8A55283D27F3990BAF9D8E967AC41C, NULL);
		StringBuilder_t* L_22 = V_0;
		String_t* L_23;
		L_23 = NetworkConfig_get_SignalingUrl_mFB0516DF1BC404414AC3490A36F3B65465255CD2_inline(__this, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_23, NULL);
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteralD8CAA5F273743E5567CE672029477AEC35422E8A, NULL);
		StringBuilder_t* L_27 = V_0;
		bool L_28 = __this->___mAllowRenegotiation_2;
		NullCheck(L_27);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_27, L_28, NULL);
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral252A7EFDC2F1FD36D0D5A5B074231D03E01E9ADF, NULL);
		StringBuilder_t* L_32 = V_0;
		bool L_33;
		L_33 = NetworkConfig_get_IsConference_mCEB7079529140541805C1E187121429FE6390697_inline(__this, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_32, L_33, NULL);
		StringBuilder_t* L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
	}
}
// System.Void Byn.Awrtc.NetworkConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfig__ctor_m0AE0FDBD4ECDD5658C2D5844463A9F9D61F47EB5 (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED7FB4970DC04DF296F8C2937C405E5DEDC2A6AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79* L_0 = (List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79*)il2cpp_codegen_object_new(List_1_t671F6F061AA091834868CE5CC45E6E1A7E372A79_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED7FB4970DC04DF296F8C2937C405E5DEDC2A6AA(L_0, List_1__ctor_mED7FB4970DC04DF296F8C2937C405E5DEDC2A6AA_RuntimeMethod_var);
		__this->___mIceServers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mIceServers_0), (void*)L_0);
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
// Conversion methods for marshalling of: Byn.Awrtc.NetworkEvent
IL2CPP_EXTERN_C void NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshal_pinvoke(const NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E& unmarshaled, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___connectionId_1 = unmarshaled.___connectionId_1;
	if (unmarshaled.___data_2 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_2))
		{
			marshaled.___data_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___data_2));
			(marshaled.___data_2)->AddRef();
		}
		else
		{
			marshaled.___data_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___data_2);
		}
	}
	else
	{
		marshaled.___data_2 = NULL;
	}
}
IL2CPP_EXTERN_C void NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshal_pinvoke_back(const NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_pinvoke& marshaled, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 unmarshaledconnectionId_temp_1;
	memset((&unmarshaledconnectionId_temp_1), 0, sizeof(unmarshaledconnectionId_temp_1));
	unmarshaledconnectionId_temp_1 = marshaled.___connectionId_1;
	unmarshaled.___connectionId_1 = unmarshaledconnectionId_temp_1;
	if (marshaled.___data_2 != NULL)
	{
		unmarshaled.___data_2 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_2, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_2), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_2))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___data_2), Il2CppIUnknown::IID, marshaled.___data_2);
		}
	}
	else
	{
		unmarshaled.___data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_2), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Byn.Awrtc.NetworkEvent
IL2CPP_EXTERN_C void NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshal_pinvoke_cleanup(NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_pinvoke& marshaled)
{
	if (marshaled.___data_2 != NULL)
	{
		(marshaled.___data_2)->Release();
		marshaled.___data_2 = NULL;
	}
}
// Conversion methods for marshalling of: Byn.Awrtc.NetworkEvent
IL2CPP_EXTERN_C void NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshal_com(const NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E& unmarshaled, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___connectionId_1 = unmarshaled.___connectionId_1;
	if (unmarshaled.___data_2 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_2))
		{
			marshaled.___data_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___data_2));
			(marshaled.___data_2)->AddRef();
		}
		else
		{
			marshaled.___data_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___data_2);
		}
	}
	else
	{
		marshaled.___data_2 = NULL;
	}
}
IL2CPP_EXTERN_C void NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshal_com_back(const NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_com& marshaled, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 unmarshaledconnectionId_temp_1;
	memset((&unmarshaledconnectionId_temp_1), 0, sizeof(unmarshaledconnectionId_temp_1));
	unmarshaledconnectionId_temp_1 = marshaled.___connectionId_1;
	unmarshaled.___connectionId_1 = unmarshaledconnectionId_temp_1;
	if (marshaled.___data_2 != NULL)
	{
		unmarshaled.___data_2 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_2, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_2), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_2))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___data_2), Il2CppIUnknown::IID, marshaled.___data_2);
		}
	}
	else
	{
		unmarshaled.___data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_2), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Byn.Awrtc.NetworkEvent
IL2CPP_EXTERN_C void NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshal_com_cleanup(NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E_marshaled_com& marshaled)
{
	if (marshaled.___data_2 != NULL)
	{
		(marshaled.___data_2)->Release();
		marshaled.___data_2 = NULL;
	}
}
// Byn.Awrtc.NetEventType Byn.Awrtc.NetworkEvent::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkEvent_get_Type_m749301699A91615CD355389E04E3E64032CFCB11 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___type_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t NetworkEvent_get_Type_m749301699A91615CD355389E04E3E64032CFCB11_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = NetworkEvent_get_Type_m749301699A91615CD355389E04E3E64032CFCB11_inline(_thisAdjusted, method);
	return _returnValue;
}
// Byn.Awrtc.ConnectionId Byn.Awrtc.NetworkEvent::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___connectionId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 _returnValue;
	_returnValue = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object Byn.Awrtc.NetworkEvent::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkEvent_get_RawData_m010612D39AA930FDD4260A0D07FB12C9804E0192 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___data_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NetworkEvent_get_RawData_m010612D39AA930FDD4260A0D07FB12C9804E0192_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = NetworkEvent_get_RawData_m010612D39AA930FDD4260A0D07FB12C9804E0192_inline(_thisAdjusted, method);
	return _returnValue;
}
// Byn.Awrtc.MessageDataBuffer Byn.Awrtc.NetworkEvent::get_MessageData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___data_2;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] Byn.Awrtc.NetworkEvent::GetDataAsByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetworkEvent_GetDataAsByteArray_m568204908708933BC4A21BEC55ABC5305E6C2697 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59(__this, NULL);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		RuntimeObject* L_4;
		L_4 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59(__this, NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Byn.Awrtc.MessageDataBuffer::get_Buffer() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6;
		L_6 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_Offset() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_9);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_7, (RuntimeArray*)L_8, 0, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}

IL_0043:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetworkEvent_GetDataAsByteArray_m568204908708933BC4A21BEC55ABC5305E6C2697_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = NetworkEvent_GetDataAsByteArray_m568204908708933BC4A21BEC55ABC5305E6C2697(_thisAdjusted, method);
	return _returnValue;
}
// System.String Byn.Awrtc.NetworkEvent::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEvent_get_Info_m0CD887E4E39567B9DBAAEBC46879985482E9D0BE (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___data_2;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->___data_2;
		return ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
	}

IL_0019:
	{
		RuntimeObject* L_2 = __this->___data_2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_3 = __this->___data_2;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}

IL_002d:
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C  String_t* NetworkEvent_get_Info_m0CD887E4E39567B9DBAAEBC46879985482E9D0BE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NetworkEvent_get_Info_m0CD887E4E39567B9DBAAEBC46879985482E9D0BE(_thisAdjusted, method);
	return _returnValue;
}
// Byn.Awrtc.ErrorInfo Byn.Awrtc.NetworkEvent::get_ErrorInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* NetworkEvent_get_ErrorInfo_m790CDBC78B6D32DC7B3ECC1D6E8CF7F149FE014F (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___data_2;
		return ((ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620*)IsInstClass((RuntimeObject*)L_0, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C  ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* NetworkEvent_get_ErrorInfo_m790CDBC78B6D32DC7B3ECC1D6E8CF7F149FE014F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* _returnValue;
	_returnValue = NetworkEvent_get_ErrorInfo_m790CDBC78B6D32DC7B3ECC1D6E8CF7F149FE014F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mE67FC5AD4E0D46E8CE4DDA096620A94556B33F09 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_t;
		__this->___type_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		__this->___connectionId_1 = L_1;
		__this->___data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEvent__ctor_mE67FC5AD4E0D46E8CE4DDA096620A94556B33F09_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_t, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	NetworkEvent__ctor_mE67FC5AD4E0D46E8CE4DDA096620A94556B33F09(_thisAdjusted, ___0_t, method);
}
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mEF44539E731EBBD4FAF7274A349D34F1126FD9E2 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_t;
		__this->___type_0 = L_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_conId;
		__this->___connectionId_1 = L_1;
		__this->___data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEvent__ctor_mEF44539E731EBBD4FAF7274A349D34F1126FD9E2_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	NetworkEvent__ctor_mEF44539E731EBBD4FAF7274A349D34F1126FD9E2(_thisAdjusted, ___0_t, ___1_conId, method);
}
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.MessageDataBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, RuntimeObject* ___2_dt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_t;
		__this->___type_0 = L_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_conId;
		__this->___connectionId_1 = L_1;
		RuntimeObject* L_2 = ___2_dt;
		__this->___data_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_2);
		RuntimeObject* L_3 = __this->___data_2;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_4 = __this->___data_2;
		if (((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*)IsInstClass((RuntimeObject*)L_4, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_5 = __this->___data_2;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DF236F7E9A481C3FD9EA74719E414D5163D79E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D_RuntimeMethod_var)));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, RuntimeObject* ___2_dt, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D(_thisAdjusted, ___0_t, ___1_conId, ___2_dt, method);
}
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_m0CBD870B498BDA850F660472770077423A85B7FB (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, RuntimeObject* ___2_dt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_t;
		__this->___type_0 = L_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_conId;
		__this->___connectionId_1 = L_1;
		RuntimeObject* L_2 = ___2_dt;
		__this->___data_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_2);
		RuntimeObject* L_3 = __this->___data_2;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_4 = __this->___data_2;
		if (((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*)IsInstClass((RuntimeObject*)L_4, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_5 = __this->___data_2;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DF236F7E9A481C3FD9EA74719E414D5163D79E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkEvent__ctor_m0CBD870B498BDA850F660472770077423A85B7FB_RuntimeMethod_var)));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEvent__ctor_m0CBD870B498BDA850F660472770077423A85B7FB_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, RuntimeObject* ___2_dt, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	NetworkEvent__ctor_m0CBD870B498BDA850F660472770077423A85B7FB(_thisAdjusted, ___0_t, ___1_conId, ___2_dt, method);
}
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mB231B79419FA9D4FD449D7829F0E00D14CA380CD (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, String_t* ___2_address, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_t;
		__this->___type_0 = L_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_conId;
		__this->___connectionId_1 = L_1;
		String_t* L_2 = ___2_address;
		__this->___data_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEvent__ctor_mB231B79419FA9D4FD449D7829F0E00D14CA380CD_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, String_t* ___2_address, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	NetworkEvent__ctor_mB231B79419FA9D4FD449D7829F0E00D14CA380CD(_thisAdjusted, ___0_t, ___1_conId, ___2_address, method);
}
// System.Void Byn.Awrtc.NetworkEvent::.ctor(Byn.Awrtc.NetEventType,Byn.Awrtc.ConnectionId,Byn.Awrtc.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent__ctor_mA46FFF771F9CD6E1C8DDFF476C0BD117007D5C80 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___2_errorInfo, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_t;
		__this->___type_0 = L_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_1 = ___1_conId;
		__this->___connectionId_1 = L_1;
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_2 = ___2_errorInfo;
		__this->___data_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEvent__ctor_mA46FFF771F9CD6E1C8DDFF476C0BD117007D5C80_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_conId, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___2_errorInfo, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	NetworkEvent__ctor_mA46FFF771F9CD6E1C8DDFF476C0BD117007D5C80(_thisAdjusted, ___0_t, ___1_conId, ___2_errorInfo, method);
}
// System.String Byn.Awrtc.NetworkEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEvent_ToString_mF0B49EAA98C221A242FCC1504B5566E7858F672C (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetEventType_t5BB10430583C93C9F413A9B013DA9CCA588A4F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0665B3825F66A4521CBF971C2E44EE20246375E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF1F186012EA308133DFBD830EFC3939099B683);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95A18A32231BDD5D9B5E164D36FC1F9D798BF341);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* V_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral0665B3825F66A4521CBF971C2E44EE20246375E7, NULL);
		StringBuilder_t* L_3 = V_0;
		uint8_t L_4 = __this->___type_0;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(NetEventType_t5BB10430583C93C9F413A9B013DA9CCA588A4F65_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_3, L_6, NULL);
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral8EF1F186012EA308133DFBD830EFC3939099B683, NULL);
		StringBuilder_t* L_10 = V_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_11 = __this->___connectionId_1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_12 = L_11;
		RuntimeObject* L_13 = Box(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral95A18A32231BDD5D9B5E164D36FC1F9D798BF341, NULL);
		RuntimeObject* L_17 = __this->___data_2;
		if (!((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*)IsInstClass((RuntimeObject*)L_17, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_18 = __this->___data_2;
		V_1 = ((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*)CastclassClass((RuntimeObject*)L_18, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var));
		StringBuilder_t* L_19 = V_0;
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_20 = V_1;
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20->___array_2;
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ByteArrayBuffer_get_Offset_m8D76EF91272F63C71B625CCD459816C32F15C8D8_inline(L_22, NULL);
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ByteArrayBuffer_get_PositionWriteAbsolute_mA19A3E432DF05415EB2D82F69E07F006BDB43152(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = BitConverter_ToString_mB4DC448C2229347732EB34E8EE5C54EE171BE2A3(L_21, L_23, L_25, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_26, NULL);
		goto IL_0094;
	}

IL_0087:
	{
		StringBuilder_t* L_28 = V_0;
		RuntimeObject* L_29 = __this->___data_2;
		NullCheck(L_28);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_28, L_29, NULL);
	}

IL_0094:
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		return L_32;
	}
}
IL2CPP_EXTERN_C  String_t* NetworkEvent_ToString_mF0B49EAA98C221A242FCC1504B5566E7858F672C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NetworkEvent_ToString_mF0B49EAA98C221A242FCC1504B5566E7858F672C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Byn.Awrtc.NetworkEvent::IsMetaEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEvent_IsMetaEvent_m488FA24505BD443DFF5E9D2952600893D365A418 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arr, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)((int32_t)200);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_arr;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_arr;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_arr;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = V_0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Byn.Awrtc.NetworkEvent Byn.Awrtc.NetworkEvent::FromByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E NetworkEvent_FromByteArray_m7FFAB5917075130FBA65506BE2CE3FED4C6CE5CD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEvent_FromByteArray_m7FFAB5917075130FBA65506BE2CE3FED4C6CE5CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	uint8_t V_1 = 0;
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* V_4 = NULL;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_arr;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_arr;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_arr;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int16_t L_7;
		L_7 = BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61(L_6, 2, NULL);
		ConnectionId__ctor_mD6FB77426F0ACC9BFB11034E4C2CAA6052DE5FA7_inline((&V_2), L_7, NULL);
		uint8_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_arr;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_10;
		L_10 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_9, 4, NULL);
		V_3 = L_10;
		uint32_t L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_12;
		L_12 = ByteArrayBuffer_Get_m3281A3A589DC27B7AA164600AE7B34ED6FF814D2(L_11, (bool)0, NULL);
		V_4 = L_12;
		V_5 = 0;
		goto IL_0051;
	}

IL_0030:
	{
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_13 = V_4;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = ByteArrayBuffer_get_Buffer_mF7982705EFA0C018C06567ACD5274EF307B9078E(L_13, NULL);
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_15 = V_4;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ByteArrayBuffer_get_Offset_m8D76EF91272F63C71B625CCD459816C32F15C8D8_inline(L_15, NULL);
		uint32_t L_17 = V_5;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_16), ((int64_t)(uint64_t)L_17)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NetworkEvent_FromByteArray_m7FFAB5917075130FBA65506BE2CE3FED4C6CE5CD_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_arr;
		uint32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(8, (int32_t)L_19));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_16), ((int64_t)(uint64_t)L_17))))), (uint8_t)L_21);
		uint32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, 1));
	}

IL_0051:
	{
		uint32_t L_23 = V_5;
		uint32_t L_24 = V_3;
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_24))))
		{
			goto IL_0030;
		}
	}
	{
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_25 = V_4;
		uint32_t L_26 = V_3;
		NullCheck(L_25);
		ByteArrayBuffer_set_PositionWriteRelative_m404083D7F5F4D5AC26EB3329E6BEC515DEE9CFB1_inline(L_25, L_26, NULL);
		uint8_t L_27 = V_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_28 = V_2;
		ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* L_29 = V_4;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_30;
		memset((&L_30), 0, sizeof(L_30));
		NetworkEvent__ctor_m2D27BD640BE50379B1C26B8F26E252CF6156E10D((&L_30), L_27, L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_0068:
	{
		uint8_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			goto IL_0095;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_arr;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_33;
		L_33 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_32, 4, NULL);
		V_6 = L_33;
		uint32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_34, 2));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_35;
		L_35 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___0_arr;
		uint32_t L_37 = V_6;
		NullCheck(L_35);
		String_t* L_38;
		L_38 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_35, L_36, 8, L_37);
		V_7 = L_38;
		uint8_t L_39 = V_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_40 = V_2;
		String_t* L_41 = V_7;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_42;
		memset((&L_42), 0, sizeof(L_42));
		NetworkEvent__ctor_mB231B79419FA9D4FD449D7829F0E00D14CA380CD((&L_42), L_39, L_40, L_41, /*hidden argument*/NULL);
		return L_42;
	}

IL_0095:
	{
		uint8_t L_43 = V_0;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_44 = V_2;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_45;
		memset((&L_45), 0, sizeof(L_45));
		NetworkEvent__ctor_mEF44539E731EBBD4FAF7274A349D34F1126FD9E2((&L_45), L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
// System.Byte[] Byn.Awrtc.NetworkEvent::ToByteArray(Byn.Awrtc.NetworkEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetworkEvent_ToByteArray_m59E5C5E4CE57E1EB70CED4896D8ABA7595D4B216 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	String_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	String_t* V_13 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_14 = NULL;
	{
		V_0 = (bool)1;
		V_1 = 4;
		V_2 = (uint8_t)0;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_0 = ___0_evt;
		RuntimeObject* L_1 = L_0.___data_2;
		if (!((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*)IsInstClass((RuntimeObject*)L_1, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		V_2 = (uint8_t)1;
		uint32_t L_2 = V_1;
		RuntimeObject* L_3;
		L_3 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_3);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, ((int32_t)il2cpp_codegen_add(4, L_4))));
		goto IL_0068;
	}

IL_0028:
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_5 = ___0_evt;
		RuntimeObject* L_6 = L_5.___data_2;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		V_2 = (uint8_t)2;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_7 = ___0_evt;
		RuntimeObject* L_8 = L_7.___data_2;
		V_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_10 = V_1;
		String_t* L_11 = V_5;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, ((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_12, 2))))));
		goto IL_0068;
	}

IL_0057:
	{
		uint32_t L_13 = V_1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		String_t* L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_14, L_15);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, ((int32_t)il2cpp_codegen_add(4, L_16))));
	}

IL_0068:
	{
		uint32_t L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_20 = ___0_evt;
		uint8_t L_21 = L_20.___type_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_3;
		uint8_t L_23 = V_2;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_23);
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_24 = ___0_evt;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_25 = L_24.___connectionId_1;
		int16_t L_26 = L_25.___id_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15(L_26, NULL);
		V_4 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		NullCheck(L_29);
		int32_t L_30 = 0;
		uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = 1;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_35);
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_36 = ___0_evt;
		RuntimeObject* L_37 = L_36.___data_2;
		if (!((ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8*)IsInstClass((RuntimeObject*)L_37, ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8_il2cpp_TypeInfo_var)))
		{
			goto IL_011e;
		}
	}
	{
		RuntimeObject* L_38;
		L_38 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_38);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_39, NULL);
		V_6 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_6;
		NullCheck(L_42);
		int32_t L_43 = 0;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_6;
		NullCheck(L_46);
		int32_t L_47 = 1;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_6;
		NullCheck(L_50);
		int32_t L_51 = 2;
		uint8_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_6;
		NullCheck(L_54);
		int32_t L_55 = 3;
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_56);
		RuntimeObject* L_57;
		L_57 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		NullCheck(L_57);
		int32_t L_58;
		L_58 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_Offset() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_57);
		V_7 = L_58;
		V_8 = 0;
		goto IL_0109;
	}

IL_00eb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_3;
		int32_t L_60 = V_8;
		RuntimeObject* L_61;
		L_61 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		NullCheck(L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Byn.Awrtc.MessageDataBuffer::get_Buffer() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_61);
		int32_t L_63 = V_7;
		int32_t L_64 = V_8;
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_63, L_64));
		uint8_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(8, L_60))), (uint8_t)L_66);
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0109:
	{
		int32_t L_68 = V_8;
		RuntimeObject* L_69;
		L_69 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		NullCheck(L_69);
		int32_t L_70;
		L_70 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Byn.Awrtc.MessageDataBuffer::get_ContentLength() */, MessageDataBuffer_t9296DED3A6FD4A4170DEE5A9028AD20FB28B94DE_il2cpp_TypeInfo_var, L_69);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_01fa;
	}

IL_011e:
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_71 = ___0_evt;
		RuntimeObject* L_72 = L_71.___data_2;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_01fa;
		}
	}
	{
		bool L_73 = V_0;
		if (!L_73)
		{
			goto IL_01a5;
		}
	}
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_74 = ___0_evt;
		RuntimeObject* L_75 = L_74.___data_2;
		V_9 = ((String_t*)IsInstSealed((RuntimeObject*)L_75, String_t_il2cpp_TypeInfo_var));
		String_t* L_76 = V_9;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_76, NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78;
		L_78 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_77, NULL);
		V_10 = L_78;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_10;
		NullCheck(L_80);
		int32_t L_81 = 0;
		uint8_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_82);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = V_10;
		NullCheck(L_84);
		int32_t L_85 = 1;
		uint8_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_86);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = V_10;
		NullCheck(L_88);
		int32_t L_89 = 2;
		uint8_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_90);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_10;
		NullCheck(L_92);
		int32_t L_93 = 3;
		uint8_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_94);
		V_11 = 0;
		goto IL_0198;
	}

IL_016d:
	{
		String_t* L_95 = V_9;
		int32_t L_96 = V_11;
		NullCheck(L_95);
		Il2CppChar L_97;
		L_97 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_95, L_96, NULL);
		V_12 = L_97;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = V_3;
		int32_t L_99 = V_11;
		uint16_t L_100 = V_12;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(8, ((int32_t)il2cpp_codegen_multiply(L_99, 2))))), (uint8_t)((int32_t)(uint8_t)L_100));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = V_3;
		int32_t L_102 = V_11;
		uint16_t L_103 = V_12;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(8, ((int32_t)il2cpp_codegen_multiply(L_102, 2)))), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_103>>8))));
		int32_t L_104 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0198:
	{
		int32_t L_105 = V_11;
		String_t* L_106 = V_9;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_106, NULL);
		if ((((int32_t)L_105) < ((int32_t)L_107)))
		{
			goto IL_016d;
		}
	}
	{
		goto IL_01fa;
	}

IL_01a5:
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_108 = ___0_evt;
		RuntimeObject* L_109 = L_108.___data_2;
		V_13 = ((String_t*)IsInstSealed((RuntimeObject*)L_109, String_t_il2cpp_TypeInfo_var));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_110;
		L_110 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		String_t* L_111 = V_13;
		NullCheck(L_110);
		int32_t L_112;
		L_112 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_110, L_111);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113;
		L_113 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(((int32_t)(L_112/2)), NULL);
		V_14 = L_113;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = V_14;
		NullCheck(L_115);
		int32_t L_116 = 0;
		uint8_t L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_117);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = V_14;
		NullCheck(L_119);
		int32_t L_120 = 1;
		uint8_t L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_121);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = V_14;
		NullCheck(L_123);
		int32_t L_124 = 2;
		uint8_t L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_125);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = V_14;
		NullCheck(L_127);
		int32_t L_128 = 3;
		uint8_t L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_129);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_130;
		L_130 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		String_t* L_131 = V_13;
		String_t* L_132 = V_13;
		NullCheck(L_132);
		int32_t L_133;
		L_133 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_132, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = V_3;
		NullCheck(L_130);
		int32_t L_135;
		L_135 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_130, L_131, 0, L_133, L_134, 8);
	}

IL_01fa:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_136 = V_3;
		return L_136;
	}
}
// System.Void Byn.Awrtc.NetworkEvent::AttachError(Byn.Awrtc.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkEvent_AttachError_mF50D6D3BFBA8020CC7A93662FE52890703208DD4 (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___0_error, const RuntimeMethod* method) 
{
	{
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_0 = ___0_error;
		__this->___data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkEvent_AttachError_mF50D6D3BFBA8020CC7A93662FE52890703208DD4_AdjustorThunk (RuntimeObject* __this, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___0_error, const RuntimeMethod* method)
{
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E*>(__this + _offset);
	NetworkEvent_AttachError_mF50D6D3BFBA8020CC7A93662FE52890703208DD4_inline(_thisAdjusted, ___0_error, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Byn.Awrtc.BufferedFrame::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferedFrame_get_Buffer_m2DC1E4D6558256FBE65AE72ABB2BF6B510F55E7C (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mBuffer_0;
		return L_0;
	}
}
// System.Boolean Byn.Awrtc.BufferedFrame::get_Buffered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferedFrame_get_Buffered_m036F73951959B01958AC9C87E6A56F2CD6E0648B (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Byn.Awrtc.BufferedFrame::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedFrame_get_Width_m1D042156CEFFA7E4BAE4F06E928F9DE7F2D2FBDC (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mWidth_1;
		return L_0;
	}
}
// System.Int32 Byn.Awrtc.BufferedFrame::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedFrame_get_Height_m527372652D682AB4AAB832A94CF8E26CB99FA53A (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mHeight_2;
		return L_0;
	}
}
// System.Int32 Byn.Awrtc.BufferedFrame::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedFrame_get_Rotation_mC35A7A47EF7FFBF1225E3C5A8CA86D3ED2B90374 (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mRotation_3;
		return L_0;
	}
}
// System.Void Byn.Awrtc.BufferedFrame::set_Rotation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedFrame_set_Rotation_mC873E609856C03CFC69158A31263CE2EF55F6B24 (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___mRotation_3 = L_0;
		return;
	}
}
// System.Boolean Byn.Awrtc.BufferedFrame::get_IsTopRowFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferedFrame_get_IsTopRowFirst_m124498F816E79AE7F73EFF212C21489B6A83669D (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mTopRowFirst_4;
		return L_0;
	}
}
// Byn.Awrtc.FramePixelFormat Byn.Awrtc.BufferedFrame::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedFrame_get_Format_m57DD4AA4A3694ECCC14343545EA292BD9F6955C8 (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mFormat_5;
		return L_0;
	}
}
// System.Void Byn.Awrtc.BufferedFrame::.ctor(System.Byte[],System.Int32,System.Int32,Byn.Awrtc.FramePixelFormat,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedFrame__ctor_m3C0223D8411940E1C73D7804A340BD357C0985E8 (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_width, int32_t ___2_height, int32_t ___3_format, int32_t ___4_rotation, bool ___5_isTopRowFirst, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		__this->___mBuffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mBuffer_0), (void*)L_0);
		int32_t L_1 = ___1_width;
		__this->___mWidth_1 = L_1;
		int32_t L_2 = ___2_height;
		__this->___mHeight_2 = L_2;
		int32_t L_3 = ___4_rotation;
		__this->___mRotation_3 = L_3;
		int32_t L_4 = ___3_format;
		__this->___mFormat_5 = L_4;
		bool L_5 = ___5_isTopRowFirst;
		__this->___mTopRowFirst_4 = L_5;
		return;
	}
}
// System.Void Byn.Awrtc.BufferedFrame::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedFrame_Dispose_mC7728357990326B087D1AE0E857F3A16FDC6F7C3 (BufferedFrame_tC838AB09A0FAE3B7465B85D8B99E956D1F44F4D2* __this, const RuntimeMethod* method) 
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
// System.Void Byn.Awrtc.SLog::SetLogger(System.Action`2<System.Object,System.String[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_SetLogger_m16D93C917F17C91971C8226369C56D322B5CEBA3 (Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* ___0_logger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ___0_logger;
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6), (void*)L_0);
		return;
	}
}
// System.Void Byn.Awrtc.SLog::LogException(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LogException_mE70D0D801089CC84D895987FDC26DD12B8BD4624 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___0_msg;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_tags;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_EXCEPTION_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790(L_2, L_4, NULL);
		SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8(L_1, L_6, NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Byn.Awrtc.SLog::LE(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LE_m9311AF7DA8AE883A95CEF0751ED30D23AA829B94 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___0_msg;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_tags;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_ERROR_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790(L_2, L_4, NULL);
		SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8(L_1, L_6, NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Byn.Awrtc.SLog::LW(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___0_msg;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_tags;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_WARNING_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790(L_2, L_4, NULL);
		SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8(L_1, L_6, NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Byn.Awrtc.SLog::LV(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LV_m8ADFC439117C96B581699C9A745C42803C7ED830 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___0_msg;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_tags;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_VERBOSE_5;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790(L_2, L_4, NULL);
		SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8(L_1, L_6, NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Byn.Awrtc.SLog::LD(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LD_m93EBB0A73E255F5BAB5041BE21918104DC356190 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___0_msg;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_tags;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_DEBUG_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790(L_2, L_4, NULL);
		SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8(L_1, L_6, NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Byn.Awrtc.SLog::L(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_L_m29F9D573958A70843D02EBB5A988FFD3D6023195 (RuntimeObject* ___0_msg, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___0_msg;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_tags;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_INFO_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790(L_2, L_4, NULL);
		SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8(L_1, L_6, NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.String[] Byn.Awrtc.SLog::MergeTags(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SLog_MergeTags_m39B4A76935379D71637AF195C96080BEC8446790 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tags, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_newTags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_newTags;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_newTags;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___0_tags;
		NullCheck(L_2);
		Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F((&___1_newTags), ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), ((int32_t)(((RuntimeArray*)L_2)->max_length)))), Array_Resize_TisString_t_m97C3C25EB676963A7B93FC9E3A524C09D73DCA8F_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_tags;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___1_newTags;
		int32_t L_5 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ___0_tags;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___1_newTags;
		return L_7;
	}
}
// System.Void Byn.Awrtc.SLog::LogArray(System.Object,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog_LogArray_m770776BC1B04DFC6AB22EFECD69502618FD451A8 (RuntimeObject* ___0_obj, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_tags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_0 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7* L_1 = ((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6;
		RuntimeObject* L_2 = ___0_obj;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___1_tags;
		NullCheck(L_1);
		Action_2_Invoke_m9CDAB913D08292B7A7D1318BAE78325EEA8C11D5_inline(L_1, L_2, L_3, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Byn.Awrtc.SLog::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SLog__cctor_mA7C925C138233A2168DCCDC1C948C7DDE239B9C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F130946577022936EE02472C36D257149CEBE97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63F2F886B52F79785A42EC95EA195115165F4E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_WARNING_0 = _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_WARNING_0), (void*)_stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A);
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_ERROR_1 = _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_ERROR_1), (void*)_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_EXCEPTION_2 = _stringLiteralD63F2F886B52F79785A42EC95EA195115165F4E2;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_EXCEPTION_2), (void*)_stringLiteralD63F2F886B52F79785A42EC95EA195115165F4E2);
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_INFO_3 = _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_INFO_3), (void*)_stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44);
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_DEBUG_4 = _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_DEBUG_4), (void*)_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_VERBOSE_5 = _stringLiteral4F130946577022936EE02472C36D257149CEBE97;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___TAG_VERBOSE_5), (void*)_stringLiteral4F130946577022936EE02472C36D257149CEBE97);
		((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6 = (Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_StaticFields*)il2cpp_codegen_static_fields_for(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var))->___sLogger_6), (void*)(Action_2_tAD573E58BF9243F5E6BB71D7ACD67F0388BDEEC7*)NULL);
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
// System.Void Byn.Awrtc.Base.AWebRtcCall::add_CallEvent(Byn.Awrtc.CallEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_add_CallEvent_mF5E2043A18A81779B81E7B71D79B66E6A858E5E9 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* V_0 = NULL;
	CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* V_1 = NULL;
	CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* V_2 = NULL;
	{
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_0 = __this->___CallEvent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_1 = V_0;
		V_1 = L_1;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_2 = V_1;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*)CastclassSealed((RuntimeObject*)L_4, CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05_il2cpp_TypeInfo_var));
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05** L_5 = (&__this->___CallEvent_3);
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_6 = V_2;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_7 = V_1;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_8;
		L_8 = InterlockedCompareExchangeImpl<CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*>(L_5, L_6, L_7);
		V_0 = L_8;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_9 = V_0;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_10 = V_1;
		if ((!(((RuntimeObject*)(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*)L_9) == ((RuntimeObject*)(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::remove_CallEvent(Byn.Awrtc.CallEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_remove_CallEvent_m415EF2CA82CC47DE3F08FC15C6D44A23FE46DA29 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* V_0 = NULL;
	CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* V_1 = NULL;
	CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* V_2 = NULL;
	{
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_0 = __this->___CallEvent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_1 = V_0;
		V_1 = L_1;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_2 = V_1;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*)CastclassSealed((RuntimeObject*)L_4, CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05_il2cpp_TypeInfo_var));
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05** L_5 = (&__this->___CallEvent_3);
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_6 = V_2;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_7 = V_1;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_8;
		L_8 = InterlockedCompareExchangeImpl<CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*>(L_5, L_6, L_7);
		V_0 = L_8;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_9 = V_0;
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_10 = V_1;
		if ((!(((RuntimeObject*)(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*)L_9) == ((RuntimeObject*)(CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_get_IsDisposed_mBFAD74A5A449B98C53F78349CFAAFE6CCFFA1967 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mIsDisposed_9;
		return L_0;
	}
}
// Byn.Awrtc.Base.AWebRtcCall/CallState Byn.Awrtc.Base.AWebRtcCall::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AWebRtcCall_get_State_mC06D1CCFEB1DCCE3A79B64685AFBB220EE649E90 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mState_8;
		return L_0;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::get_LocalFrameEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_get_LocalFrameEvents_m5E6717880FDDAE5E981EFC5FD1E4BD22E613A03C (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mLocalFrameEvents_10;
		return L_0;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::set_LocalFrameEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_set_LocalFrameEvents_m0F4C60FD1DEB09A683E4D4B759262749B75C4B90 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___mLocalFrameEvents_10 = L_0;
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::.ctor(Byn.Awrtc.NetworkConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall__ctor_mEE582AB1E17117B48C1E2F309C072D8642442F2E (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* ___0_config, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m67DC01D7FD26C4B9E91696E99B3D1B310BA76552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99BD9CCE57FDCB70299030B139503D39CB502255);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* L_0 = (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766*)il2cpp_codegen_object_new(NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetworkConfig__ctor_m0AE0FDBD4ECDD5658C2D5844463A9F9D61F47EB5(L_0, NULL);
		__this->___mNetworkConfig_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNetworkConfig_1), (void*)L_0);
		__this->___mLocalFrameEvents_10 = (bool)1;
		__this->___mServerInactive_11 = (bool)1;
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_1 = (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*)il2cpp_codegen_object_new(List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m67DC01D7FD26C4B9E91696E99B3D1B310BA76552(L_1, List_1__ctor_m67DC01D7FD26C4B9E91696E99B3D1B310BA76552_RuntimeMethod_var);
		__this->___mConnectionIds_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mConnectionIds_12), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* L_2 = ___0_config;
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* L_3 = ___0_config;
		__this->___mNetworkConfig_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNetworkConfig_1), (void*)L_3);
		NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* L_4 = ___0_config;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkConfig_get_IsConference_mCEB7079529140541805C1E187121429FE6390697_inline(L_4, NULL);
		__this->___mConferenceMode_5 = L_5;
		NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* L_6 = __this->___mNetworkConfig_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = NetworkConfig_get_AllowRenegotiation_m19C17F8A7D7AC17DF1D412C1A420C18B0A176837_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_10 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_10);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(_stringLiteral99BD9CCE57FDCB70299030B139503D39CB502255, L_9, NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Initialize(Byn.Awrtc.IMediaNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Initialize_m186CA4FF92DD35F0CF1A187388C93FD56F5FACDF (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, RuntimeObject* ___0_network, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_network;
		__this->___mNetwork_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNetwork_4), (void*)L_0);
		__this->___mState_8 = 1;
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Configure(Byn.Awrtc.MediaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Configure_mBAB34E64CD89C3D1A45DA1189A8D68567CD0E703 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* ___0_config, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB549FE66FB8935E431398D5D2328B7CEFB1A8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_0 = ___0_config;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61658BA9D1B4D2C127BE1396467F879D626FD014)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_Configure_mBAB34E64CD89C3D1A45DA1189A8D68567CD0E703_RuntimeMethod_var)));
	}

IL_000e:
	{
		AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E(__this, NULL);
		int32_t L_2 = __this->___mState_8;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* L_3 = __this->___mNetworkConfig_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkConfig_get_AllowRenegotiation_m19C17F8A7D7AC17DF1D412C1A420C18B0A176837_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_5 = __this->___mState_8;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD965DB9FCEEFC777059E3B331DDF004688E302B)), L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_Configure_mBAB34E64CD89C3D1A45DA1189A8D68567CD0E703_RuntimeMethod_var)));
	}

IL_0045:
	{
		int32_t L_10 = __this->___mState_8;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		__this->___mState_8 = 2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_13 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_L_m29F9D573958A70843D02EBB5A988FFD3D6023195(_stringLiteralFBB549FE66FB8935E431398D5D2328B7CEFB1A8D, L_12, NULL);
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_14 = ___0_config;
		__this->___mMediaConfig_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mMediaConfig_2), (void*)L_14);
		RuntimeObject* L_15 = __this->___mNetwork_4;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_16 = __this->___mMediaConfig_2;
		NullCheck(L_15);
		InterfaceActionInvoker1< MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* >::Invoke(0 /* System.Void Byn.Awrtc.IMediaNetwork::Configure(Byn.Awrtc.MediaConfig) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_15, L_16);
		return;
	}

IL_0086:
	{
		int32_t L_17 = __this->___mState_8;
		if ((!(((uint32_t)L_17) == ((uint32_t)7))))
		{
			goto IL_00b5;
		}
	}
	{
		NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* L_18 = __this->___mNetworkConfig_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = NetworkConfig_get_AllowRenegotiation_m19C17F8A7D7AC17DF1D412C1A420C18B0A176837_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_00b5;
		}
	}
	{
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_20 = ___0_config;
		__this->___mMediaConfig_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mMediaConfig_2), (void*)L_20);
		RuntimeObject* L_21 = __this->___mNetwork_4;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_22 = __this->___mMediaConfig_2;
		NullCheck(L_21);
		InterfaceActionInvoker1< MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* >::Invoke(0 /* System.Void Byn.Awrtc.IMediaNetwork::Configure(Byn.Awrtc.MediaConfig) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_21, L_22);
		return;
	}

IL_00b5:
	{
		int32_t L_23 = __this->___mState_8;
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_00d7;
		}
	}
	{
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_24 = ___0_config;
		__this->___mMediaConfig_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mMediaConfig_2), (void*)L_24);
		RuntimeObject* L_25 = __this->___mNetwork_4;
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_26 = __this->___mMediaConfig_2;
		NullCheck(L_25);
		InterfaceActionInvoker1< MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* >::Invoke(0 /* System.Void Byn.Awrtc.IMediaNetwork::Configure(Byn.Awrtc.MediaConfig) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_25, L_26);
		return;
	}

IL_00d7:
	{
		int32_t L_27 = __this->___mState_8;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var)), &L_28);
		String_t* L_30;
		L_30 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD965DB9FCEEFC777059E3B331DDF004688E302B)), L_29, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_31 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_31, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_Configure_mBAB34E64CD89C3D1A45DA1189A8D68567CD0E703_RuntimeMethod_var)));
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Call(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Call_m7AD1C0845C10BCB4385A2E8A11CF35BD4DAE8CF0 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF170264088A3033B7139C3345835B7B93EC8FECD);
		s_Il2CppMethodInitialized = true;
	}
	{
		AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E(__this, NULL);
		int32_t L_0 = __this->___mState_8;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_1 = __this->___mState_8;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2 = __this->___mState_8;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_3 = __this->___mState_8;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD965DB9FCEEFC777059E3B331DDF004688E302B)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_Call_m7AD1C0845C10BCB4385A2E8A11CF35BD4DAE8CF0_RuntimeMethod_var)));
	}

IL_003c:
	{
		bool L_8 = __this->___mConferenceMode_5;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB567365DE256CA7657B87B07F7460967192E95E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_Call_m7AD1C0845C10BCB4385A2E8A11CF35BD4DAE8CF0_RuntimeMethod_var)));
	}

IL_004f:
	{
		String_t* L_10 = ___0_address;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF170264088A3033B7139C3345835B7B93EC8FECD, L_10, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_14 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_L_m29F9D573958A70843D02EBB5A988FFD3D6023195(L_11, L_13, NULL);
		AWebRtcCall_EnsureConfiguration_m10234AA21678F6EC618D59034E311D7ABEB09186(__this, NULL);
		int32_t L_15 = __this->___mState_8;
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_16 = ___0_address;
		AWebRtcCall_ProcessCall_m2EA3C171A75C255710FD4E301EDCAE973714330D(__this, L_16, NULL);
		return;
	}

IL_0084:
	{
		String_t* L_17 = ___0_address;
		AWebRtcCall_PendingCall_m552EB57809B7C78DE965B00A0C2D2447A5CA9525(__this, L_17, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Listen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Listen_m479C190B936DFBCDF396CF6A8B0921709FA6CB87 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	{
		AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E(__this, NULL);
		int32_t L_0 = __this->___mState_8;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_1 = __this->___mState_8;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2 = __this->___mState_8;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_3 = __this->___mState_8;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD965DB9FCEEFC777059E3B331DDF004688E302B)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_Listen_m479C190B936DFBCDF396CF6A8B0921709FA6CB87_RuntimeMethod_var)));
	}

IL_003c:
	{
		bool L_8 = __this->___mServerInactive_11;
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_9 = __this->___mState_8;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD965DB9FCEEFC777059E3B331DDF004688E302B)), L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE930265A93DA6F2CCA6B502401F1155FA6F9F0B8)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_Listen_m479C190B936DFBCDF396CF6A8B0921709FA6CB87_RuntimeMethod_var)));
	}

IL_0064:
	{
		AWebRtcCall_EnsureConfiguration_m10234AA21678F6EC618D59034E311D7ABEB09186(__this, NULL);
		int32_t L_14 = __this->___mState_8;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_15 = ___0_address;
		AWebRtcCall_ProcessListen_m942E1723FDA5BFB8D96C67AF2CFAE0A76693FC31(__this, L_15, NULL);
		return;
	}

IL_007b:
	{
		String_t* L_16 = ___0_address;
		AWebRtcCall_PendingListen_m68D65334F0F12E0BB3C85F4ACB0794B3394C714D(__this, L_16, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Send_m442434E182EF4AE1DA94CB9E318C697590304AEC (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		AWebRtcCall_Send_m02ED4A8CFD3A119AAAD018DB68049D449702CC7D(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Send(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Send_m02ED4A8CFD3A119AAAD018DB68049D449702CC7D (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_message, bool ___1_reliable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E(__this, NULL);
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = AWebRtcCall_PackStringMsg_m541C916DFFE349A27ABBCAB140307EC120F152E9(L_0, NULL);
		V_0 = L_1;
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_2 = __this->___mConnectionIds_12;
		NullCheck(L_2);
		Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 L_3;
		L_3 = List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6(L_2, List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3((&V_1), Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_001b_1:
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_4;
				L_4 = Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_inline((&V_1), Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
				V_2 = L_4;
				RuntimeObject* L_5 = __this->___mNetwork_4;
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_6 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
				NullCheck(L_8);
				bool L_9 = ___1_reliable;
				NullCheck(L_5);
				bool L_10;
				L_10 = InterfaceFuncInvoker5< bool, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool >::Invoke(3 /* System.Boolean Byn.Awrtc.INetwork::SendData(Byn.Awrtc.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean) */, INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var, L_5, L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9);
			}

IL_0036_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851((&V_1), Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::Send(System.String,System.Boolean,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_Send_mABD05B4BCBB16C7FEB8B7CDEBCEC93658227F6E4 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_message, bool ___1_reliable, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___2_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = AWebRtcCall_PackStringMsg_m541C916DFFE349A27ABBCAB140307EC120F152E9(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___mNetwork_4;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_3 = ___2_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = ___1_reliable;
		NullCheck(L_2);
		bool L_7;
		L_7 = InterfaceFuncInvoker5< bool, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool >::Invoke(3 /* System.Boolean Byn.Awrtc.INetwork::SendData(Byn.Awrtc.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean) */, INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var, L_2, L_3, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6);
		return L_7;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::IsStringMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_IsStringMsg_mF6FD7F7E50E5BA64659CE3B0D0C415A39CB1494E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___MESSAGE_TYPE_STRING_7;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		return (bool)0;
	}
}
// System.Byte[] Byn.Awrtc.Base.AWebRtcCall::PackStringMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWebRtcCall_PackStringMsg_m541C916DFFE349A27ABBCAB140307EC120F152E9 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		String_t* L_1 = ___0_message;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_0, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_0 = L_3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		String_t* L_5 = ___0_message;
		String_t* L_6 = ___0_message;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_4);
		int32_t L_9;
		L_9 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_4, L_5, 0, L_7, L_8, 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		uint8_t L_11 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___MESSAGE_TYPE_STRING_7;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return L_12;
	}
}
// System.String Byn.Awrtc.Base.AWebRtcCall::UnpackStringMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWebRtcCall_UnpackStringMsg_mB0CFF7A6E1A0AEC6D71E858CEB3F319A82663DFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AWebRtcCall_IsStringMsg_mF6FD7F7E50E5BA64659CE3B0D0C415A39CB1494E(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD54424AF9E912A25E4065D909E583EED1B4237C7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_UnpackStringMsg_mB0CFF7A6E1A0AEC6D71E858CEB3F319A82663DFF_RuntimeMethod_var)));
	}

IL_0013:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1)));
		return L_6;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Send(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Send_m1DDEE2CCA960758A3E7644CA581D10DF5BC7F479 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, bool ___1_reliable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000e;
		}
	}

IL_000d:
	{
		return;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = AWebRtcCall_PackDataMsg_m543EB718C49FE11C9E29DB123C8EF7C416A1D536(L_2, NULL);
		V_0 = L_3;
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_4 = __this->___mConnectionIds_12;
		NullCheck(L_4);
		Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 L_5;
		L_5 = List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6(L_4, List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3((&V_1), Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0023_1:
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_6;
				L_6 = Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_inline((&V_1), Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
				V_2 = L_6;
				RuntimeObject* L_7 = __this->___mNetwork_4;
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_8 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
				NullCheck(L_10);
				bool L_11 = ___1_reliable;
				NullCheck(L_7);
				bool L_12;
				L_12 = InterfaceFuncInvoker5< bool, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool >::Invoke(3 /* System.Boolean Byn.Awrtc.INetwork::SendData(Byn.Awrtc.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean) */, INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var, L_7, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), L_11);
			}

IL_003e_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851((&V_1), Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		return;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::Send(System.Byte[],System.Boolean,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_Send_mE8B14947EAD420755DE0F063556C50560C6B5C7B (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, bool ___1_reliable, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___2_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (bool)0;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = AWebRtcCall_PackDataMsg_m543EB718C49FE11C9E29DB123C8EF7C416A1D536(L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = __this->___mNetwork_4;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_5 = ___2_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = ___1_reliable;
		NullCheck(L_4);
		bool L_9;
		L_9 = InterfaceFuncInvoker5< bool, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool >::Invoke(3 /* System.Boolean Byn.Awrtc.INetwork::SendData(Byn.Awrtc.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean) */, INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var, L_4, L_5, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8);
		return L_9;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::IsDataMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_IsDataMsg_m854E78A88BCBC5ECEA5F9D6D9C32988C59C7BD2E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___MESSAGE_TYPE_DATA_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		return (bool)0;
	}
}
// System.Byte[] Byn.Awrtc.Base.AWebRtcCall::PackDataMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWebRtcCall_PackDataMsg_m543EB718C49FE11C9E29DB123C8EF7C416A1D536 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___MESSAGE_TYPE_DATA_6;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		V_1 = 1;
		goto IL_0023;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_data;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0023:
	{
		int32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		return L_13;
	}
}
// System.Byte[] Byn.Awrtc.Base.AWebRtcCall::UnpackDataMsg(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWebRtcCall_UnpackDataMsg_m8E6178BC303306E10C298AE83585FEDAAF5AE304 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_msg;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001b;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_msg;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001b:
	{
		int32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Update_m26AD9EE7A5838EA667BB7F6A9229EDF9C1B4D0F2 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	{
		bool L_0 = __this->___mIsDisposed_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->___mNetwork_4;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RuntimeObject* L_2 = __this->___mNetwork_4;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Byn.Awrtc.INetwork::Update() */, INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var, L_2);
		int32_t L_3 = __this->___mState_8;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_4 = __this->___mNetwork_4;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = InterfaceFuncInvoker0< uint8_t >::Invoke(1 /* Byn.Awrtc.MediaConfigurationState Byn.Awrtc.IMediaNetwork::GetConfigurationState() */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		uint8_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_7 = __this->___mNetwork_4;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Byn.Awrtc.IMediaNetwork::GetConfigurationError() */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_7);
		AWebRtcCall_OnConfigurationFailed_m224529A37E7AF75501895C4778192A724CE4669A(__this, L_8, NULL);
		bool L_9 = __this->___mIsDisposed_9;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		RuntimeObject* L_10 = __this->___mNetwork_4;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_11 = __this->___mNetwork_4;
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Byn.Awrtc.IMediaNetwork::ResetConfiguration() */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_11);
		goto IL_007f;
	}

IL_0065:
	{
		uint8_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)3))))
		{
			goto IL_007f;
		}
	}
	{
		AWebRtcCall_OnConfigurationComplete_m5C34524B1CE3482E6E21B5A326F3A31FA55B123F(__this, NULL);
		bool L_13 = __this->___mIsDisposed_9;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		return;
	}

IL_0078:
	{
		NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E L_14 = V_0;
		VirtualActionInvoker1< NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E >::Invoke(29 /* System.Void Byn.Awrtc.Base.AWebRtcCall::HandleNetworkEvent(Byn.Awrtc.NetworkEvent) */, __this, L_14);
	}

IL_007f:
	{
		RuntimeObject* L_15 = __this->___mNetwork_4;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_16 = __this->___mNetwork_4;
		NullCheck(L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker1< bool, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* >::Invoke(0 /* System.Boolean Byn.Awrtc.INetwork::Dequeue(Byn.Awrtc.NetworkEvent&) */, INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var, L_16, (&V_0));
		if (L_17)
		{
			goto IL_0078;
		}
	}

IL_0096:
	{
		VirtualActionInvoker0::Invoke(28 /* System.Void Byn.Awrtc.Base.AWebRtcCall::HandleMediaEvents() */, __this);
		RuntimeObject* L_18 = __this->___mNetwork_4;
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject* L_19 = __this->___mNetwork_4;
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Byn.Awrtc.INetwork::Flush() */, INetwork_t57ADCABFD0C4C97EA540CC956F15B6BA9895A52A_il2cpp_TypeInfo_var, L_19);
	}

IL_00af:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::HandleMediaEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_HandleMediaEvents_mA3DC62D29AB1CD7D3405200F1C5C594BC6FEA440 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* V_2 = NULL;
	Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* V_6 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = __this->___mNetwork_4;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1 = __this->___mLocalFrameEvents_10;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_2 = __this->___mNetwork_4;
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_3 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 >::Invoke(4 /* Byn.Awrtc.IFrame Byn.Awrtc.IMediaNetwork::TryGetFrame(Byn.Awrtc.ConnectionId) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_6 = ((ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7_il2cpp_TypeInfo_var))->___INVALID_0;
		RuntimeObject* L_7 = V_1;
		FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* L_8 = (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F*)il2cpp_codegen_object_new(FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FrameUpdateEventArgs__ctor_m05F8E94F9619CA434E3D798995808AAC2115EB16(L_8, L_6, L_7, NULL);
		V_2 = L_8;
		CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* L_9 = V_2;
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_9, NULL);
		bool L_10 = __this->___mIsDisposed_9;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0042:
	{
		RuntimeObject* L_11 = __this->___mNetwork_4;
		bool L_12 = V_0;
		if (!((int32_t)(((!(((RuntimeObject*)(RuntimeObject*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)&(int32_t)L_12)))
		{
			goto IL_00b7;
		}
	}
	{
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_13 = __this->___mConnectionIds_12;
		NullCheck(L_13);
		Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6 L_14;
		L_14 = List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6(L_13, List_1_GetEnumerator_m2CC96DD39AB2A5F61BE2EC06AB11AF096162FBA6_RuntimeMethod_var);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3((&V_3), Enumerator_Dispose_m34DEDC6CC0BB82C9B6D20C0F39E0436825280EF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009e_1;
			}

IL_005d_1:
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_15;
				L_15 = Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_inline((&V_3), Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_RuntimeMethod_var);
				V_4 = L_15;
				RuntimeObject* L_16 = __this->___mNetwork_4;
				if (!L_16)
				{
					goto IL_009e_1;
				}
			}
			{
				RuntimeObject* L_17 = __this->___mNetwork_4;
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_18 = V_4;
				NullCheck(L_17);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker1< RuntimeObject*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 >::Invoke(4 /* Byn.Awrtc.IFrame Byn.Awrtc.IMediaNetwork::TryGetFrame(Byn.Awrtc.ConnectionId) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_17, L_18);
				V_5 = L_19;
				RuntimeObject* L_20 = V_5;
				if (!L_20)
				{
					goto IL_009e_1;
				}
			}
			{
				ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_21 = V_4;
				RuntimeObject* L_22 = V_5;
				FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F* L_23 = (FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F*)il2cpp_codegen_object_new(FrameUpdateEventArgs_t6E6B0F373BEF52A0ED59AD35631520435996716F_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				FrameUpdateEventArgs__ctor_m05F8E94F9619CA434E3D798995808AAC2115EB16(L_23, L_21, L_22, NULL);
				V_6 = L_23;
				CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* L_24 = V_6;
				AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_24, NULL);
				bool L_25 = __this->___mIsDisposed_9;
				if (!L_25)
				{
					goto IL_009e_1;
				}
			}
			{
				goto IL_00b7;
			}

IL_009e_1:
			{
				bool L_26;
				L_26 = Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851((&V_3), Enumerator_MoveNext_m00075A62D6946C254450AFA55688F475CEEF7851_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_00b7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::HandleNetworkEvent(Byn.Awrtc.NetworkEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_HandleNetworkEvent_mF0E4D34AF018B51031B80D19CBA7F3C822164AEF (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBasicNetwork_t0DC90958FE0B1FFE6600B47B3F3270429156D5B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m74D95FD0C9C144AE99DD8738950D86AC5BF1AAAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB547917F8477F8A6320F4DB9180ACB1B311CAA69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14C5C730393FD9BC6197E9CC5B8DD546EC3C8AC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC01DBC85EB9E04E7189827FB86521FEF4DF032);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BFCC1B7A51C3BFE06D662EEFAC980EDC86CB45F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA46D058F10FF6C2B41CE88A650808ADCD86BB510);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint8_t V_4 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	String_t* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	uint8_t V_8 = 0x0;
	{
		uint8_t L_0;
		L_0 = NetworkEvent_get_Type_m749301699A91615CD355389E04E3E64032CFCB11_inline((&___0_evt), NULL);
		V_0 = L_0;
		uint8_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_02e4;
			}
			case 1:
			{
				goto IL_0240;
			}
			case 2:
			{
				goto IL_01b1;
			}
			case 3:
			{
				goto IL_01d9;
			}
			case 4:
			{
				goto IL_0202;
			}
			case 5:
			{
				goto IL_0031;
			}
			case 6:
			{
				goto IL_00f6;
			}
			case 7:
			{
				goto IL_0151;
			}
		}
	}
	{
		return;
	}

IL_0031:
	{
		int32_t L_2 = __this->___mState_8;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_004b;
		}
	}
	{
		bool L_3 = __this->___mConferenceMode_5;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_4 = __this->___mState_8;
		if ((!(((uint32_t)L_4) == ((uint32_t)7))))
		{
			goto IL_0091;
		}
	}

IL_004b:
	{
		bool L_5 = __this->___mConferenceMode_5;
		if (L_5)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_6 = __this->___mNetwork_4;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Byn.Awrtc.IBasicNetwork::StopServer() */, IBasicNetwork_t0DC90958FE0B1FFE6600B47B3F3270429156D5B3_il2cpp_TypeInfo_var, L_6);
	}

IL_005e:
	{
		__this->___mState_8 = 7;
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_7 = __this->___mConnectionIds_12;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_8;
		L_8 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		NullCheck(L_7);
		List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_inline(L_7, L_8, List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_RuntimeMethod_var);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_9;
		L_9 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5* L_10 = (CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5*)il2cpp_codegen_object_new(CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		CallAcceptedEventArgs__ctor_mA3AF7F3E7716C822F53FC736B3A3139484DFC7CF(L_10, L_9, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_10, NULL);
		bool L_11 = __this->___mIsDisposed_9;
		return;
	}

IL_0091:
	{
		int32_t L_12 = __this->___mState_8;
		if ((!(((uint32_t)L_12) == ((uint32_t)6))))
		{
			goto IL_00cd;
		}
	}
	{
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_13 = __this->___mConnectionIds_12;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_14;
		L_14 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		NullCheck(L_13);
		List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_inline(L_13, L_14, List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_RuntimeMethod_var);
		__this->___mState_8 = 7;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_15;
		L_15 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5* L_16 = (CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5*)il2cpp_codegen_object_new(CallAcceptedEventArgs_t12703BFBE4B66FE5753C76A7BC626AB756DC78D5_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		CallAcceptedEventArgs__ctor_mA3AF7F3E7716C822F53FC736B3A3139484DFC7CF(L_16, L_15, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_16, NULL);
		bool L_17 = __this->___mIsDisposed_9;
		return;
	}

IL_00cd:
	{
		int32_t L_18 = __this->___mState_8;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral2AC01DBC85EB9E04E7189827FB86521FEF4DF032, L_20, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_24 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(L_21, L_23, NULL);
		return;
	}

IL_00f6:
	{
		int32_t L_25 = __this->___mState_8;
		if ((!(((uint32_t)L_25) == ((uint32_t)6))))
		{
			goto IL_0123;
		}
	}
	{
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_26;
		L_26 = NetworkEvent_get_ErrorInfo_m790CDBC78B6D32DC7B3ECC1D6E8CF7F149FE014F((&___0_evt), NULL);
		ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* L_27 = (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB*)il2cpp_codegen_object_new(ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ErrorEventArgs__ctor_mBB04F7DB056528287DF7910A3D3AF4CAB53F0EDA(L_27, 6, L_26, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_27, NULL);
		bool L_28 = __this->___mIsDisposed_9;
		if (!L_28)
		{
			goto IL_011b;
		}
	}
	{
		return;
	}

IL_011b:
	{
		__this->___mState_8 = 3;
		return;
	}

IL_0123:
	{
		int32_t L_29 = __this->___mState_8;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(CallState_tEF6EE4AE700F50AD62E4F4BBF2018DF775BA7878_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32;
		L_32 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(_stringLiteral8BFCC1B7A51C3BFE06D662EEFAC980EDC86CB45F, L_31, _stringLiteral14C5C730393FD9BC6197E9CC5B8DD546EC3C8AC2, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_35 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_35);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(L_32, L_34, NULL);
		return;
	}

IL_0151:
	{
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_36 = __this->___mConnectionIds_12;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_37;
		L_37 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		NullCheck(L_36);
		bool L_38;
		L_38 = List_1_Contains_m74D95FD0C9C144AE99DD8738950D86AC5BF1AAAE(L_36, L_37, List_1_Contains_m74D95FD0C9C144AE99DD8738950D86AC5BF1AAAE_RuntimeMethod_var);
		if (!L_38)
		{
			goto IL_0394;
		}
	}
	{
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_39 = __this->___mConnectionIds_12;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_40;
		L_40 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		NullCheck(L_39);
		bool L_41;
		L_41 = List_1_Remove_mB547917F8477F8A6320F4DB9180ACB1B311CAA69(L_39, L_40, List_1_Remove_mB547917F8477F8A6320F4DB9180ACB1B311CAA69_RuntimeMethod_var);
		bool L_42 = __this->___mConferenceMode_5;
		if (L_42)
		{
			goto IL_0197;
		}
	}
	{
		List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* L_43 = __this->___mConnectionIds_12;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_inline(L_43, List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_RuntimeMethod_var);
		if (L_44)
		{
			goto IL_0197;
		}
	}
	{
		__this->___mState_8 = 8;
	}

IL_0197:
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_45;
		L_45 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD* L_46 = (CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD*)il2cpp_codegen_object_new(CallEndedEventArgs_t70B8C23454001960788FECEAFCC1713FE655C0AD_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		CallEndedEventArgs__ctor_mD50EFA3DEB25C0EFB4AA06C66126E158F0DC6E6A(L_46, L_45, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_46, NULL);
		bool L_47 = __this->___mIsDisposed_9;
		return;
	}

IL_01b1:
	{
		__this->___mServerInactive_11 = (bool)0;
		__this->___mState_8 = 5;
		String_t* L_48;
		L_48 = NetworkEvent_get_Info_m0CD887E4E39567B9DBAAEBC46879985482E9D0BE((&___0_evt), NULL);
		WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255* L_49 = (WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255*)il2cpp_codegen_object_new(WaitForIncomingCallEventArgs_t3E31F855CD23A2071629BF2A140007270A85D255_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		WaitForIncomingCallEventArgs__ctor_mC379C8D451FF05E7B0250165CD88B07E06C2930C(L_49, L_48, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_49, NULL);
		bool L_50 = __this->___mIsDisposed_9;
		return;
	}

IL_01d9:
	{
		__this->___mServerInactive_11 = (bool)1;
		__this->___mState_8 = 3;
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_51;
		L_51 = NetworkEvent_get_ErrorInfo_m790CDBC78B6D32DC7B3ECC1D6E8CF7F149FE014F((&___0_evt), NULL);
		ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* L_52 = (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB*)il2cpp_codegen_object_new(ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ErrorEventArgs__ctor_mBB04F7DB056528287DF7910A3D3AF4CAB53F0EDA(L_52, 7, L_51, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_52, NULL);
		bool L_53 = __this->___mIsDisposed_9;
		return;
	}

IL_0202:
	{
		__this->___mServerInactive_11 = (bool)1;
		int32_t L_54 = __this->___mState_8;
		if ((((int32_t)L_54) == ((int32_t)5)))
		{
			goto IL_021e;
		}
	}
	{
		int32_t L_55 = __this->___mState_8;
		if ((!(((uint32_t)L_55) == ((uint32_t)4))))
		{
			goto IL_0394;
		}
	}

IL_021e:
	{
		__this->___mState_8 = 3;
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_56;
		L_56 = NetworkEvent_get_ErrorInfo_m790CDBC78B6D32DC7B3ECC1D6E8CF7F149FE014F((&___0_evt), NULL);
		ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* L_57 = (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB*)il2cpp_codegen_object_new(ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		ErrorEventArgs__ctor_mBB04F7DB056528287DF7910A3D3AF4CAB53F0EDA(L_57, 7, L_56, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_57, NULL);
		bool L_58 = __this->___mIsDisposed_9;
		return;
	}

IL_0240:
	{
		RuntimeObject* L_59;
		L_59 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60;
		L_60 = MessageDataBufferExt_Copy_m6628C408FF9B181C8AD9737AF5A8FBA0C03BC8EC(L_59, NULL);
		V_1 = L_60;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = AWebRtcCall_IsStringMsg_mF6FD7F7E50E5BA64659CE3B0D0C415A39CB1494E(L_61, NULL);
		if (!L_62)
		{
			goto IL_0272;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_64;
		L_64 = AWebRtcCall_UnpackStringMsg_mB0CFF7A6E1A0AEC6D71E858CEB3F319A82663DFF(L_63, NULL);
		V_2 = L_64;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_65;
		L_65 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		String_t* L_66 = V_2;
		MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2* L_67 = (MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2*)il2cpp_codegen_object_new(MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		MessageEventArgs__ctor_m7647C6440347809EFC77AB64C1275BAD6E098248(L_67, L_65, L_66, (bool)1, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_67, NULL);
		goto IL_02d0;
	}

IL_0272:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = AWebRtcCall_IsDataMsg_m854E78A88BCBC5ECEA5F9D6D9C32988C59C7BD2E(L_68, NULL);
		if (!L_69)
		{
			goto IL_0297;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71;
		L_71 = AWebRtcCall_UnpackDataMsg_m8E6178BC303306E10C298AE83585FEDAAF5AE304(L_70, NULL);
		V_3 = L_71;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_72;
		L_72 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_3;
		DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9* L_74 = (DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9*)il2cpp_codegen_object_new(DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		DataMessageEventArgs__ctor_m124D5E4A61259583FEB20A7F07E7279FD4C23CD9(L_74, L_72, L_73, (bool)1, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_74, NULL);
		goto IL_02d0;
	}

IL_0297:
	{
		V_4 = (uint8_t)((int32_t)255);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_1;
		if (!L_75)
		{
			goto IL_02ac;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_1;
		NullCheck(L_76);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))) >= ((int32_t)0)))
		{
			goto IL_02ac;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_1;
		NullCheck(L_77);
		int32_t L_78 = 0;
		uint8_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_4 = L_79;
	}

IL_02ac:
	{
		uint8_t L_80 = V_4;
		uint8_t L_81 = L_80;
		RuntimeObject* L_82 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_81);
		String_t* L_83;
		L_83 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteralA46D058F10FF6C2B41CE88A650808ADCD86BB510, L_82, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = L_84;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_86 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_86);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_86);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(L_83, L_85, NULL);
	}

IL_02d0:
	{
		RuntimeObject* L_87;
		L_87 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		NullCheck(L_87);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_87);
		bool L_88 = __this->___mIsDisposed_9;
		return;
	}

IL_02e4:
	{
		RuntimeObject* L_89;
		L_89 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90;
		L_90 = MessageDataBufferExt_Copy_m6628C408FF9B181C8AD9737AF5A8FBA0C03BC8EC(L_89, NULL);
		V_5 = L_90;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_5;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = AWebRtcCall_IsStringMsg_mF6FD7F7E50E5BA64659CE3B0D0C415A39CB1494E(L_91, NULL);
		if (!L_92)
		{
			goto IL_031b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_5;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_94;
		L_94 = AWebRtcCall_UnpackStringMsg_mB0CFF7A6E1A0AEC6D71E858CEB3F319A82663DFF(L_93, NULL);
		V_6 = L_94;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_95;
		L_95 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		String_t* L_96 = V_6;
		MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2* L_97 = (MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2*)il2cpp_codegen_object_new(MessageEventArgs_t9304061610840AAC10C9A2E6BB239DE6D269B3B2_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		MessageEventArgs__ctor_m7647C6440347809EFC77AB64C1275BAD6E098248(L_97, L_95, L_96, (bool)0, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_97, NULL);
		goto IL_0380;
	}

IL_031b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = V_5;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		bool L_99;
		L_99 = AWebRtcCall_IsDataMsg_m854E78A88BCBC5ECEA5F9D6D9C32988C59C7BD2E(L_98, NULL);
		if (!L_99)
		{
			goto IL_0344;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = V_5;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101;
		L_101 = AWebRtcCall_UnpackDataMsg_m8E6178BC303306E10C298AE83585FEDAAF5AE304(L_100, NULL);
		V_7 = L_101;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_102;
		L_102 = NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline((&___0_evt), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_7;
		DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9* L_104 = (DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9*)il2cpp_codegen_object_new(DataMessageEventArgs_t30D3FFA477BFF3CD613AD65BBD8F17E84FCE51B9_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		DataMessageEventArgs__ctor_m124D5E4A61259583FEB20A7F07E7279FD4C23CD9(L_104, L_102, L_103, (bool)0, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_104, NULL);
		goto IL_0380;
	}

IL_0344:
	{
		V_8 = (uint8_t)((int32_t)255);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = V_5;
		if (!L_105)
		{
			goto IL_035c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_5;
		NullCheck(L_106);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length))) >= ((int32_t)0)))
		{
			goto IL_035c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_5;
		NullCheck(L_107);
		int32_t L_108 = 0;
		uint8_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_8 = L_109;
	}

IL_035c:
	{
		uint8_t L_110 = V_8;
		uint8_t L_111 = L_110;
		RuntimeObject* L_112 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_111);
		String_t* L_113;
		L_113 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteralA46D058F10FF6C2B41CE88A650808ADCD86BB510, L_112, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_114 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_115 = L_114;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_116 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, L_116);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_116);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(L_113, L_115, NULL);
	}

IL_0380:
	{
		RuntimeObject* L_117;
		L_117 = NetworkEvent_get_MessageData_m7D424D00C7BA3B525623276580847793E27ECF59((&___0_evt), NULL);
		NullCheck(L_117);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_117);
		bool L_118 = __this->___mIsDisposed_9;
		return;
	}

IL_0394:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::PendingCall(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_PendingCall_m552EB57809B7C78DE965B00A0C2D2447A5CA9525 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_address;
		__this->___mPendingAddress_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPendingAddress_15), (void*)L_0);
		__this->___mPendingCallCall_14 = (bool)1;
		__this->___mPendingListenCall_13 = (bool)0;
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::ProcessCall(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_ProcessCall_m2EA3C171A75C255710FD4E301EDCAE973714330D (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBasicNetwork_t0DC90958FE0B1FFE6600B47B3F3270429156D5B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___mState_8 = 6;
		RuntimeObject* L_0 = __this->___mNetwork_4;
		String_t* L_1 = ___0_address;
		NullCheck(L_0);
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2;
		L_2 = InterfaceFuncInvoker1< ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, String_t* >::Invoke(2 /* Byn.Awrtc.ConnectionId Byn.Awrtc.IBasicNetwork::Connect(System.String) */, IBasicNetwork_t0DC90958FE0B1FFE6600B47B3F3270429156D5B3_il2cpp_TypeInfo_var, L_0, L_1);
		AWebRtcCall_ClearPending_m2E8CD1E54BB41FF79F840F768969FE6479DD2271(__this, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::PendingListen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_PendingListen_m68D65334F0F12E0BB3C85F4ACB0794B3394C714D (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_address;
		__this->___mPendingAddress_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPendingAddress_15), (void*)L_0);
		__this->___mPendingCallCall_14 = (bool)0;
		__this->___mPendingListenCall_13 = (bool)1;
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::ProcessListen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_ProcessListen_m942E1723FDA5BFB8D96C67AF2CFAE0A76693FC31 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBasicNetwork_t0DC90958FE0B1FFE6600B47B3F3270429156D5B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32CC2C27A3F82A2E501C52FB0A8B98CA8E46DAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_address;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA32CC2C27A3F82A2E501C52FB0A8B98CA8E46DAE, L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_4 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_L_m29F9D573958A70843D02EBB5A988FFD3D6023195(L_1, L_3, NULL);
		__this->___mServerInactive_11 = (bool)0;
		__this->___mState_8 = 4;
		RuntimeObject* L_5 = __this->___mNetwork_4;
		String_t* L_6 = ___0_address;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Byn.Awrtc.IBasicNetwork::StartServer(System.String) */, IBasicNetwork_t0DC90958FE0B1FFE6600B47B3F3270429156D5B3_il2cpp_TypeInfo_var, L_5, L_6);
		AWebRtcCall_ClearPending_m2E8CD1E54BB41FF79F840F768969FE6479DD2271(__this, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::DoPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_DoPending_m3D7190BD67EF62312E0189A439762F880B108FEB (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mPendingCallCall_14;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->___mPendingAddress_15;
		AWebRtcCall_ProcessCall_m2EA3C171A75C255710FD4E301EDCAE973714330D(__this, L_1, NULL);
		goto IL_002a;
	}

IL_0016:
	{
		bool L_2 = __this->___mPendingListenCall_13;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = __this->___mPendingAddress_15;
		AWebRtcCall_ProcessListen_m942E1723FDA5BFB8D96C67AF2CFAE0A76693FC31(__this, L_3, NULL);
	}

IL_002a:
	{
		AWebRtcCall_ClearPending_m2E8CD1E54BB41FF79F840F768969FE6479DD2271(__this, NULL);
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::ClearPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_ClearPending_m2E8CD1E54BB41FF79F840F768969FE6479DD2271 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	{
		__this->___mPendingAddress_15 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPendingAddress_15), (void*)(String_t*)NULL);
		__this->___mPendingCallCall_14 = (bool)0;
		__this->___mPendingListenCall_13 = (bool)0;
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::CheckDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mIsDisposed_9;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09EFD7F108F5E8EC79313A405A35DABE70D5FEEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWebRtcCall_CheckDisposed_mD72D8B22A9516A1CDB74FEE6438E202C3D86F47E_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::EnsureConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_EnsureConfiguration_m10234AA21678F6EC618D59034E311D7ABEB09186 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94148143B24AD60B8C006E5197C131BE027F52CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___mState_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_3 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(_stringLiteral94148143B24AD60B8C006E5197C131BE027F52CD, L_2, NULL);
		MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* L_4 = (MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A*)il2cpp_codegen_object_new(MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MediaConfig__ctor_m74B48595BB33375E761C1712B675F646CDE9C7EA(L_4, NULL);
		VirtualActionInvoker1< MediaConfig_t14F31B7D2B26F6D04B8FD66C917536DA92873E3A* >::Invoke(24 /* System.Void Byn.Awrtc.Base.AWebRtcCall::Configure(Byn.Awrtc.MediaConfig) */, __this, L_4);
	}

IL_002c:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::TriggerCallEvent(Byn.Awrtc.CallEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___0_args, const RuntimeMethod* method) 
{
	{
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_0 = __this->___CallEvent_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* L_1 = __this->___CallEvent_3;
		CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* L_2 = ___0_args;
		NullCheck(L_1);
		CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::OnConfigurationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_OnConfigurationComplete_m5C34524B1CE3482E6E21B5A326F3A31FA55B123F (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6362F8DFE3C2F6189EFF196C1029B51DCB7FABC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___mIsDisposed_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->___mState_8 = 3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_3 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_L_m29F9D573958A70843D02EBB5A988FFD3D6023195(_stringLiteral6362F8DFE3C2F6189EFF196C1029B51DCB7FABC3, L_2, NULL);
		CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* L_4 = (CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147*)il2cpp_codegen_object_new(CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallEventArgs__ctor_m27835C1E1A8C79D0D5B5FF0B13440DD7A41C761B(L_4, 8, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_4, NULL);
		bool L_5 = __this->___mIsDisposed_9;
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		AWebRtcCall_DoPending_m3D7190BD67EF62312E0189A439762F880B108FEB(__this, NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::OnConfigurationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_OnConfigurationFailed_m224529A37E7AF75501895C4778192A724CE4669A (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C0ADCF96A2328DB0819A0B7022F5995025926B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_error;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral40C0ADCF96A2328DB0819A0B7022F5995025926B, L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_4 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(L_1, L_3, NULL);
		bool L_5 = __this->___mIsDisposed_9;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0027:
	{
		__this->___mState_8 = 1;
		String_t* L_6 = ___0_error;
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_7 = (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620*)il2cpp_codegen_object_new(ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ErrorInfo__ctor_m3AEA9E29713388D1F4298105AB270AFAAC9149D9(L_7, L_6, NULL);
		ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB* L_8 = (ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB*)il2cpp_codegen_object_new(ErrorEventArgs_t7ECC1212F61BE1614F140BAE84A1A10B25A0AFEB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ErrorEventArgs__ctor_mBB04F7DB056528287DF7910A3D3AF4CAB53F0EDA(L_8, ((int32_t)9), L_7, NULL);
		AWebRtcCall_TriggerCallEvent_mD513FF5D24DC4C1DC4F7409C267E239EDF71270F(__this, L_8, NULL);
		bool L_9 = __this->___mIsDisposed_9;
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		AWebRtcCall_ClearPending_m2E8CD1E54BB41FF79F840F768969FE6479DD2271(__this, NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Dispose_m8BBA38E44EFE6864C542234F1C5B8B7FCA9AB302 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mIsDisposed_9;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = ___0_disposing;
		__this->___mIsDisposed_9 = (bool)1;
	}

IL_0011:
	{
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_Dispose_m4EF37AAFAC8AC5FC0F40C78310645CB9E8F38053 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(30 /* System.Void Byn.Awrtc.Base.AWebRtcCall::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::SetVolume(System.Double,Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_SetVolume_m7E9F191FE0A0BA66A8BAB99D1EAC1DBBB875FB05 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, double ___0_volume, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___1_remoteUserId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91CAEAC72E6E047DE9226AC571C10D0E9B4BA8D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mNetwork_4;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___mNetwork_4;
		double L_2 = ___0_volume;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_3 = ___1_remoteUserId;
		NullCheck(L_1);
		InterfaceActionInvoker2< double, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 >::Invoke(5 /* System.Void Byn.Awrtc.IMediaNetwork::SetVolume(System.Double,Byn.Awrtc.ConnectionId) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}

IL_0016:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		String_t* L_6 = ((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		il2cpp_codegen_runtime_class_init_inline(SLog_tB306D01548C5F9057FEBA18F1046B6FBCCBB1721_il2cpp_TypeInfo_var);
		SLog_LW_m223C61D8BB1637F0AAC0AFD0FD940208B1412356(_stringLiteral91CAEAC72E6E047DE9226AC571C10D0E9B4BA8D4, L_5, NULL);
		return;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::HasAudioTrack(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_HasAudioTrack_m1F61BD2A192DEC289A296765886084070646EA2A (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_remoteUserId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mNetwork_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___mNetwork_4;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___0_remoteUserId;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 >::Invoke(6 /* System.Boolean Byn.Awrtc.IMediaNetwork::HasAudioTrack(Byn.Awrtc.ConnectionId) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::HasVideoTrack(Byn.Awrtc.ConnectionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_HasVideoTrack_m145EF1FFAB3F20B66361802DEEB493D80E621626 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_remoteUserId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mNetwork_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___mNetwork_4;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___0_remoteUserId;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 >::Invoke(7 /* System.Boolean Byn.Awrtc.IMediaNetwork::HasVideoTrack(Byn.Awrtc.ConnectionId) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Byn.Awrtc.Base.AWebRtcCall::IsMute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWebRtcCall_IsMute_mCE992965B66543C8CEF3C190ADF9057842605EC3 (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mNetwork_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___mNetwork_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Byn.Awrtc.IMediaNetwork::IsMute() */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::SetMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall_SetMute_mEC72F131218DC1ED27E25950FF43C564AA88970D (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, bool ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mNetwork_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->___mNetwork_4;
		bool L_2 = ___0_val;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void Byn.Awrtc.IMediaNetwork::SetMute(System.Boolean) */, IMediaNetwork_tBB462E2787D9712734C6AE95BCE4211C3E049CC5_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Int32 Byn.Awrtc.Base.AWebRtcCall::GetBufferedAmount(Byn.Awrtc.ConnectionId,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AWebRtcCall_GetBufferedAmount_mBDC0FD55B00C098BBBFD82FF564F1F6EFF12D0CA (AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_id, bool ___1_reliable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRtcNetwork_tAA1E8F8E4CA689692406111CD8F29ED9551B50DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mNetwork_4;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___mNetwork_4;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_2 = ___0_id;
		bool L_3 = ___1_reliable;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2< int32_t, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, bool >::Invoke(0 /* System.Int32 Byn.Awrtc.IWebRtcNetwork::GetBufferedAmount(Byn.Awrtc.ConnectionId,System.Boolean) */, IWebRtcNetwork_tAA1E8F8E4CA689692406111CD8F29ED9551B50DA_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		return (-1);
	}
}
// System.Void Byn.Awrtc.Base.AWebRtcCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWebRtcCall__cctor_m84DF3FE9298FC726481005367736FE6069C185E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB73AE203E0E8B52385E79F7CBAEC935E8DC070);
		s_Il2CppMethodInitialized = true;
	}
	{
		((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0 = _stringLiteral8BB73AE203E0E8B52385E79F7CBAEC935E8DC070;
		Il2CppCodeGenWriteBarrier((void**)(&((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___LOGTAG_0), (void*)_stringLiteral8BB73AE203E0E8B52385E79F7CBAEC935E8DC070);
		((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___MESSAGE_TYPE_DATA_6 = (uint8_t)1;
		((AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_StaticFields*)il2cpp_codegen_static_fields_for(AWebRtcCall_t9C4022707E5CB585F465E9EAD9211F3D21D6B6DD_il2cpp_TypeInfo_var))->___MESSAGE_TYPE_STRING_7 = (uint8_t)2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ErrorInfo_get_ErrorMessage_mE918B75DB5A1A316BAAB7B16D03260F2C132C6E8_inline (ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mErrorMessage_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CallEventArgs_get_Type_m6C6F57DE5DB32EE8C7473324218610ECF1BDF3E7_inline (CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionId__ctor_mD6FB77426F0ACC9BFB11034E4C2CAA6052DE5FA7_inline (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7* __this, int16_t ___0_lId, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_lId;
		__this->___id_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IceServer_get_Username_m57F16DE3845C8634519ACC62B0E0E82D86356EA4_inline (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mUsername_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IceServer_get_Credential_m63F420875D884F2BE9E1B162566D5BBFE4A51969_inline (IceServer_t479A9FF486779583D0710FBEC05702E05FF6D1F8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mCredential_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionReadRelative_m6744691413C85626915E746913A3C1A66DC6C53E_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___positionRead_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_PositionWriteRelative_m2CC7D7CDA5AABB1D8FBA5C95F4C7D5D9B6AC611F_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___positionWrite_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NetworkConfig_get_SignalingUrl_mFB0516DF1BC404414AC3490A36F3B65465255CD2_inline (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mSignalingUrl_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkConfig_get_IsConference_mCEB7079529140541805C1E187121429FE6390697_inline (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mIsConference_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t NetworkEvent_get_Type_m749301699A91615CD355389E04E3E64032CFCB11_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___type_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 NetworkEvent_get_ConnectionId_m90682B9C1F478D36004F6EDE99AB2F3A44E87515_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = __this->___connectionId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkEvent_get_RawData_m010612D39AA930FDD4260A0D07FB12C9804E0192_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___data_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteArrayBuffer_get_Offset_m8D76EF91272F63C71B625CCD459816C32F15C8D8_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___offset_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteArrayBuffer_set_PositionWriteRelative_m404083D7F5F4D5AC26EB3329E6BEC515DEE9CFB1_inline (ByteArrayBuffer_tF007E73CD0D101FCCD00664DE71E902BA64652A8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___positionWrite_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkEvent_AttachError_mF50D6D3BFBA8020CC7A93662FE52890703208DD4_inline (NetworkEvent_t6D46042D56AE8CB787CC307645DFBF5C5F48A90E* __this, ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* ___0_error, const RuntimeMethod* method) 
{
	{
		ErrorInfo_t1F0FA80E3A66CF249C31526FD9902061AD5CC620* L_0 = ___0_error;
		__this->___data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkConfig_get_AllowRenegotiation_m19C17F8A7D7AC17DF1D412C1A420C18B0A176837_inline (NetworkConfig_tDE09348A384F9FCF79DC5CE5BB4DFEECF9AB0766* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mAllowRenegotiation_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CallEventHandler_Invoke_m8035B1A16326D15017A8EEE4583C2CBBA6BA96AD_inline (CallEventHandler_t10B6E9A9F0D6ACBCF8346292698855A8CEF09F05* __this, RuntimeObject* ___0_sender, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147* ___1_args, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CallEventArgs_t49C803B3FF207550D5DF2AB3E86E29430CB2F147*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_args, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 Enumerator_get_Current_m6AAAC1044E6E468A9E24BC691CB1659A2FF13EF3_gshared_inline (Enumerator_t6529D83CD8340A90F8C5BE2206FD5451DDF525B6* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC9F1DD8355D11A82721C645AD2042D383CD3B457_gshared_inline (Queue_1_t2801ECD69DA7F8E0F0E2EEF00902A8A64979273C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77 Enumerator_get_Current_mD35B15B10BACB9E14C27DF7098ECC286B440C8C2_gshared_inline (Enumerator_t29356869AD666753565852C5270676CB9ACD677F* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77 L_0 = (KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB21761616024C09A7A89870EA58C9E1FF90731B4_gshared_inline (KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 KeyValuePair_2_get_Key_mBF956937A226AD351129828F9AA44BB78D1DF199_gshared_inline (KeyValuePair_2_tB9592CC1CE4B448EBBCFB3900DEB4153D0D82A77* __this, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_0 = (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB0DE7C2F4EBD8B962815E7ABE9BE165A0D3652D1_gshared_inline (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 ___0_item, const RuntimeMethod* method) 
{
	ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B* L_1 = (ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ConnectionIdU5BU5D_t7C0A365FAB0906A5E08A13D4C5B542EC26509F8B* L_6 = V_0;
		int32_t L_7 = V_1;
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7)L_8);
		return;
	}

IL_0034:
	{
		ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7 L_9 = ___0_item;
		((  void (*) (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34*, ConnectionId_tEC0FFB08249CB4253D31AF1E9166778F5D22E2F7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m704BFAE4AA9897E6A4E80BB01DDA57B46F4B5084_gshared_inline (List_1_t8648F03E32A0E6434B85C75C9673EA176516EE34* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
