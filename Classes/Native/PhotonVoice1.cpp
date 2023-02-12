﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>
struct Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84;
// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_tC5EFC8C0218B7680694715DA3F5E01A6F20D84A5;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice>
struct Dictionary_2_t9BCB1EF5FB3243318BCCD0B9F1205D8982078DB6;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t4D6C72EB38C86FF1A6F195CBF4C5F9490574834A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>>
struct Dictionary_2_t773C42CA748B22AFB473FAB0E78E4607520F48A6;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tB055A6ACC068A4C7F8EFC1044FC41318895C11DC;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_tA8D0BF61C8C68AE9A7CB48A34477EE922C3DE819;
// Photon.Voice.FrameOut`1<System.Single>
struct FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_t2248AB183633142E9ECB9AF3887CD0BCFBC53E49;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t16E279F64AC5E7960C414BC32A949C3201DE3D3F;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker>
struct Func_4_tCC95EDC741F27CCB8CCC44CC313E8B6B3FBD6862;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t52874464F649CB4D8674B0F14144AADE14995DF9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// Photon.Voice.IProcessor`1<System.Int16>
struct IProcessor_1_t9E25A5CBAF42FE4328808498ECE97ABEEC0CC6DB;
// Photon.Voice.IProcessor`1<System.Single>
struct IProcessor_1_tCB4128DC1C5B51763C8E4D686A2C9240E8B6A5DD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t559A7216FC269315AE65ED3047BB7C8EF6F6D6BE;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Single>
struct LevelMeter_1_t7E2F5A99073FF94E3A16E448C1ADB40C2E7D30BD;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_t56C399170B8C69EBC036B77887F390023096B41E;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Single>>
struct List_1_t5D8363CA3072E22D576E4A89AE3FBA73294733CB;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_t823310AB4F398AE467887CC898545B689B70003F;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685;
// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_t47635E10016E83A1E327B583977D1F043544FB48;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t14EF0606E13D5B3F00CC8BB3D1A884D4EBC902F1;
// System.Collections.Generic.Queue`1<System.Single[]>
struct Queue_1_t9F32AD4F084E1C073F589733BD477395C0E3BDF2;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_t4C76F5F954EC4E034F19CE3D593BD670BE50D18E;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_t41D99B779BA06DABD1A4F1FF8FEF4E57AB4D3A51;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t7BDAD9540189437AC15AA78B81E91DBEE49FBC1E;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t30CE0AE84EA0D6D904546C4C28DEA3561850FB6B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// Photon.Voice.IProcessor`1<System.Int16>[]
struct IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF;
// Photon.Voice.IProcessor`1<System.Single>[]
struct IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Photon.Voice.Unity.VoiceConnection[]
struct VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Photon.Voice.AudioInChangeNotifier
struct AudioInChangeNotifier_t962891A8554DC43496D02B0E651A7951AE6902F8;
// Photon.Voice.AudioInEnumerator
struct AudioInEnumerator_t55551D2C18E1AFBD0015570ECDDDCCA42D8CF67B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Voice.Unity.UtilityScripts.ConnectAndJoin
struct ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t3DEEF61ECB638E82CFBFC6F26D590E2ECD3F99C2;
// Photon.Voice.IEncoder
struct IEncoder_t4EBB18A3C5DE954C3B6FD1BA0B88EB415C28CABE;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tACE5277867F34445F8CAB737A6C60770A74FE635;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// Photon.Voice.IServiceable
struct IServiceable_t717325017517B6117BB2D4085FD3DBB06F6B56CA;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t62EB15B7BDBC1428F5BFAF50DA2086B74E2ACBDF;
// Photon.Voice.IVoiceTransport
struct IVoiceTransport_t8AB8CE7B17DD68C5ED96760062FC9FF152FCEB4C;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Photon.Voice.Unity.UtilityScripts.MicAmplifier
struct MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6;
// Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat
struct MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC;
// Photon.Voice.Unity.UtilityScripts.MicAmplifierShort
struct MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700;
// Photon.Voice.Unity.PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A;
// Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui
struct PhotonVoiceLagSimulationGui_t3AE439FA23B88A1EF6922190079B88F6EBB4F176;
// Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui
struct PhotonVoiceStatsGui_t962969BCDF9F121E9BB3D9EDC106CE074DE66D6C;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile
struct SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C;
// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile
struct SaveOutgoingStreamToFile_t3F6C2F111CA7DB1E2904923ADF8943D2FF327FA2;
// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD;
// Photon.Voice.Unity.UtilityScripts.TestTone
struct TestTone_t1D1F9761E194FB02D854D898340F9E3A84A3A61A;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// Photon.Voice.Unity.UtilityScripts.ToneAudioReader
struct ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E;
// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CSCore.WaveFormat
struct WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146;
// CSCore.Codecs.WAV.WaveWriter
struct WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550;
// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F;
// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat
struct OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72;
// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort
struct OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A;
// Photon.Voice.Unity.UtilityScripts.TestTone/<>c
struct U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC;
// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_t81A54103825934710986FC301ADF0FF4030AAA50;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral077174D238DA7DFDB454D547A055E7072B64BB8D;
IL2CPP_EXTERN_C String_t* _stringLiteral0C7C852816C687A128109719584EBFBC73E6849A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D8E0C4E7C6774193F51AC5E0BA8EB39587302CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1357DF6C7B3FCA812CB05B7B2AC92681A4D64610;
IL2CPP_EXTERN_C String_t* _stringLiteral1ABBA4A319AE2113068B5F1585697EEEBD4D6E68;
IL2CPP_EXTERN_C String_t* _stringLiteral2041DD87E40FF4B23D9550910DB36F409AD904D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2952CF50A344E8A488E00B728C4ACC0F69A2F5C3;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1872D205CF882A37CF7D315E8512E72B5E698F;
IL2CPP_EXTERN_C String_t* _stringLiteral2E967EC47C0181B3A2E25F28AF8F0061B4E2A296;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3A60FB7BA6A81ED481C7195C4CF91C4F128A3F;
IL2CPP_EXTERN_C String_t* _stringLiteral353F030C7133A5FA9805808B0E231960C4B7DA87;
IL2CPP_EXTERN_C String_t* _stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403;
IL2CPP_EXTERN_C String_t* _stringLiteral42385DE7EB765824B03D4240F5A98528E6D3B981;
IL2CPP_EXTERN_C String_t* _stringLiteral4C550D612379916935E4282D434E4EA23536FCB6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1222295B8DFE9719DE9D0B801BBBA75A5B561B;
IL2CPP_EXTERN_C String_t* _stringLiteral4DB64990F3C0419D770F2F59CBA7371DAAB819BE;
IL2CPP_EXTERN_C String_t* _stringLiteral5628B5550431B73AD2BA7443FC874900634E9469;
IL2CPP_EXTERN_C String_t* _stringLiteral59C4043917979C43B9A8A14EA8624587B909FD6B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral7043549454391529898AE7C2DCFB5D44B85F92D9;
IL2CPP_EXTERN_C String_t* _stringLiteral793A42BFC478A0C4DC544E915AF20BE5648D6F65;
IL2CPP_EXTERN_C String_t* _stringLiteral79E4269E60EB210270327E4E447DBFFC931523EA;
IL2CPP_EXTERN_C String_t* _stringLiteral8A26D6A025C8B10486A984A773215AB5F9F279C5;
IL2CPP_EXTERN_C String_t* _stringLiteral8E64342724123AE2D7BA294CBE7BE933FC3BDF9D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C02661DAFA7B24ABEB593BBF9187996810EC0B;
IL2CPP_EXTERN_C String_t* _stringLiteralA65FFD9D9EC7098F16777565B3FCE05AEBFCDC98;
IL2CPP_EXTERN_C String_t* _stringLiteralA7214EDF0F370FC5EBF669847A3589BA398359C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralBA04E9B69AE9502D4E2755F60981654299EA47B1;
IL2CPP_EXTERN_C String_t* _stringLiteralBB654DC6E6829721C44D5C02AF79359CB2E53232;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA1A0970ACC8C06E20112A27698F60D168A7C87;
IL2CPP_EXTERN_C String_t* _stringLiteralC557E8F87EB7C65D61EF3453FEF626974D8CA6C7;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FC41E9B4FAAD27B7915DF2DBA6F28693E8AE39;
IL2CPP_EXTERN_C String_t* _stringLiteralCA70439C0E7D26C76C0387691E4AE08678E59627;
IL2CPP_EXTERN_C String_t* _stringLiteralCEBB379CCA002A83D4BAA94B2D48213D86137B24;
IL2CPP_EXTERN_C String_t* _stringLiteralCF2B9E7C63E89FAEAFE528147912E448BC15ED61;
IL2CPP_EXTERN_C String_t* _stringLiteralD45038D06BB21D0A854D09005D5553FAB9DDBAD7;
IL2CPP_EXTERN_C String_t* _stringLiteralD680EC91D800A9E1C79A33D5BDB7C6BCEB920660;
IL2CPP_EXTERN_C String_t* _stringLiteralED7B79A29325375F1A6BF0C543C962FF04B43306;
IL2CPP_EXTERN_C String_t* _stringLiteralF25B0EFD4F71C4AA56E17A226EB10B7F1013878C;
IL2CPP_EXTERN_C String_t* _stringLiteralF480C8583CFD3A1E38212FC22D0F3D628B8BE269;
IL2CPP_EXTERN_C String_t* _stringLiteralF65D9DD240F808922B86DFC7F8C7014C0734E12F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_m52FE4B19F5F307C25E81620054696B8C67F77510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mB4C50BC933D594F749D7A62BFF9EA6E8362D54EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_AddPostProcessor_mA107426BC5100CB1EAD5AD61A7CDD6932A580DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_AddPostProcessor_mBA7A7E3F2CCA1B9C2C71BB4C64A0C3ACEFF35FDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_AddPreProcessor_m961793A8EF1CF5A31EFD070C3D1008F3C9E5F1A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_AddPreProcessor_mFA197377A98F6CBA3FD1F22CE9C4CD995303A5E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonVoiceLagSimulationGui_NetSimHasNoPeerWindow_mBC4372FC5EB0B7F488D1D7D7E8570CCD05691441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonVoiceLagSimulationGui_NetSimWindow_mE15BFDA974278A2F5E3FB785B5151087A2B95C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonVoiceStatsGui_TrafficStatsWindow_m2C30EE406DDF776AC9E5F3299C1E2A07DD4A7B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveIncomingStreamToFile_OnRemoteVoiceAdded_m0ED7856BAFC5671876C3837F9A0570D8C8AE7A0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveIncomingStreamToFile_OnSpeakerLinked_m441F4227F7F6CB31C0C5DA87B1EC134BA05B1AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_m577C6752940D6CFACDF5FB47E784E754A67B5B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__0_m3265BAEC06460A39E134CEDAF92D4AD8DC4232D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__1_m88401E3EF635535CE178EFFAE5FAC1F98062DE3E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF;
struct IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// Photon.Voice.FrameOut`1<System.Single>
struct FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D  : public RuntimeObject
{
	// T[] Photon.Voice.FrameOut`1::<Buf>k__BackingField
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CBufU3Ek__BackingField_0;
	// System.Boolean Photon.Voice.FrameOut`1::<EndOfStream>k__BackingField
	bool ___U3CEndOfStreamU3Ek__BackingField_1;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7  : public RuntimeObject
{
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_1;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_2;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_3;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_4;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_5;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_6;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_7;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_8;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_9;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_10;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_11;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_12;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_13;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_14;
};

// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9  : public RuntimeObject
{
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_6;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat
struct MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC  : public RuntimeObject
{
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<AmplificationFactor>k__BackingField
	float ___U3CAmplificationFactorU3Ek__BackingField_0;
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<BoostValue>k__BackingField
	float ___U3CBoostValueU3Ek__BackingField_1;
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<MaxBefore>k__BackingField
	float ___U3CMaxBeforeU3Ek__BackingField_2;
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<MaxAfter>k__BackingField
	float ___U3CMaxAfterU3Ek__BackingField_3;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<Disabled>k__BackingField
	bool ___U3CDisabledU3Ek__BackingField_4;
};

// Photon.Voice.Unity.UtilityScripts.MicAmplifierShort
struct MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE  : public RuntimeObject
{
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<AmplificationFactor>k__BackingField
	int16_t ___U3CAmplificationFactorU3Ek__BackingField_0;
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<BoostValue>k__BackingField
	int16_t ___U3CBoostValueU3Ek__BackingField_1;
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<MaxBefore>k__BackingField
	int16_t ___U3CMaxBeforeU3Ek__BackingField_2;
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<MaxAfter>k__BackingField
	int16_t ___U3CMaxAfterU3Ek__BackingField_3;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<Disabled>k__BackingField
	bool ___U3CDisabledU3Ek__BackingField_4;
};

// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49  : public RuntimeObject
{
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled_0;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag_1;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter_2;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage_3;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag_4;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter_5;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage_6;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_7;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___netSimThread_8;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___NetSimManualResetEvent_9;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField_11;
};

// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA  : public RuntimeObject
{
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ExpectedCustomRoomProperties_0;
	// System.Byte Photon.Realtime.OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// Photon.Realtime.MatchmakingMode Photon.Realtime.OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// Photon.Realtime.TypedLobby Photon.Realtime.OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___TypedLobby_3;
	// System.String Photon.Realtime.OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] Photon.Realtime.OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_5;
};

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ___SocketImplementationConfig_18;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t* ___U3CSocketImplementationU3Ek__BackingField_19;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_20;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_21;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD* ___OnDisconnectMessage_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_26;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_27;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_28;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_29;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_30;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_32;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_33;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_36;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_39;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_42;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RandomizedSequenceNumbers_43;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_44;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsIncomingU3Ek__BackingField_45;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsOutgoingU3Ek__BackingField_46;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* ___U3CTrafficStatsGameLevelU3Ek__BackingField_47;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___trafficStatsStopwatch_48;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_49;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_50;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject* ___SendOutgoingLockObject_51;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject* ___DispatchLockObject_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject* ___EnqueueLock_53;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PayloadEncryptionSecret_54;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t* ___encryptorType_55;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_56;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_57;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_58;
};

// Photon.Voice.Unity.PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A  : public RuntimeObject
{
	// Photon.Voice.LocalVoice Photon.Voice.Unity.PhotonVoiceCreatedParams::<Voice>k__BackingField
	LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* ___U3CVoiceU3Ek__BackingField_0;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.PhotonVoiceCreatedParams::<AudioDesc>k__BackingField
	RuntimeObject* ___U3CAudioDescU3Ek__BackingField_1;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;
};

// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Photon.Voice.Unity.UtilityScripts.ToneAudioReader
struct ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE  : public RuntimeObject
{
	// System.Double Photon.Voice.Unity.UtilityScripts.ToneAudioReader::k
	double ___k_0;
	// System.Int64 Photon.Voice.Unity.UtilityScripts.ToneAudioReader::timeSamples
	int64_t ___timeSamples_1;
};

// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;
};

// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestMessageCallback>k__BackingField
	int32_t ___U3CLongestMessageCallbackU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestRawMessageCallback>k__BackingField
	int32_t ___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;
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

// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E  : public RuntimeObject
{
	// Photon.Voice.IVoiceTransport Photon.Voice.VoiceClient::transport
	RuntimeObject* ___transport_0;
	// System.Int32 Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_4;
	// System.Boolean Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_5;
	// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_t81A54103825934710986FC301ADF0FF4030AAA50* ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_8;
	// System.Byte Photon.Voice.VoiceClient::globalInterestGroup
	uint8_t ___globalInterestGroup_9;
	// System.Byte Photon.Voice.VoiceClient::voiceIdCnt
	uint8_t ___voiceIdCnt_10;
	// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice> Photon.Voice.VoiceClient::localVoices
	Dictionary_2_t9BCB1EF5FB3243318BCCD0B9F1205D8982078DB6* ___localVoices_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>> Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t773C42CA748B22AFB473FAB0E78E4607520F48A6* ___localVoicesPerChannel_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t4D6C72EB38C86FF1A6F195CBF4C5F9490574834A* ___remoteVoices_13;
	// System.Random Photon.Voice.VoiceClient::rnd
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd_14;
};

// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7  : public RuntimeObject
{
	// System.String Photon.Voice.Unity.VoiceLogger::<Tag>k__BackingField
	String_t* ___U3CTagU3Ek__BackingField_0;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::<LogLevel>k__BackingField
	uint8_t ___U3CLogLevelU3Ek__BackingField_1;
	// UnityEngine.Object Photon.Voice.Unity.VoiceLogger::context
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context_2;
};

// CSCore.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146  : public RuntimeObject
{
	// CSCore.AudioEncoding CSCore.WaveFormat::_encoding
	int16_t ____encoding_0;
	// System.Int16 CSCore.WaveFormat::_channels
	int16_t ____channels_1;
	// System.Int32 CSCore.WaveFormat::_sampleRate
	int32_t ____sampleRate_2;
	// System.Int32 CSCore.WaveFormat::_bytesPerSecond
	int32_t ____bytesPerSecond_3;
	// System.Int16 CSCore.WaveFormat::_blockAlign
	int16_t ____blockAlign_4;
	// System.Int16 CSCore.WaveFormat::_bitsPerSample
	int16_t ____bitsPerSample_5;
	// System.Int16 CSCore.WaveFormat::_extraSize
	int16_t ____extraSize_6;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of CSCore.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146_marshaled_pinvoke
{
	int16_t ____encoding_0;
	int16_t ____channels_1;
	int32_t ____sampleRate_2;
	int32_t ____bytesPerSecond_3;
	int16_t ____blockAlign_4;
	int16_t ____bitsPerSample_5;
	int16_t ____extraSize_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of CSCore.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146_marshaled_com
{
	int16_t ____encoding_0;
	int16_t ____channels_1;
	int32_t ____sampleRate_2;
	int32_t ____bytesPerSecond_3;
	int16_t ____blockAlign_4;
	int16_t ____bitsPerSample_5;
	int16_t ____extraSize_6;
};
#pragma pack(pop, tp)

// CSCore.Codecs.WAV.WaveWriter
struct WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC  : public RuntimeObject
{
	// CSCore.WaveFormat CSCore.Codecs.WAV.WaveWriter::_waveFormat
	WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146* ____waveFormat_0;
	// System.Int64 CSCore.Codecs.WAV.WaveWriter::_waveStartPosition
	int64_t ____waveStartPosition_1;
	// System.Int32 CSCore.Codecs.WAV.WaveWriter::_dataLength
	int32_t ____dataLength_2;
	// System.Boolean CSCore.Codecs.WAV.WaveWriter::_isDisposed
	bool ____isDisposed_3;
	// System.IO.Stream CSCore.Codecs.WAV.WaveWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.IO.BinaryWriter CSCore.Codecs.WAV.WaveWriter::_writer
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ____writer_5;
	// System.Boolean CSCore.Codecs.WAV.WaveWriter::_isDisposing
	bool ____isDisposing_6;
	// System.Boolean CSCore.Codecs.WAV.WaveWriter::_closeStream
	bool ____closeStream_7;
};

// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F  : public RuntimeObject
{
	// CSCore.Codecs.WAV.WaveWriter Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::waveWriter
	WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___waveWriter_0;
	// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::<>4__this
	SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* ___U3CU3E4__this_1;
};

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat
struct OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72  : public RuntimeObject
{
	// CSCore.Codecs.WAV.WaveWriter Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::wavWriter
	WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___wavWriter_0;
};

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort
struct OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A  : public RuntimeObject
{
	// CSCore.Codecs.WAV.WaveWriter Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::wavWriter
	WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___wavWriter_0;
};

// Photon.Voice.Unity.UtilityScripts.TestTone/<>c
struct U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC  : public RuntimeObject
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F  : public PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C
{
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t47635E10016E83A1E327B583977D1F043544FB48* ___paramDictionaryPool_59;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

// Photon.Voice.Unity.PlaybackDelaySettings
struct PlaybackDelaySettings_t41031ECEB95A14B4249C4967ACE28EE8CA9EF53B 
{
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MinDelaySoft
	int32_t ___MinDelaySoft_3;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelaySoft
	int32_t ___MaxDelaySoft_4;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelayHard
	int32_t ___MaxDelayHard_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 
{
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<FPS>k__BackingField
	int32_t ___U3CFPSU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceInfo::<KeyFrameInt>k__BackingField
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
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

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_3;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_6;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_12;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_15;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_16;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_17;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_18;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_19;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_20;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_21;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_22;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_23;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_24;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_25;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_26;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_27;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_28;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_29;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_30;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_31;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_32;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_36;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_37;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_38;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_39;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_41;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_43;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_44;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_45;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_46;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_47;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_48;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_49;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_50;
};

// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5  : public RuntimeObject
{
	// System.Byte Photon.Voice.LocalVoice::<InterestGroup>k__BackingField
	uint8_t ___U3CInterestGroupU3Ek__BackingField_1;
	// System.Boolean Photon.Voice.LocalVoice::transmitEnabled
	bool ___transmitEnabled_2;
	// System.Boolean Photon.Voice.LocalVoice::<IsCurrentlyTransmitting>k__BackingField
	bool ___U3CIsCurrentlyTransmittingU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.LocalVoice::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_6;
	// System.Boolean Photon.Voice.LocalVoice::<Encrypt>k__BackingField
	bool ___U3CEncryptU3Ek__BackingField_7;
	// Photon.Voice.IServiceable Photon.Voice.LocalVoice::<LocalUserServiceable>k__BackingField
	RuntimeObject* ___U3CLocalUserServiceableU3Ek__BackingField_8;
	// System.Boolean Photon.Voice.LocalVoice::debugEchoMode
	bool ___debugEchoMode_9;
	// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::info
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___info_10;
	// Photon.Voice.IEncoder Photon.Voice.LocalVoice::encoder
	RuntimeObject* ___encoder_11;
	// System.Byte Photon.Voice.LocalVoice::id
	uint8_t ___id_12;
	// System.Int32 Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_13;
	// System.Byte Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_14;
	// Photon.Voice.VoiceClient Photon.Voice.LocalVoice::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_15;
	// System.ArraySegment`1<System.Byte> Photon.Voice.LocalVoice::configFrame
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___configFrame_16;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.LocalVoice::disposed
	bool ___disposed_17;
	// System.Object Photon.Voice.LocalVoice::disposeLock
	RuntimeObject* ___disposeLock_18;
	// System.Int32 Photon.Voice.LocalVoice::noTransmitCnt
	int32_t ___noTransmitCnt_19;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_tC5EFC8C0218B7680694715DA3F5E01A6F20D84A5* ___eventTimestamps_20;
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

// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4  : public RuntimeObject
{
	// Photon.Voice.VoiceInfo Photon.Voice.Unity.RemoteVoiceLink::<Info>k__BackingField
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<VoiceId>k__BackingField
	int32_t ___U3CVoiceIdU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_3;
	// System.Action`1<Photon.Voice.FrameOut`1<System.Single>> Photon.Voice.Unity.RemoteVoiceLink::FloatFrameDecoded
	Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84* ___FloatFrameDecoded_4;
	// System.Action Photon.Voice.Unity.RemoteVoiceLink::RemoteVoiceRemoved
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RemoteVoiceRemoved_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80  : public LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4
{
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_52;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700* ___protocol_53;
	// System.Object Photon.Voice.LoadBalancingTransport::sendLock
	RuntimeObject* ___sendLock_54;
};

// Photon.Voice.LocalVoiceFramedBase
struct LocalVoiceFramedBase_tC699DAAA29C0169332C1044A51E5F3DC3FC934CD  : public LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5
{
	// System.Int32 Photon.Voice.LocalVoiceFramedBase::<FrameSize>k__BackingField
	int32_t ___U3CFrameSizeU3Ek__BackingField_21;
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

// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>
struct Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84  : public MulticastDelegate_t
{
};

// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3  : public MulticastDelegate_t
{
};

// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229  : public MulticastDelegate_t
{
};

// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68  : public MulticastDelegate_t
{
};

// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685  : public LocalVoiceFramedBase_tC699DAAA29C0169332C1044A51E5F3DC3FC934CD
{
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t2248AB183633142E9ECB9AF3887CD0BCFBC53E49* ___framer_22;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_23;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t56C399170B8C69EBC036B77887F390023096B41E* ___processors_24;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_25;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t14EF0606E13D5B3F00CC8BB3D1A884D4EBC902F1* ___pushDataQueue_26;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___pushDataQueueReady_27;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tB055A6ACC068A4C7F8EFC1044FC41318895C11DC* ___bufferFactory_28;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_30;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_31;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_32;
};

// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903  : public LocalVoiceFramedBase_tC699DAAA29C0169332C1044A51E5F3DC3FC934CD
{
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t16E279F64AC5E7960C414BC32A949C3201DE3D3F* ___framer_22;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_23;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t5D8363CA3072E22D576E4A89AE3FBA73294733CB* ___processors_24;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_25;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t9F32AD4F084E1C073F589733BD477395C0E3BDF2* ___pushDataQueue_26;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___pushDataQueueReady_27;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tA8D0BF61C8C68AE9A7CB48A34477EE922C3DE819* ___bufferFactory_28;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_30;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_31;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_32;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550  : public MulticastDelegate_t
{
};

// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E  : public LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685
{
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t7BDAD9540189437AC15AA78B81E91DBEE49FBC1E* ___voiceDetector_33;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_t4C76F5F954EC4E034F19CE3D593BD670BE50D18E* ___voiceDetectorCalibration_34;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t559A7216FC269315AE65ED3047BB7C8EF6F6D6BE* ___levelMeter_35;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_36;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_37;
};

// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14  : public LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903
{
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t30CE0AE84EA0D6D904546C4C28DEA3561850FB6B* ___voiceDetector_33;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_t41D99B779BA06DABD1A4F1FF8FEF4E57AB4D3A51* ___voiceDetectorCalibration_34;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t7E2F5A99073FF94E3A16E448C1ADB40C2E7D30BD* ___levelMeter_35;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_36;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_37;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Photon.Voice.Unity.UtilityScripts.ConnectAndJoin
struct ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_4;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::RandomRoom
	bool ___RandomRoom_5;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::autoConnect
	bool ___autoConnect_6;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::autoTransmit
	bool ___autoTransmit_7;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::publishUserId
	bool ___publishUserId_8;
	// System.String Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::RoomName
	String_t* ___RoomName_9;
	// Photon.Realtime.EnterRoomParams Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::enterRoomParams
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParams_10;
};

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CClientU3Ek__BackingField_4;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_5;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::startedAckingTimestamp
	int32_t ___startedAckingTimestamp_7;
	// System.Int32 Photon.Realtime.ConnectionHandler::deltaSinceStartedToAck
	int32_t ___deltaSinceStartedToAck_8;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_9;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_11;
};

// Photon.Voice.LocalVoiceAudioFloat
struct LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9  : public LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14
{
};

// Photon.Voice.LocalVoiceAudioShort
struct LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8  : public LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E
{
};

// Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui
struct PhotonVoiceLagSimulationGui_t3AE439FA23B88A1EF6922190079B88F6EBB4F176  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_4;
	// UnityEngine.Rect Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::windowRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___windowRect_5;
	// System.Int32 Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::windowId
	int32_t ___windowId_6;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::visible
	bool ___visible_7;
	// ExitGames.Client.Photon.PhotonPeer Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::peer
	PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___peer_8;
	// System.Single Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::debugLostPercent
	float ___debugLostPercent_9;
};

// Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui
struct PhotonVoiceStatsGui_t962969BCDF9F121E9BB3D9EDC106CE074DE66D6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::statsWindowOn
	bool ___statsWindowOn_4;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::statsOn
	bool ___statsOn_5;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::healthStatsVisible
	bool ___healthStatsVisible_6;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::trafficStatsOn
	bool ___trafficStatsOn_7;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::buttonsOn
	bool ___buttonsOn_8;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::voiceStatsOn
	bool ___voiceStatsOn_9;
	// UnityEngine.Rect Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::statsRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___statsRect_10;
	// System.Int32 Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::windowId
	int32_t ___windowId_11;
	// ExitGames.Client.Photon.PhotonPeer Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::peer
	PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___peer_12;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_13;
	// Photon.Voice.VoiceClient Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_14;
};

// Photon.Voice.Unity.UtilityScripts.TestTone
struct TestTone_t1D1F9761E194FB02D854D898340F9E3A84A3A61A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::logger
	VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* ___logger_4;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceComponent::logLevel
	uint8_t ___logLevel_5;
	// System.Boolean Photon.Voice.Unity.VoiceComponent::ignoreGlobalLogLevel
	bool ___ignoreGlobalLogLevel_6;
};

// Photon.Voice.Unity.UtilityScripts.MicAmplifier
struct MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifier::boostValue
	float ___boostValue_7;
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifier::amplificationFactor
	float ___amplificationFactor_8;
	// Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat Photon.Voice.Unity.UtilityScripts.MicAmplifier::floatProcessor
	MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* ___floatProcessor_9;
	// Photon.Voice.Unity.UtilityScripts.MicAmplifierShort Photon.Voice.Unity.UtilityScripts.MicAmplifier::shortProcessor
	MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* ___shortProcessor_10;
};

// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_10;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_11;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_12;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject* ___userData_13;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* ___voice_14;
	// System.String Photon.Voice.Unity.Recorder::unityMicrophoneDevice
	String_t* ___unityMicrophoneDevice_15;
	// System.Int32 Photon.Voice.Unity.Recorder::photonMicrophoneDeviceId
	int32_t ___photonMicrophoneDeviceId_16;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_17;
	// Photon.Voice.VoiceClient Photon.Voice.Unity.Recorder::client
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___client_18;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_19;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_20;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_21;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_22;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_23;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_24;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_25;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_26;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_27;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_28;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_29;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_30;
	// System.Boolean Photon.Voice.Unity.Recorder::isRecording
	bool ___isRecording_31;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___inputFactory_32;
	// Photon.Voice.AudioInChangeNotifier Photon.Voice.Unity.Recorder::photonMicChangeNotifier
	AudioInChangeNotifier_t962891A8554DC43496D02B0E651A7951AE6902F8* ___photonMicChangeNotifier_34;
	// System.Boolean Photon.Voice.Unity.Recorder::reactOnSystemChanges
	bool ___reactOnSystemChanges_35;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesPhoton
	bool ___subscribedToSystemChangesPhoton_36;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesUnity
	bool ___subscribedToSystemChangesUnity_37;
	// System.Boolean Photon.Voice.Unity.Recorder::autoStart
	bool ___autoStart_38;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.Unity.Recorder::audioSessionParameters
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___audioSessionParameters_39;
	// System.Boolean Photon.Voice.Unity.Recorder::useCustomAudioSessionParameters
	bool ___useCustomAudioSessionParameters_40;
	// System.Int32 Photon.Voice.Unity.Recorder::audioSessionPresetIndex
	int32_t ___audioSessionPresetIndex_41;
	// System.Boolean Photon.Voice.Unity.Recorder::recordOnlyWhenEnabled
	bool ___recordOnlyWhenEnabled_42;
	// System.Boolean Photon.Voice.Unity.Recorder::skipDeviceChangeChecks
	bool ___skipDeviceChangeChecks_43;
	// System.Boolean Photon.Voice.Unity.Recorder::wasRecordingBeforePause
	bool ___wasRecordingBeforePause_44;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_45;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_46;
	// System.Boolean Photon.Voice.Unity.Recorder::trySamplingRateMatch
	bool ___trySamplingRateMatch_47;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_48;
	// System.Boolean Photon.Voice.Unity.Recorder::<RequiresRestart>k__BackingField
	bool ___U3CRequiresRestartU3Ek__BackingField_49;
	// Photon.Voice.Unity.Recorder/SampleTypeConv Photon.Voice.Unity.Recorder::<TypeConvert>k__BackingField
	int32_t ___U3CTypeConvertU3Ek__BackingField_50;
};

// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile
struct SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_7;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::muteLocalSpeaker
	bool ___muteLocalSpeaker_8;
};

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile
struct SaveOutgoingStreamToFile_t3F6C2F111CA7DB1E2904923ADF8943D2FF327FA2  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// CSCore.Codecs.WAV.WaveWriter Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile::wavWriter
	WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___wavWriter_7;
};

// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_7;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::remoteVoiceLink
	RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___remoteVoiceLink_8;
	// System.Boolean Photon.Voice.Unity.Speaker::initialized
	bool ___initialized_9;
	// System.Boolean Photon.Voice.Unity.Speaker::playbackOnlyWhenEnabled
	bool ___playbackOnlyWhenEnabled_10;
	// System.Boolean Photon.Voice.Unity.Speaker::useSeparateCoroutine
	bool ___useSeparateCoroutine_11;
	// UnityEngine.Coroutine Photon.Voice.Unity.Speaker::playbackCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___playbackCoroutine_12;
	// System.Int32 Photon.Voice.Unity.Speaker::playDelayMs
	int32_t ___playDelayMs_13;
	// Photon.Voice.Unity.PlaybackDelaySettings Photon.Voice.Unity.Speaker::playbackDelaySettings
	PlaybackDelaySettings_t41031ECEB95A14B4249C4967ACE28EE8CA9EF53B ___playbackDelaySettings_14;
	// System.Boolean Photon.Voice.Unity.Speaker::playbackExplicitlyStopped
	bool ___playbackExplicitlyStopped_15;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Voice.Unity.Speaker::<Actor>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CActorU3Ek__BackingField_17;
	// System.Boolean Photon.Voice.Unity.Speaker::<PlaybackStarted>k__BackingField
	bool ___U3CPlaybackStartedU3Ek__BackingField_18;
};

// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3  : public ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4
{
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::logger
	VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* ___logger_13;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::logLevel
	uint8_t ___logLevel_14;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* ___client_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::enableSupportLogger
	bool ___enableSupportLogger_17;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* ___supportLoggerComponent_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::updateInterval
	int32_t ___updateInterval_19;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextSendTickCount
	int32_t ___nextSendTickCount_20;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_21;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_22;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_23;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_24;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_25;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speakerPrefab_26;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::cleanedUp
	bool ___cleanedUp_27;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_t823310AB4F398AE467887CC898545B689B70003F* ___cachedRemoteVoices_28;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___primaryRecorder_29;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::primaryRecorderInitialized
	bool ___primaryRecorderInitialized_30;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalRecordersLogLevel
	uint8_t ___globalRecordersLogLevel_31;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalSpeakersLogLevel
	uint8_t ___globalSpeakersLogLevel_32;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::globalPlaybackDelay
	int32_t ___globalPlaybackDelay_33;
	// Photon.Voice.Unity.PlaybackDelaySettings Photon.Voice.Unity.VoiceConnection::globalPlaybackDelaySettings
	PlaybackDelaySettings_t41031ECEB95A14B4249C4967ACE28EE8CA9EF53B ___globalPlaybackDelaySettings_34;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950* ___linkedSpeakers_35;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___Settings_36;
	// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerFactory
	Func_4_tCC95EDC741F27CCB8CCC44CC313E8B6B3FBD6862* ___SpeakerFactory_37;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___SpeakerLinked_38;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* ___RemoteVoiceAdded_39;
	// System.Single Photon.Voice.Unity.VoiceConnection::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_40;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::AutoCreateSpeakerIfNotFound
	bool ___AutoCreateSpeakerIfNotFound_41;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_42;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_43;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_44;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// Photon.Voice.FrameOut`1<System.Single>

// Photon.Voice.FrameOut`1<System.Single>

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>

// Photon.Realtime.AppSettings

// Photon.Realtime.AppSettings

// Photon.Realtime.EnterRoomParams

// Photon.Realtime.EnterRoomParams

// UnityEngine.GUILayoutOption

// UnityEngine.GUILayoutOption

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat

// Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat

// Photon.Voice.Unity.UtilityScripts.MicAmplifierShort

// Photon.Voice.Unity.UtilityScripts.MicAmplifierShort

// ExitGames.Client.Photon.NetworkSimulationSet

// ExitGames.Client.Photon.NetworkSimulationSet

// Photon.Realtime.OpJoinRandomRoomParams

// Photon.Realtime.OpJoinRandomRoomParams

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_StaticFields
{
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_15;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_38;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_41;
};

// ExitGames.Client.Photon.PhotonPeer

// Photon.Voice.Unity.PhotonVoiceCreatedParams

// Photon.Voice.Unity.PhotonVoiceCreatedParams

// Photon.Realtime.Player

// Photon.Realtime.Player

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields
{
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t* ___PingImplementation_0;
};

// Photon.Realtime.RegionHandler

// Photon.Realtime.RoomOptions

// Photon.Realtime.RoomOptions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Photon.Voice.Unity.UtilityScripts.ToneAudioReader

// Photon.Voice.Unity.UtilityScripts.ToneAudioReader

// ExitGames.Client.Photon.TrafficStats

// ExitGames.Client.Photon.TrafficStats

// ExitGames.Client.Photon.TrafficStatsGameLevel

// ExitGames.Client.Photon.TrafficStatsGameLevel

// System.ValueType

// System.ValueType

// Photon.Voice.VoiceClient

// Photon.Voice.VoiceClient

// Photon.Voice.Unity.VoiceLogger

// Photon.Voice.Unity.VoiceLogger

// CSCore.WaveFormat

// CSCore.WaveFormat

// CSCore.Codecs.WAV.WaveWriter

// CSCore.Codecs.WAV.WaveWriter

// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0

// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort

// Photon.Voice.Unity.UtilityScripts.TestTone/<>c
struct U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_StaticFields
{
	// Photon.Voice.Unity.UtilityScripts.TestTone/<>c Photon.Voice.Unity.UtilityScripts.TestTone/<>c::<>9
	U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC* ___U3CU3E9_0;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.UtilityScripts.TestTone/<>c::<>9__0_0
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___U3CU3E9__0_0_1;
};

// Photon.Voice.Unity.UtilityScripts.TestTone/<>c

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>

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

// System.Byte

// System.Byte

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Photon.Realtime.LoadBalancingPeer

// Photon.Realtime.LoadBalancingPeer

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A_StaticFields
{
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___AlternativeUdpPorts_0;
};

// Photon.Realtime.PhotonPortDefinition

// Photon.Voice.Unity.PlaybackDelaySettings

// Photon.Voice.Unity.PlaybackDelaySettings

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// Photon.Voice.VoiceInfo

// Photon.Voice.VoiceInfo

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_10;
};

// Photon.Realtime.LoadBalancingClient

// Photon.Voice.LocalVoice

// Photon.Voice.LocalVoice

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Photon.Voice.Unity.RemoteVoiceLink

// Photon.Voice.Unity.RemoteVoiceLink

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Photon.Voice.LoadBalancingTransport

// Photon.Voice.LoadBalancingTransport

// Photon.Voice.LocalVoiceFramedBase

// Photon.Voice.LocalVoiceFramedBase

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

// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>

// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>

// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>

// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>

// System.Action`1<Photon.Voice.Unity.Speaker>

// System.Action`1<Photon.Voice.Unity.Speaker>

// System.Func`1<Photon.Voice.IAudioDesc>

// System.Func`1<Photon.Voice.IAudioDesc>

// Photon.Voice.LocalVoiceFramed`1<System.Int16>

// Photon.Voice.LocalVoiceFramed`1<System.Int16>

// Photon.Voice.LocalVoiceFramed`1<System.Single>

// Photon.Voice.LocalVoiceFramed`1<System.Single>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.GUI/WindowFunction

// UnityEngine.GUI/WindowFunction

// Photon.Voice.LocalVoiceAudio`1<System.Int16>

// Photon.Voice.LocalVoiceAudio`1<System.Int16>

// Photon.Voice.LocalVoiceAudio`1<System.Single>

// Photon.Voice.LocalVoiceAudio`1<System.Single>

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Photon.Voice.Unity.UtilityScripts.ConnectAndJoin

// Photon.Voice.Unity.UtilityScripts.ConnectAndJoin

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_StaticFields
{
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_12;
};

// Photon.Realtime.ConnectionHandler

// Photon.Voice.LocalVoiceAudioFloat

// Photon.Voice.LocalVoiceAudioFloat

// Photon.Voice.LocalVoiceAudioShort

// Photon.Voice.LocalVoiceAudioShort

// Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui

// Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui

// Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui

// Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui

// Photon.Voice.Unity.UtilityScripts.TestTone

// Photon.Voice.Unity.UtilityScripts.TestTone

// Photon.Voice.Unity.VoiceComponent

// Photon.Voice.Unity.VoiceComponent

// Photon.Voice.Unity.UtilityScripts.MicAmplifier

// Photon.Voice.Unity.UtilityScripts.MicAmplifier

// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_StaticFields
{
	// System.Array Photon.Voice.Unity.Recorder::samplingRateValues
	RuntimeArray* ___samplingRateValues_9;
	// Photon.Voice.AudioInEnumerator Photon.Voice.Unity.Recorder::photonMicrophoneEnumerator
	AudioInEnumerator_t55551D2C18E1AFBD0015570ECDDDCCA42D8CF67B* ___photonMicrophoneEnumerator_33;
};

// Photon.Voice.Unity.Recorder

// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile

// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile

// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.VoiceConnection

// Photon.Voice.Unity.VoiceConnection
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Photon.Voice.IProcessor`1<System.Single>[]
struct IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147  : public RuntimeArray
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
// Photon.Voice.IProcessor`1<System.Int16>[]
struct IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF  : public RuntimeArray
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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// Photon.Voice.Unity.VoiceConnection[]
struct VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D  : public RuntimeArray
{
	ALIGN_FIELD (8) VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* m_Items[1];

	inline VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::AddPostProcessor(Photon.Voice.IProcessor`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_AddPostProcessor_mA107426BC5100CB1EAD5AD61A7CDD6932A580DEF_gshared (LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903* __this, IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* ___0_processors, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPostProcessor(Photon.Voice.IProcessor`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_AddPostProcessor_mBA7A7E3F2CCA1B9C2C71BB4C64A0C3ACEFF35FDE_gshared (LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685* __this, IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* ___0_processors, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T[] Photon.Voice.FrameOut`1<System.Single>::get_Buf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_gshared_inline (FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::AddPreProcessor(Photon.Voice.IProcessor`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_AddPreProcessor_m961793A8EF1CF5A31EFD070C3D1008F3C9E5F1A8_gshared (LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903* __this, IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* ___0_processors, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPreProcessor(Photon.Voice.IProcessor`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_AddPreProcessor_mFA197377A98F6CBA3FD1F22CE9C4CD995303A5E8_gshared (LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685* __this, IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* ___0_processors, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_mD98F9FFFBEFD1932A0898268507DFBE9BEE41257 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Voice.Unity.VoiceConnection>()
inline VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::ConnectNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_ConnectNow_mCE7D697B57F5FB5BD5BEACEEAD9452ABC759CA83 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceConnection::ConnectUsingSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_ConnectUsingSettings_mB5F396B3A7E1295F034869667504B899AD0BD9EC (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___0_overwriteSettings, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::get_PrimaryRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Photon.Voice.Unity.Recorder>()
inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* GameObject_AddComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_m52FE4B19F5F307C25E81620054696B8C67F77510 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Photon.Voice.Unity.VoiceConnection::set_PrimaryRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_set_PrimaryRecorder_m829F73718D1C633BDB32647B938AC4A12B39C39A (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_TransmitEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_TransmitEnabled_mB6B4C554D91CC63D61DBAE8D0C9FA948CD1E1496 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::set_PublishUserId(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomOptions_set_PublishUserId_mCAF45915B1DDAEB11A590246792C64D5C27ADE82_inline (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.OpJoinRandomRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpJoinRandomRoomParams__ctor_mF7D788297A56B000A13BC70C68612B653363E78B (OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinRandomOrCreateRoom(Photon.Realtime.OpJoinRandomRoomParams,Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinRandomOrCreateRoom_m5A358A5A5DCC221ECB22CDFC7812936D0791CF7F (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA* ___0_opJoinRandomRoomParams, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___1_createRoomParams, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinOrCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinOrCreateRoom_m09D399AF025F96C6CD7E93EB2F4C2EE3600CE26F (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___0_enterRoomParams, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8 (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_AmplificationFactor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_AmplificationFactor_m6E6A78940B81BC9035FAAC9FF6FB8679D5CAE954_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_AmplificationFactor(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_AmplificationFactor_m198773BB3DCF934998643559EEF564824B705160_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_BoostValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_BoostValue_mF56A704AC35C793DD64AD2A70D9F1D49D71E1165_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_BoostValue(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_BoostValue_m27CCB1E511BE0882BF412870E26A7A6E00FEBC27_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_Disabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_Disabled_mD371D23851E63AF5A6C4BE6D5276219EE30989F5_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_Disabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_Disabled_m38CE61C359053B315F89566960FA1CEC0C421C95_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, bool ___0_value, const RuntimeMethod* method) ;
// Photon.Voice.LocalVoice Photon.Voice.Unity.PhotonVoiceCreatedParams::get_Voice()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline (PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifier::get_AmplificationFactor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifier_get_AmplificationFactor_m3520F32D0B31EA9076100684D52DC6DBB87862D7_inline (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifier::get_BoostValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifier_get_BoostValue_m9E022BEC8F6C0C87C3041A71E4537E98FA916106_inline (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat__ctor_mE35C956FD45B0A4B18D65A06EE76903FB64E38EA (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_amplificationFactor, float ___1_boostValue, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::AddPostProcessor(Photon.Voice.IProcessor`1<T>[])
inline void LocalVoiceFramed_1_AddPostProcessor_mA107426BC5100CB1EAD5AD61A7CDD6932A580DEF (LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903* __this, IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* ___0_processors, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903*, IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147*, const RuntimeMethod*))LocalVoiceFramed_1_AddPostProcessor_mA107426BC5100CB1EAD5AD61A7CDD6932A580DEF_gshared)(__this, ___0_processors, method);
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort__ctor_m641D94C72554F87059589362B76BA82B1F6D732C (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_amplificationFactor, int16_t ___1_boostValue, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPostProcessor(Photon.Voice.IProcessor`1<T>[])
inline void LocalVoiceFramed_1_AddPostProcessor_mBA7A7E3F2CCA1B9C2C71BB4C64A0C3ACEFF35FDE (LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685* __this, IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* ___0_processors, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685*, IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF*, const RuntimeMethod*))LocalVoiceFramed_1_AddPostProcessor_mBA7A7E3F2CCA1B9C2C71BB4C64A0C3ACEFF35FDE_gshared)(__this, ___0_processors, method);
}
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsErrorEnabled_m7633CDEECC69714F754C7B3B185B5EBD0503E0F4 (VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceLogger::LogError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogError_m86254F4CD9D565647033E8EDFF86533CA1A56B0C (VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* __this, String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_Disabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicAmplifierFloat_get_Disabled_mA72105C0998AD667B0A948B5606624ECBE77A62A_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_AmplificationFactor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_AmplificationFactor_mF6BF127490CC68103DC3E968949EFEEABD95C43E_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_BoostValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_BoostValue_mB7D0D60C191A4DD4CF28C4BE8D28F46D5DAA4272_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_MaxBefore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_MaxBefore_mE284EE666B88D421C15682861448C97289A43725_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_MaxBefore(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_MaxBefore_m45E63FB81F55D06647DFB2F19F8DADF3A40DBBFC_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_MaxAfter(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_MaxAfter_mE50BD4688A58A49999CBAF2E285450DE62D8AA82_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_Disabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicAmplifierShort_get_Disabled_m6AA14222D1376C14B421CF20DA4932BAE60E61CA_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) ;
// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_AmplificationFactor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_AmplificationFactor_m9C224D06C12F11B6E13F4B475D68C4016B731A0A_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) ;
// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_BoostValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_BoostValue_mC1C0E3A2C408CAE04473EF0FDA3EA4811E5E47E6_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) ;
// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_MaxBefore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_MaxBefore_m2AA4ED496BD7B840A23A42B1EC4ADC7DFF17DABE_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_MaxBefore(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_MaxBefore_mC8B01DDC8516728CAACD118BF4EE72F035F15E34_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_MaxAfter(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_MaxAfter_mB7CB7B8AD8866CD8874A6498C56B51EEC5AABED0_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<Photon.Voice.Unity.VoiceConnection>()
inline VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mEC3E8902D2EF0D6CDC7D2643D75DF8A7A6F84713 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_context, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Voice.VoiceClient Photon.Voice.Unity.VoiceConnection::get_VoiceClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* VoiceConnection_get_VoiceClient_m3FE44015ADFE8EFED2FAB64D5878D7962D0628B6 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceClient::get_DebugLostPercent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_DebugLostPercent_m372E20DEF459F85724F793CD11E43A7F635B4B72_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayout_Window_mF2F1C1620706F70E59FAAA4882967AB589FF9059 (int32_t ___0_id, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_screenRect, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___2_func, String_t* ___3_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___4_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTimeVariance_mEB905CCB7BECBD67C8B6BB183F9DF019332F0BCA (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7 (bool ___0_value, String_t* ___1_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___2_options, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::get_IncomingLag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkSimulationSet_get_IncomingLag_mE38F72A9950F07D93AFFB645F504272A0E93D8F0 (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41 (float ___0_value, float ___1_leftValue, float ___2_rightValue, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___3_options, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_IncomingLag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_IncomingLag_m25C5AD9C4B1FC2669360A47135B4E0E31531A1D6 (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_OutgoingLag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_OutgoingLag_m53C3F6F784D7A868A69E1AF5A387B04DAF43EA8A (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::get_IncomingJitter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkSimulationSet_get_IncomingJitter_m17E4A249796BCD139B343124A3045150DEB9FD7C (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_IncomingJitter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_IncomingJitter_mCB79E77D490287EEE0CD880E8091539B82409D9C (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_OutgoingJitter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_OutgoingJitter_mB127A220B2DE110E29AF3D4BDC08E393C671B5BC (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::get_IncomingLossPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkSimulationSet_get_IncomingLossPercentage_m4E99E7B27BCC46F2AE76C547EFF04E02F397432E (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_IncomingLossPercentage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_IncomingLossPercentage_mAD28C44A01E5A051D9B1B883C9BEB4E24327F11C (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_OutgoingLossPercentage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_OutgoingLossPercentage_m0EDB404867753C870405E0C1565E13B407063B29 (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.VoiceClient::set_DebugLostPercent(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceClient_set_DebugLostPercent_m661F08B4FCA903D03B772A2B954CE1CA8E77DC3A_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::get_changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DragWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DragWindow_m4DEBB036044B4C24727E8794716C6727C1E7DABB (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_get_TrafficStatsEnabled_mB7C4D26AAD36A731A4C89B1DE6144B480D9FF2C9 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, bool ___0_value, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* PhotonPeer_get_TrafficStatsGameLevel_m83D92F2C803367552F09AD55007BAD250309ED27_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PhotonPeer_get_TrafficStatsElapsedMs_mF57D01ADE9E6A2A552F57139CDF482723420589B (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___0_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0 (const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mBD769AE99A34702FEA80F6BC9D79542F0992DC4C (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalIncomingMessageCount_m13EB9EE2F58AE4A8884589ECB6C06D176B74A326 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalMessageCount_mA6B693C4265A9680FBD12F6259A3BB050B985CF2 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_TrafficStatsReset_m2A7C38F51A95521B3F4A707A24E92C06BAFC3AFD (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Box_m4CEFB7550F94CA85459CEACB810E9F99C7451456 (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsIncoming_mFBFFDE72C315515EF874F92B67D135BEEE3E67D9_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsOutgoing_mDD70068CDA34548046EF39295A045E978315AADE_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_ResentReliableCommands_mAEADAB3CEF280037F2208E8969C9E6626973FD87 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceClient::get_RoundTripTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_RoundTripTime_m6DD2EF8C9166757654EEA55527B926EA316A89FB_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceClient::get_RoundTripTimeVariance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_RoundTripTimeVariance_mC8EFB27305D471D6BFEDA798F1593423D71588DC_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceClient::get_FramesReceived()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_FramesReceived_m9AB529352DA8F1C9A7FBEB4FE109D0CAEE6C440A_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.VoiceConnection::get_FramesReceivedPerSecond()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VoiceConnection_get_FramesReceivedPerSecond_mECC359139BD873D38F094E8AFFE809E0680A87B8_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceClient::get_FramesLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_FramesLost_m98466CCB14660851F20F985C1074A16BD49CBFDA_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.VoiceConnection::get_FramesLostPerSecond()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VoiceConnection_get_FramesLostPerSecond_m33865CCF5C89832C20A8F87101080FD73621DB13_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Single Photon.Voice.Unity.VoiceConnection::get_FramesLostPercent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VoiceConnection_get_FramesLostPercent_m792583A111A2B9CEFDF6CCD5EB20CE60C7BB7197_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceClient::get_FramesSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceClient_get_FramesSent_m1BA3241254EDE469FDF70CB4B5A7D3483CF81B3E (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceClient::get_FramesSentBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceClient_get_FramesSentBytes_mAE278DF31CF670B1E58EB0261FE61F290FDC5150 (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_Awake_m6AC34084B90505F4064B4CDE0671C36B3538DFF0 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB3E258E7E69A94ABCD9F825A08390A0A0F894CBC (Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Voice.Unity.VoiceConnection::add_RemoteVoiceAdded(System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_add_RemoteVoiceAdded_mD443595196101F37DCA64BECD59E820CB96A687E (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Voice.Unity.Speaker>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m38EDB08C8F1E0C25255FB4492C6F311B1CD6B80B (Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Voice.Unity.VoiceConnection::add_SpeakerLinked(System.Action`1<Photon.Voice.Unity.Speaker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_add_SpeakerLinked_m77B3E5CCAF4E798E02C8C40E7178AF1740E01588 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___0_value, const RuntimeMethod* method) ;
// Photon.Realtime.Player Photon.Voice.Unity.Speaker::get_Actor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* Speaker_get_Actor_mAEC193A7C7DBD50082AAF9AEC7553B9774D66347_inline (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::remove_SpeakerLinked(System.Action`1<Photon.Voice.Unity.Speaker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_remove_SpeakerLinked_m92F1AE6FFC2A3DDDBDB209A8E9EBA526FC1302FE (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::remove_RemoteVoiceAdded(System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_remove_RemoteVoiceAdded_mFE42438A9C4E19E74A28C2AA6627F75A3AB6916A (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m674636F2008E053FC99AC725DA4BF6FA34A42389 (U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* __this, const RuntimeMethod* method) ;
// System.String Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::GetFilePath(Photon.Voice.Unity.RemoteVoiceLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveIncomingStreamToFile_GetFilePath_mA70252DBA0AAC7B473BC0358B5B9403CE7C19C5E (SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* __this, RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___0_remoteVoiceLink, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsInfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsInfoEnabled_mA9FF618D95ECF73C1798A3F415025CBCAB2985F0 (VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceLogger::LogInfo(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogInfo_m49C8ED854791186E44F9413034BBEC9FC656778C (VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* __this, String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// Photon.Voice.VoiceInfo Photon.Voice.Unity.RemoteVoiceLink::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 RemoteVoiceLink_get_Info_m6CC9ECE02C7B8FF1254B732EA00857A03F9B869A_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceInfo::get_SamplingRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8_inline (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.VoiceInfo::get_Channels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0_inline (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404* __this, const RuntimeMethod* method) ;
// System.Void CSCore.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m8F0288B4F0186E4530C431B50DFCCA036032E6D3 (WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146* __this, int32_t ___0_sampleRate, int32_t ___1_bits, int32_t ___2_channels, const RuntimeMethod* method) ;
// System.Void CSCore.Codecs.WAV.WaveWriter::.ctor(System.String,CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter__ctor_m3B4A2A15DB7965DCF426C3AB655C557C31C960FF (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, String_t* ___0_fileName, WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146* ___1_waveFormat, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Voice.FrameOut`1<System.Single>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mEC461CE983739CB41BB6A618F1882B8BC3E6CC8A (Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Voice.Unity.RemoteVoiceLink::add_FloatFrameDecoded(System.Action`1<Photon.Voice.FrameOut`1<System.Single>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceLink_add_FloatFrameDecoded_m19466075C1748E8B67D2A215B88788F04E8486C6 (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.RemoteVoiceLink::add_RemoteVoiceRemoved(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceLink_add_RemoteVoiceRemoved_m185E928062DD66D6F6749C93932D7D8EAFAF0C76 (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::get_ChannelId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_ChannelId_mE7140A7A9DA0FCDC81B9A53B45F5FB10971A718D_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::get_PlayerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_PlayerId_m931FD8F7C2A29025B7B00F13A9D2AAEC8AABE6F5_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::get_VoiceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_VoiceId_mA249081E4DC6B45043B3021BAD9B289A29F9DF95_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// T[] Photon.Voice.FrameOut`1<System.Single>::get_Buf()
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_inline (FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D*, const RuntimeMethod*))FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_gshared_inline)(__this, method);
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteSamples(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteSamples_m359C3DCDB8BDFB4DFCF53FDC9921D22F03F44312 (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Dispose_m1ED7AE773F5C7BE127E58FC1EB94F734F52E35B5 (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, const RuntimeMethod* method) ;
// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 LocalVoice_get_Info_mFCD2D5AC24454B0E5B0538EE171756EF90F2E938_inline (LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* __this, const RuntimeMethod* method) ;
// System.String Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile::GetFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveOutgoingStreamToFile_GetFilePath_mDB517C829E4480DEB80E0F5EC3F38AAF66D9B6EB (SaveOutgoingStreamToFile_t3F6C2F111CA7DB1E2904923ADF8943D2FF327FA2* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::.ctor(CSCore.Codecs.WAV.WaveWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverFloat__ctor_m90745B9DEFB9A7C4396AA4E63644713078570E55 (OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72* __this, WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___0_waveWriter, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::AddPreProcessor(Photon.Voice.IProcessor`1<T>[])
inline void LocalVoiceFramed_1_AddPreProcessor_m961793A8EF1CF5A31EFD070C3D1008F3C9E5F1A8 (LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903* __this, IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* ___0_processors, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903*, IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147*, const RuntimeMethod*))LocalVoiceFramed_1_AddPreProcessor_m961793A8EF1CF5A31EFD070C3D1008F3C9E5F1A8_gshared)(__this, ___0_processors, method);
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::.ctor(CSCore.Codecs.WAV.WaveWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverShort__ctor_m9EDE7A94D023B9E653E4C604315E59C85DFBA190 (OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A* __this, WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___0_waveWriter, const RuntimeMethod* method) ;
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPreProcessor(Photon.Voice.IProcessor`1<T>[])
inline void LocalVoiceFramed_1_AddPreProcessor_mFA197377A98F6CBA3FD1F22CE9C4CD995303A5E8 (LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685* __this, IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* ___0_processors, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685*, IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF*, const RuntimeMethod*))LocalVoiceFramed_1_AddPreProcessor_mFA197377A98F6CBA3FD1F22CE9C4CD995303A5E8_gshared)(__this, ___0_processors, method);
}
// System.Boolean CSCore.Codecs.WAV.WaveWriter::get_IsDisposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposed_m64165D0BB7EFC2C8BD35FC61D3073C25CFA5C8C5_inline (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, const RuntimeMethod* method) ;
// System.Boolean CSCore.Codecs.WAV.WaveWriter::get_IsDisposing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposing_mB0440545CD35198940020472DC6FCDD97D297620_inline (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, const RuntimeMethod* method) ;
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_mCB1ECA9A435809DF5623A8F324BFFA132996C7B2 (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Photon.Voice.Unity.Recorder>()
inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* GameObject_GetComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mB4C50BC933D594F749D7A62BFF9EA6E8362D54EF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Photon.Voice.Unity.Recorder::set_SourceType(Photon.Voice.Unity.Recorder/InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_SourceType_m2DBF84AF542E7662A4302A0D20399C7FC5E1E13D (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Func`1<Photon.Voice.IAudioDesc>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m642C03B0FFBFB11F37FBF10A30C92712FEB07017 (Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Voice.Unity.Recorder::set_InputFactory(System.Func`1<Photon.Voice.IAudioDesc>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_InputFactory_mD22EEE0D5522D5EE2977B86750E2911A2CFE5250 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m85FFABB32BE7E098A924EC2D0F049E5353CE2543 (U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.ToneAudioReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToneAudioReader__ctor_m9A2C23156D226E19443040D2CA9E07938BF53BAF (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.UtilityScripts.ToneAudioReader::get_SamplingRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToneAudioReader_get_SamplingRate_m51C930E459654E3215A15882B0B7CE51EF629836 (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.UtilityScripts.ToneAudioReader::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToneAudioReader_get_Channels_m3ABD06F11576788437D9A366DB0E3938F6B90711 (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.AudioSettings::get_dspTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectAndJoin_get_IsConnected_mEB1E0E556616D65534B4A37AF1DAAC821CF6964B (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsConnected { get { return this.voiceConnection.Client.IsConnected; } }
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = __this->___voiceConnection_4;
		NullCheck(L_0);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_1;
		L_1 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = LoadBalancingClient_get_IsConnected_mD98F9FFFBEFD1932A0898268507DFBE9BEE41257(L_1, NULL);
		return L_2;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_Awake_mDF2EB64B1C0FA5FC94F259F9A44C69BBF3A282E1 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.voiceConnection = this.GetComponent<VoiceConnection>();
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0;
		L_0 = Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4(__this, Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var);
		__this->___voiceConnection_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceConnection_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnEnable_m85991A4AD5700569A5EE1A0DE48D9C5931EDE4FE (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	{
		// this.voiceConnection.Client.AddCallbackTarget(this);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = __this->___voiceConnection_4;
		NullCheck(L_0);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_1;
		L_1 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_0, NULL);
		NullCheck(L_1);
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_1, __this, NULL);
		// if (this.autoConnect)
		bool L_2 = __this->___autoConnect_6;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// this.ConnectNow();
		ConnectAndJoin_ConnectNow_mCE7D697B57F5FB5BD5BEACEEAD9452ABC759CA83(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnDisable_m66F6DF35835E2C574646125559CC82DDA69CFED8 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	{
		// this.voiceConnection.Client.RemoveCallbackTarget(this);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = __this->___voiceConnection_4;
		NullCheck(L_0);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_1;
		L_1 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_0, NULL);
		NullCheck(L_1);
		LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A(L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::ConnectNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_ConnectNow_mCE7D697B57F5FB5BD5BEACEEAD9452ABC759CA83 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	{
		// this.voiceConnection.ConnectUsingSettings();
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = __this->___voiceConnection_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VoiceConnection_ConnectUsingSettings_mB5F396B3A7E1295F034869667504B899AD0BD9EC(L_0, (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnCreatedRoom_m3EF6E74CC40C60C675E274823DD58F4D0512BA14 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnCreateRoomFailed_mB9709FAC76A59F596187871355DFDCC6A9D03CF7 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A26D6A025C8B10486A984A773215AB5F9F279C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogErrorFormat("OnCreateRoomFailed errorCode={0} errorMessage={1}", returnCode, message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int16_t L_2 = ___0_returnCode;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		String_t* L_6 = ___1_message;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral8A26D6A025C8B10486A984A773215AB5F9F279C5, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnFriendListUpdate_m11537B5F13B6FA394367C83836D9199C8E53599A (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___0_friendList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnJoinedRoom_m151A581BBF0F8EB70A6BB3000497A7A6B72C7BF9 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_m52FE4B19F5F307C25E81620054696B8C67F77510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.voiceConnection.PrimaryRecorder == null)
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = __this->___voiceConnection_4;
		NullCheck(L_0);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_1;
		L_1 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// this.voiceConnection.PrimaryRecorder = this.gameObject.AddComponent<Recorder>();
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_3 = __this->___voiceConnection_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_5;
		L_5 = GameObject_AddComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_m52FE4B19F5F307C25E81620054696B8C67F77510(L_4, GameObject_AddComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_m52FE4B19F5F307C25E81620054696B8C67F77510_RuntimeMethod_var);
		NullCheck(L_3);
		VoiceConnection_set_PrimaryRecorder_m829F73718D1C633BDB32647B938AC4A12B39C39A(L_3, L_5, NULL);
	}

IL_0029:
	{
		// if (this.autoTransmit)
		bool L_6 = __this->___autoTransmit_7;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// this.voiceConnection.PrimaryRecorder.TransmitEnabled = this.autoTransmit;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_7 = __this->___voiceConnection_4;
		NullCheck(L_7);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_8;
		L_8 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7(L_7, NULL);
		bool L_9 = __this->___autoTransmit_7;
		NullCheck(L_8);
		Recorder_set_TransmitEnabled_mB6B4C554D91CC63D61DBAE8D0C9FA948CD1E1496(L_8, L_9, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnJoinRandomFailed_m8455F4A9B30CF6EF6673BD78BFB0EB4831681B59 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD45038D06BB21D0A854D09005D5553FAB9DDBAD7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogErrorFormat("OnJoinRandomFailed errorCode={0} errorMessage={1}", returnCode, message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int16_t L_2 = ___0_returnCode;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		String_t* L_6 = ___1_message;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralD45038D06BB21D0A854D09005D5553FAB9DDBAD7, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnJoinRoomFailed_mD584F6892F37CBF9C90C1BE1BF3CE4B9E9FF0D32 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2952CF50A344E8A488E00B728C4ACC0F69A2F5C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogErrorFormat("OnJoinRoomFailed roomName={0} errorCode={1} errorMessage={2}", this.RoomName, returnCode, message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___RoomName_9;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		int16_t L_4 = ___0_returnCode;
		int16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		String_t* L_8 = ___1_message;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral2952CF50A344E8A488E00B728C4ACC0F69A2F5C3, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnLeftRoom_m91069F7039E8D4417550D1ADE8DE39AF08CB0D82 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnConnected_m6EDA58336E13930FE44D0D5BB640CA8E9F595380 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnConnectedToMaster_m63FBB9277EA021EFF34665C718E1BF40B2464B22 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.enterRoomParams.RoomOptions.PublishUserId = this.publishUserId;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_0 = __this->___enterRoomParams_10;
		NullCheck(L_0);
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_1 = L_0->___RoomOptions_1;
		bool L_2 = __this->___publishUserId_8;
		NullCheck(L_1);
		RoomOptions_set_PublishUserId_mCAF45915B1DDAEB11A590246792C64D5C27ADE82_inline(L_1, L_2, NULL);
		// if (this.RandomRoom)
		bool L_3 = __this->___RandomRoom_5;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// this.enterRoomParams.RoomName = null;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_4 = __this->___enterRoomParams_10;
		NullCheck(L_4);
		L_4->___RoomName_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___RoomName_0), (void*)(String_t*)NULL);
		// this.voiceConnection.Client.OpJoinRandomOrCreateRoom(new OpJoinRandomRoomParams(), this.enterRoomParams);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_5 = __this->___voiceConnection_4;
		NullCheck(L_5);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_6;
		L_6 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_5, NULL);
		OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA* L_7 = (OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA*)il2cpp_codegen_object_new(OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OpJoinRandomRoomParams__ctor_mF7D788297A56B000A13BC70C68612B653363E78B(L_7, NULL);
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_8 = __this->___enterRoomParams_10;
		NullCheck(L_6);
		bool L_9;
		L_9 = LoadBalancingClient_OpJoinRandomOrCreateRoom_m5A358A5A5DCC221ECB22CDFC7812936D0791CF7F(L_6, L_7, L_8, NULL);
		return;
	}

IL_0047:
	{
		// this.enterRoomParams.RoomName = this.RoomName;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_10 = __this->___enterRoomParams_10;
		String_t* L_11 = __this->___RoomName_9;
		NullCheck(L_10);
		L_10->___RoomName_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___RoomName_0), (void*)L_11);
		// this.voiceConnection.Client.OpJoinOrCreateRoom(this.enterRoomParams);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_12 = __this->___voiceConnection_4;
		NullCheck(L_12);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_13;
		L_13 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_12, NULL);
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_14 = __this->___enterRoomParams_10;
		NullCheck(L_13);
		bool L_15;
		L_15 = LoadBalancingClient_OpJoinOrCreateRoom_m09D399AF025F96C6CD7E93EB2F4C2EE3600CE26F(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnDisconnected_m2D194D1985FD901B149B2A57947770BCB0C1176F (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, int32_t ___0_cause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FC41E9B4FAAD27B7915DF2DBA6F28693E8AE39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cause == DisconnectCause.None || cause == DisconnectCause.DisconnectByClientLogic)
		int32_t L_0 = ___0_cause;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_cause;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0009;
		}
	}

IL_0008:
	{
		// return;
		return;
	}

IL_0009:
	{
		// Debug.LogErrorFormat("OnDisconnected cause={0}", cause);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___0_cause;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralC8FC41E9B4FAAD27B7915DF2DBA6F28693E8AE39, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnRegionListReceived_m9EFA671226DF977C4EB8F9580D88833FF2DF5EFF (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___0_regionHandler, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnCustomAuthenticationResponse_m3232F2AAFE364F3A3859BADFFA7072FE501EDC92 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_data, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin_OnCustomAuthenticationFailed_m1F6592D01EB65331739E0946C525F8F70C559ADB (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, String_t* ___0_debugMessage, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ConnectAndJoin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoin__ctor_m456D946341A6FC5F018CEB0E7310D0E974003419 (ConnectAndJoin_t8F33D9AB6F7ABEC44BF1341A5A40FAF83A6E061E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool RandomRoom = true;
		__this->___RandomRoom_5 = (bool)1;
		// private bool autoConnect = true;
		__this->___autoConnect_6 = (bool)1;
		// private bool autoTransmit = true;
		__this->___autoTransmit_7 = (bool)1;
		// private readonly EnterRoomParams enterRoomParams = new EnterRoomParams
		// {
		//     RoomOptions = new RoomOptions()
		// };
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_0 = (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9*)il2cpp_codegen_object_new(EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8(L_0, NULL);
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_1 = L_0;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_2 = (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)il2cpp_codegen_object_new(RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8(L_2, NULL);
		NullCheck(L_1);
		L_1->___RoomOptions_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___RoomOptions_1), (void*)L_2);
		__this->___enterRoomParams_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enterRoomParams_10), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifier::get_AmplificationFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MicAmplifier_get_AmplificationFactor_m3520F32D0B31EA9076100684D52DC6DBB87862D7 (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.amplificationFactor; }
		float L_0 = __this->___amplificationFactor_8;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifier::set_AmplificationFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifier_set_AmplificationFactor_mE80772FF7F6EAD812A7C072984BA3872F8BCC102 (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (this.amplificationFactor.Equals(value))
		float* L_0 = (&__this->___amplificationFactor_8);
		float L_1 = ___0_value;
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// this.amplificationFactor = value;
		float L_3 = ___0_value;
		__this->___amplificationFactor_8 = L_3;
		// if (this.floatProcessor != null)
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_4 = __this->___floatProcessor_9;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// this.floatProcessor.AmplificationFactor = this.amplificationFactor;
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_5 = __this->___floatProcessor_9;
		float L_6 = __this->___amplificationFactor_8;
		NullCheck(L_5);
		MicAmplifierFloat_set_AmplificationFactor_m6E6A78940B81BC9035FAAC9FF6FB8679D5CAE954_inline(L_5, L_6, NULL);
	}

IL_002f:
	{
		// if (this.shortProcessor != null)
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_7 = __this->___shortProcessor_10;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// this.shortProcessor.AmplificationFactor = (short)this.amplificationFactor;
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_8 = __this->___shortProcessor_10;
		float L_9 = __this->___amplificationFactor_8;
		NullCheck(L_8);
		MicAmplifierShort_set_AmplificationFactor_m198773BB3DCF934998643559EEF564824B705160_inline(L_8, il2cpp_codegen_cast_double_to_int<int16_t>(L_9), NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifier::get_BoostValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MicAmplifier_get_BoostValue_m9E022BEC8F6C0C87C3041A71E4537E98FA916106 (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.boostValue; }
		float L_0 = __this->___boostValue_7;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifier::set_BoostValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifier_set_BoostValue_m53CC3C5BC852FD1D1E7082973187D43C20107C4C (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (this.boostValue.Equals(value))
		float* L_0 = (&__this->___boostValue_7);
		float L_1 = ___0_value;
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// this.boostValue = value;
		float L_3 = ___0_value;
		__this->___boostValue_7 = L_3;
		// if (this.floatProcessor != null)
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_4 = __this->___floatProcessor_9;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// this.floatProcessor.BoostValue = this.boostValue;
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_5 = __this->___floatProcessor_9;
		float L_6 = __this->___boostValue_7;
		NullCheck(L_5);
		MicAmplifierFloat_set_BoostValue_mF56A704AC35C793DD64AD2A70D9F1D49D71E1165_inline(L_5, L_6, NULL);
	}

IL_002f:
	{
		// if (this.shortProcessor != null)
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_7 = __this->___shortProcessor_10;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// this.shortProcessor.BoostValue = (short)this.boostValue;
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_8 = __this->___shortProcessor_10;
		float L_9 = __this->___boostValue_7;
		NullCheck(L_8);
		MicAmplifierShort_set_BoostValue_m27CCB1E511BE0882BF412870E26A7A6E00FEBC27_inline(L_8, il2cpp_codegen_cast_double_to_int<int16_t>(L_9), NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifier::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifier_OnEnable_m5DA3BEAA180B81A538435D6841ACEF3B3941C24E (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) 
{
	{
		// if (this.floatProcessor != null)
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_0 = __this->___floatProcessor_9;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// this.floatProcessor.Disabled = false;
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_1 = __this->___floatProcessor_9;
		NullCheck(L_1);
		MicAmplifierFloat_set_Disabled_mD371D23851E63AF5A6C4BE6D5276219EE30989F5_inline(L_1, (bool)0, NULL);
	}

IL_0014:
	{
		// if (this.shortProcessor != null)
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_2 = __this->___shortProcessor_10;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// this.shortProcessor.Disabled = false;
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_3 = __this->___shortProcessor_10;
		NullCheck(L_3);
		MicAmplifierShort_set_Disabled_m38CE61C359053B315F89566960FA1CEC0C421C95_inline(L_3, (bool)0, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifier::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifier_OnDisable_m0ABD958A1E385106449C02FB9EB0A71253E6F288 (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) 
{
	{
		// if (this.floatProcessor != null)
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_0 = __this->___floatProcessor_9;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// this.floatProcessor.Disabled = true;
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_1 = __this->___floatProcessor_9;
		NullCheck(L_1);
		MicAmplifierFloat_set_Disabled_mD371D23851E63AF5A6C4BE6D5276219EE30989F5_inline(L_1, (bool)1, NULL);
	}

IL_0014:
	{
		// if (this.shortProcessor != null)
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_2 = __this->___shortProcessor_10;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// this.shortProcessor.Disabled = true;
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_3 = __this->___shortProcessor_10;
		NullCheck(L_3);
		MicAmplifierShort_set_Disabled_m38CE61C359053B315F89566960FA1CEC0C421C95_inline(L_3, (bool)1, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifier::PhotonVoiceCreated(Photon.Voice.Unity.PhotonVoiceCreatedParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifier_PhotonVoiceCreated_m05B9A2B0DAB0B2541ADC6C324A4902B47B304493 (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_AddPostProcessor_mA107426BC5100CB1EAD5AD61A7CDD6932A580DEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_AddPostProcessor_mBA7A7E3F2CCA1B9C2C71BB4C64A0C3ACEFF35FDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C02661DAFA7B24ABEB593BBF9187996810EC0B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* G_B7_4 = NULL;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* G_B6_4 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_3 = NULL;
	String_t* G_B8_4 = NULL;
	VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* G_B8_5 = NULL;
	{
		// if (p.Voice is LocalVoiceAudioFloat)
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_0 = ___0_p;
		NullCheck(L_0);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_1;
		L_1 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_0, NULL);
		if (!((LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9*)IsInstClass((RuntimeObject*)L_1, LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		// LocalVoiceAudioFloat v = p.Voice as LocalVoiceAudioFloat;
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_2 = ___0_p;
		NullCheck(L_2);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_3;
		L_3 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_2, NULL);
		// this.floatProcessor = new MicAmplifierFloat(this.AmplificationFactor, this.BoostValue);
		float L_4;
		L_4 = MicAmplifier_get_AmplificationFactor_m3520F32D0B31EA9076100684D52DC6DBB87862D7_inline(__this, NULL);
		float L_5;
		L_5 = MicAmplifier_get_BoostValue_m9E022BEC8F6C0C87C3041A71E4537E98FA916106_inline(__this, NULL);
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_6 = (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC*)il2cpp_codegen_object_new(MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MicAmplifierFloat__ctor_mE35C956FD45B0A4B18D65A06EE76903FB64E38EA(L_6, L_4, L_5, NULL);
		__this->___floatProcessor_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floatProcessor_9), (void*)L_6);
		// v.AddPostProcessor(this.floatProcessor);
		IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* L_7 = (IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147*)(IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147*)SZArrayNew(IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147_il2cpp_TypeInfo_var, (uint32_t)1);
		IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* L_8 = L_7;
		MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* L_9 = __this->___floatProcessor_9;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(((LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9*)IsInstClass((RuntimeObject*)L_3, LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var)));
		LocalVoiceFramed_1_AddPostProcessor_mA107426BC5100CB1EAD5AD61A7CDD6932A580DEF(((LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9*)IsInstClass((RuntimeObject*)L_3, LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var)), L_8, LocalVoiceFramed_1_AddPostProcessor_mA107426BC5100CB1EAD5AD61A7CDD6932A580DEF_RuntimeMethod_var);
		return;
	}

IL_0044:
	{
		// else if (p.Voice is LocalVoiceAudioShort)
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_10 = ___0_p;
		NullCheck(L_10);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_11;
		L_11 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_10, NULL);
		if (!((LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8*)IsInstClass((RuntimeObject*)L_11, LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var)))
		{
			goto IL_008a;
		}
	}
	{
		// LocalVoiceAudioShort v = p.Voice as LocalVoiceAudioShort;
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_12 = ___0_p;
		NullCheck(L_12);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_13;
		L_13 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_12, NULL);
		// this.shortProcessor = new MicAmplifierShort((short)this.AmplificationFactor, (short)this.BoostValue);
		float L_14;
		L_14 = MicAmplifier_get_AmplificationFactor_m3520F32D0B31EA9076100684D52DC6DBB87862D7_inline(__this, NULL);
		float L_15;
		L_15 = MicAmplifier_get_BoostValue_m9E022BEC8F6C0C87C3041A71E4537E98FA916106_inline(__this, NULL);
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_16 = (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE*)il2cpp_codegen_object_new(MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		MicAmplifierShort__ctor_m641D94C72554F87059589362B76BA82B1F6D732C(L_16, il2cpp_codegen_cast_double_to_int<int16_t>(L_14), il2cpp_codegen_cast_double_to_int<int16_t>(L_15), NULL);
		__this->___shortProcessor_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shortProcessor_10), (void*)L_16);
		// v.AddPostProcessor(this.shortProcessor);
		IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* L_17 = (IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF*)(IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF*)SZArrayNew(IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF_il2cpp_TypeInfo_var, (uint32_t)1);
		IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* L_18 = L_17;
		MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* L_19 = __this->___shortProcessor_10;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		NullCheck(((LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8*)IsInstClass((RuntimeObject*)L_13, LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var)));
		LocalVoiceFramed_1_AddPostProcessor_mBA7A7E3F2CCA1B9C2C71BB4C64A0C3ACEFF35FDE(((LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8*)IsInstClass((RuntimeObject*)L_13, LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var)), L_18, LocalVoiceFramed_1_AddPostProcessor_mBA7A7E3F2CCA1B9C2C71BB4C64A0C3ACEFF35FDE_RuntimeMethod_var);
		return;
	}

IL_008a:
	{
		// else if (this.Logger.IsErrorEnabled)
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_20;
		L_20 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		NullCheck(L_20);
		bool L_21;
		L_21 = VoiceLogger_get_IsErrorEnabled_m7633CDEECC69714F754C7B3B185B5EBD0503E0F4(L_20, NULL);
		if (!L_21)
		{
			goto IL_00cf;
		}
	}
	{
		// this.Logger.LogError("LocalVoice object has unexpected value/type: {0}", p.Voice == null ? "null" : p.Voice.GetType().ToString());
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_22;
		L_22 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_25 = ___0_p;
		NullCheck(L_25);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_26;
		L_26 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_25, NULL);
		G_B6_0 = 0;
		G_B6_1 = L_24;
		G_B6_2 = L_24;
		G_B6_3 = _stringLiteralA3C02661DAFA7B24ABEB593BBF9187996810EC0B;
		G_B6_4 = L_22;
		if (!L_26)
		{
			G_B7_0 = 0;
			G_B7_1 = L_24;
			G_B7_2 = L_24;
			G_B7_3 = _stringLiteralA3C02661DAFA7B24ABEB593BBF9187996810EC0B;
			G_B7_4 = L_22;
			goto IL_00c4;
		}
	}
	{
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_27 = ___0_p;
		NullCheck(L_27);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_28;
		L_28 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_27, NULL);
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_28, NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		G_B8_0 = L_30;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		G_B8_5 = G_B6_4;
		goto IL_00c9;
	}

IL_00c4:
	{
		G_B8_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
		G_B8_5 = G_B7_4;
	}

IL_00c9:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (RuntimeObject*)G_B8_0);
		NullCheck(G_B8_5);
		VoiceLogger_LogError_m86254F4CD9D565647033E8EDFF86533CA1A56B0C(G_B8_5, G_B8_4, G_B8_3, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifier__ctor_mC2D5BF4AD3167396D1423CDF6016A4960DA1D40A (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) 
{
	{
		// private float amplificationFactor = 1f;
		__this->___amplificationFactor_8 = (1.0f);
		VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58(__this, NULL);
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
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_AmplificationFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_AmplificationFactor_mF6BF127490CC68103DC3E968949EFEEABD95C43E (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public float AmplificationFactor { get; set; }
		float L_0 = __this->___U3CAmplificationFactorU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_AmplificationFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_AmplificationFactor_m6E6A78940B81BC9035FAAC9FF6FB8679D5CAE954 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AmplificationFactor { get; set; }
		float L_0 = ___0_value;
		__this->___U3CAmplificationFactorU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_BoostValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_BoostValue_mB7D0D60C191A4DD4CF28C4BE8D28F46D5DAA4272 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public float BoostValue { get; set; }
		float L_0 = __this->___U3CBoostValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_BoostValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_BoostValue_mF56A704AC35C793DD64AD2A70D9F1D49D71E1165 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float BoostValue { get; set; }
		float L_0 = ___0_value;
		__this->___U3CBoostValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_MaxBefore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_MaxBefore_mE284EE666B88D421C15682861448C97289A43725 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxBefore { get; private set; }
		float L_0 = __this->___U3CMaxBeforeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_MaxBefore(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_MaxBefore_m45E63FB81F55D06647DFB2F19F8DADF3A40DBBFC (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxBefore { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMaxBeforeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_MaxAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_MaxAfter_mA6FE9DF9A7552232AB2F421871B77E1081706871 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxAfter { get; private set; }
		float L_0 = __this->___U3CMaxAfterU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_MaxAfter(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_MaxAfter_mE50BD4688A58A49999CBAF2E285450DE62D8AA82 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxAfter { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMaxAfterU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::get_Disabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicAmplifierFloat_get_Disabled_mA72105C0998AD667B0A948B5606624ECBE77A62A (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = __this->___U3CDisabledU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::set_Disabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_Disabled_mD371D23851E63AF5A6C4BE6D5276219EE30989F5 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CDisabledU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat__ctor_mE35C956FD45B0A4B18D65A06EE76903FB64E38EA (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_amplificationFactor, float ___1_boostValue, const RuntimeMethod* method) 
{
	{
		// public MicAmplifierFloat(float amplificationFactor, float boostValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.AmplificationFactor = amplificationFactor;
		float L_0 = ___0_amplificationFactor;
		MicAmplifierFloat_set_AmplificationFactor_m6E6A78940B81BC9035FAAC9FF6FB8679D5CAE954_inline(__this, L_0, NULL);
		// this.BoostValue = boostValue;
		float L_1 = ___1_boostValue;
		MicAmplifierFloat_set_BoostValue_mF56A704AC35C793DD64AD2A70D9F1D49D71E1165_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Single[] Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::Process(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MicAmplifierFloat_Process_m542862895B5655DD08163ACB5D59E14664CB7079 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buf, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// if (this.Disabled)
		bool L_0;
		L_0 = MicAmplifierFloat_get_Disabled_mA72105C0998AD667B0A948B5606624ECBE77A62A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return buf;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_buf;
		return L_1;
	}

IL_000a:
	{
		// for (int i = 0; i < buf.Length; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_000e:
	{
		// float before = buf[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_buf;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// buf[i] *= this.AmplificationFactor;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_buf;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		float* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		float L_9 = *((float*)L_8);
		float L_10;
		L_10 = MicAmplifierFloat_get_AmplificationFactor_mF6BF127490CC68103DC3E968949EFEEABD95C43E_inline(__this, NULL);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply(L_9, L_10));
		// buf[i] += this.BoostValue;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___0_buf;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		float* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		float L_14 = *((float*)L_13);
		float L_15;
		L_15 = MicAmplifierFloat_get_BoostValue_mB7D0D60C191A4DD4CF28C4BE8D28F46D5DAA4272_inline(__this, NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_add(L_14, L_15));
		// if (this.MaxBefore < before)
		float L_16;
		L_16 = MicAmplifierFloat_get_MaxBefore_mE284EE666B88D421C15682861448C97289A43725_inline(__this, NULL);
		float L_17 = V_1;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_004d;
		}
	}
	{
		// this.MaxBefore = before;
		float L_18 = V_1;
		MicAmplifierFloat_set_MaxBefore_m45E63FB81F55D06647DFB2F19F8DADF3A40DBBFC_inline(__this, L_18, NULL);
		// this.MaxAfter = buf[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = ___0_buf;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		MicAmplifierFloat_set_MaxAfter_mE50BD4688A58A49999CBAF2E285450DE62D8AA82_inline(__this, L_22, NULL);
	}

IL_004d:
	{
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0051:
	{
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_24 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = ___0_buf;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// return buf;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = ___0_buf;
		return L_26;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierFloat_Dispose_mEBAE541AE2F3899A63A19978279C00A7CB695DA0 (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// }
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
// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_AmplificationFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_AmplificationFactor_m9C224D06C12F11B6E13F4B475D68C4016B731A0A (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public short AmplificationFactor { get; set; }
		int16_t L_0 = __this->___U3CAmplificationFactorU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_AmplificationFactor(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort_set_AmplificationFactor_m198773BB3DCF934998643559EEF564824B705160 (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short AmplificationFactor { get; set; }
		int16_t L_0 = ___0_value;
		__this->___U3CAmplificationFactorU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_BoostValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_BoostValue_mC1C0E3A2C408CAE04473EF0FDA3EA4811E5E47E6 (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public short BoostValue { get; set; }
		int16_t L_0 = __this->___U3CBoostValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_BoostValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort_set_BoostValue_m27CCB1E511BE0882BF412870E26A7A6E00FEBC27 (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short BoostValue { get; set; }
		int16_t L_0 = ___0_value;
		__this->___U3CBoostValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_MaxBefore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_MaxBefore_m2AA4ED496BD7B840A23A42B1EC4ADC7DFF17DABE (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public short MaxBefore { get; private set; }
		int16_t L_0 = __this->___U3CMaxBeforeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_MaxBefore(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort_set_MaxBefore_mC8B01DDC8516728CAACD118BF4EE72F035F15E34 (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short MaxBefore { get; private set; }
		int16_t L_0 = ___0_value;
		__this->___U3CMaxBeforeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_MaxAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_MaxAfter_m001022DC815C7532A5208DD8C3730C4A14923AAF (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public short MaxAfter { get; private set; }
		int16_t L_0 = __this->___U3CMaxAfterU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_MaxAfter(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort_set_MaxAfter_mB7CB7B8AD8866CD8874A6498C56B51EEC5AABED0 (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short MaxAfter { get; private set; }
		int16_t L_0 = ___0_value;
		__this->___U3CMaxAfterU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::get_Disabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicAmplifierShort_get_Disabled_m6AA14222D1376C14B421CF20DA4932BAE60E61CA (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = __this->___U3CDisabledU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::set_Disabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort_set_Disabled_m38CE61C359053B315F89566960FA1CEC0C421C95 (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CDisabledU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort__ctor_m641D94C72554F87059589362B76BA82B1F6D732C (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_amplificationFactor, int16_t ___1_boostValue, const RuntimeMethod* method) 
{
	{
		// public MicAmplifierShort(short amplificationFactor, short boostValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.AmplificationFactor = amplificationFactor;
		int16_t L_0 = ___0_amplificationFactor;
		MicAmplifierShort_set_AmplificationFactor_m198773BB3DCF934998643559EEF564824B705160_inline(__this, L_0, NULL);
		// this.BoostValue = boostValue;
		int16_t L_1 = ___1_boostValue;
		MicAmplifierShort_set_BoostValue_m27CCB1E511BE0882BF412870E26A7A6E00FEBC27_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Int16[] Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::Process(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* MicAmplifierShort_Process_mD01739F7C92BD42C9A9F80AACD0947226D759A9F (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_buf, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		// if (this.Disabled)
		bool L_0;
		L_0 = MicAmplifierShort_get_Disabled_m6AA14222D1376C14B421CF20DA4932BAE60E61CA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return buf;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___0_buf;
		return L_1;
	}

IL_000a:
	{
		// for (int i = 0; i < buf.Length; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_000e:
	{
		// short before = buf[i];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___0_buf;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// buf[i] *= this.AmplificationFactor;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ___0_buf;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int16_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		int32_t L_9 = *((int16_t*)L_8);
		int16_t L_10;
		L_10 = MicAmplifierShort_get_AmplificationFactor_m9C224D06C12F11B6E13F4B475D68C4016B731A0A_inline(__this, NULL);
		*((int16_t*)L_8) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)));
		// buf[i] += this.BoostValue;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ___0_buf;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int16_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		int32_t L_14 = *((int16_t*)L_13);
		int16_t L_15;
		L_15 = MicAmplifierShort_get_BoostValue_mC1C0E3A2C408CAE04473EF0FDA3EA4811E5E47E6_inline(__this, NULL);
		*((int16_t*)L_13) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_14, (int32_t)L_15)));
		// if (this.MaxBefore < before)
		int16_t L_16;
		L_16 = MicAmplifierShort_get_MaxBefore_m2AA4ED496BD7B840A23A42B1EC4ADC7DFF17DABE_inline(__this, NULL);
		int16_t L_17 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_004f;
		}
	}
	{
		// this.MaxBefore = before;
		int16_t L_18 = V_1;
		MicAmplifierShort_set_MaxBefore_mC8B01DDC8516728CAACD118BF4EE72F035F15E34_inline(__this, L_18, NULL);
		// this.MaxAfter = buf[i];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = ___0_buf;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		MicAmplifierShort_set_MaxAfter_mB7CB7B8AD8866CD8874A6498C56B51EEC5AABED0_inline(__this, L_22, NULL);
	}

IL_004f:
	{
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_24 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_25 = ___0_buf;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// return buf;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_26 = ___0_buf;
		return L_26;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicAmplifierShort_Dispose_m04E28D35C0039CAB1FB2DD10ED493B6102120D9C (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// }
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
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceLagSimulationGui_OnEnable_mB5C48CEFC1ACD027B71766F9C645D82423002820 (PhotonVoiceLagSimulationGui_t3AE439FA23B88A1EF6922190079B88F6EBB4F176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5628B5550431B73AD2BA7443FC874900634E9469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA70439C0E7D26C76C0387691E4AE08678E59627);
		s_Il2CppMethodInitialized = true;
	}
	VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* V_0 = NULL;
	{
		// VoiceConnection[] voiceConnections = this.GetComponents<VoiceConnection>();
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_0;
		L_0 = Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8(__this, Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8_RuntimeMethod_var);
		V_0 = L_0;
		// if (voiceConnections == null || voiceConnections.Length == 0)
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_2 = V_0;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0021;
		}
	}

IL_000e:
	{
		// Debug.LogError("No VoiceConnection component found, PhotonVoiceStatsGui disabled", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralCA70439C0E7D26C76C0387691E4AE08678E59627, __this, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// if (voiceConnections.Length > 1)
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogWarningFormat(this, "Multiple VoiceConnection components found, using first occurrence attached to GameObject {0}", voiceConnections[0].name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mEC3E8902D2EF0D6CDC7D2643D75DF8A7A6F84713(__this, _stringLiteral5628B5550431B73AD2BA7443FC874900634E9469, L_5, NULL);
	}

IL_0043:
	{
		// this.voiceConnection = voiceConnections[0];
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->___voiceConnection_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceConnection_4), (void*)L_12);
		// this.peer = this.voiceConnection.Client.LoadBalancingPeer;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_13 = __this->___voiceConnection_4;
		NullCheck(L_13);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_14;
		L_14 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_13, NULL);
		NullCheck(L_14);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_15;
		L_15 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_14, NULL);
		__this->___peer_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peer_8), (void*)L_15);
		// this.debugLostPercent = this.voiceConnection.VoiceClient.DebugLostPercent;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_16 = __this->___voiceConnection_4;
		NullCheck(L_16);
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_17;
		L_17 = VoiceConnection_get_VoiceClient_m3FE44015ADFE8EFED2FAB64D5878D7962D0628B6(L_16, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VoiceClient_get_DebugLostPercent_m372E20DEF459F85724F793CD11E43A7F635B4B72_inline(L_17, NULL);
		__this->___debugLostPercent_9 = ((float)L_18);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceLagSimulationGui_OnGUI_m33FD8B912D29AB1564B3AA7B43926CD47E2851EA (PhotonVoiceLagSimulationGui_t3AE439FA23B88A1EF6922190079B88F6EBB4F176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonVoiceLagSimulationGui_NetSimHasNoPeerWindow_mBC4372FC5EB0B7F488D1D7D7E8570CCD05691441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonVoiceLagSimulationGui_NetSimWindow_mE15BFDA974278A2F5E3FB785B5151087A2B95C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7C852816C687A128109719584EBFBC73E6849A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.visible)
		bool L_0 = __this->___visible_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (this.peer == null)
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_1 = __this->___peer_8;
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		// this.windowRect = GUILayout.Window(this.windowId, this.windowRect, this.NetSimHasNoPeerWindow,
		//     "Voice Network Simulation");
		int32_t L_2 = __this->___windowId_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = __this->___windowRect_5;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_4 = (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*)il2cpp_codegen_object_new(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71(L_4, __this, (intptr_t)((void*)PhotonVoiceLagSimulationGui_NetSimHasNoPeerWindow_mBC4372FC5EB0B7F488D1D7D7E8570CCD05691441_RuntimeMethod_var), NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = GUILayout_Window_mF2F1C1620706F70E59FAAA4882967AB589FF9059(L_2, L_3, L_4, _stringLiteral0C7C852816C687A128109719584EBFBC73E6849A, L_5, NULL);
		__this->___windowRect_5 = L_6;
		return;
	}

IL_003f:
	{
		// this.windowRect = GUILayout.Window(this.windowId, this.windowRect, this.NetSimWindow, "Voice Network Simulation");
		int32_t L_7 = __this->___windowId_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = __this->___windowRect_5;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_9 = (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*)il2cpp_codegen_object_new(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71(L_9, __this, (intptr_t)((void*)PhotonVoiceLagSimulationGui_NetSimWindow_mE15BFDA974278A2F5E3FB785B5151087A2B95C43_RuntimeMethod_var), NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_10;
		L_10 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = GUILayout_Window_mF2F1C1620706F70E59FAAA4882967AB589FF9059(L_7, L_8, L_9, _stringLiteral0C7C852816C687A128109719584EBFBC73E6849A, L_10, NULL);
		__this->___windowRect_5 = L_11;
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::NetSimHasNoPeerWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceLagSimulationGui_NetSimHasNoPeerWindow_mBC4372FC5EB0B7F488D1D7D7E8570CCD05691441 (PhotonVoiceLagSimulationGui_t3AE439FA23B88A1EF6922190079B88F6EBB4F176* __this, int32_t ___0_windowId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25B0EFD4F71C4AA56E17A226EB10B7F1013878C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUILayout.Label("No voice peer to communicate with. ");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralF25B0EFD4F71C4AA56E17A226EB10B7F1013878C, L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::NetSimWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceLagSimulationGui_NetSimWindow_mE15BFDA974278A2F5E3FB785B5151087A2B95C43 (PhotonVoiceLagSimulationGui_t3AE439FA23B88A1EF6922190079B88F6EBB4F176* __this, int32_t ___0_windowId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1872D205CF882A37CF7D315E8512E72B5E698F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D1222295B8DFE9719DE9D0B801BBBA75A5B561B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEBB379CCA002A83D4BAA94B2D48213D86137B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7B79A29325375F1A6BF0C543C962FF04B43306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF480C8583CFD3A1E38212FC22D0F3D628B8BE269);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF65D9DD240F808922B86DFC7F8C7014C0734E12F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// GUILayout.Label(string.Format("Rtt:{0,4} +/-{1,3}", this.peer.RoundTripTime,
		//     this.peer.RoundTripTimeVariance));
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0 = __this->___peer_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_4 = __this->___peer_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = PhotonPeer_get_RoundTripTimeVariance_mEB905CCB7BECBD67C8B6BB183F9DF019332F0BCA(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF480C8583CFD3A1E38212FC22D0F3D628B8BE269, L_3, L_7, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_8, L_9, NULL);
		// bool simEnabled = this.peer.IsSimulationEnabled;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_10 = __this->___peer_8;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled() */, L_10);
		V_0 = L_11;
		// bool newSimEnabled = GUILayout.Toggle(simEnabled, "Simulate");
		bool L_12 = V_0;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13;
		L_13 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_14;
		L_14 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_12, _stringLiteralF65D9DD240F808922B86DFC7F8C7014C0734E12F, L_13, NULL);
		V_1 = L_14;
		// if (newSimEnabled != simEnabled)
		bool L_15 = V_1;
		bool L_16 = V_0;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0061;
		}
	}
	{
		// this.peer.IsSimulationEnabled = newSimEnabled;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_17 = __this->___peer_8;
		bool L_18 = V_1;
		NullCheck(L_17);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean) */, L_17, L_18);
	}

IL_0061:
	{
		// float inOutLag = this.peer.NetworkSimulationSettings.IncomingLag;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_19 = __this->___peer_8;
		NullCheck(L_19);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_20;
		L_20 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = NetworkSimulationSet_get_IncomingLag_mE38F72A9950F07D93AFFB645F504272A0E93D8F0(L_20, NULL);
		V_2 = ((float)L_21);
		// GUILayout.Label(string.Format("Lag {0}", inOutLag));
		float L_22 = V_2;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral2A1872D205CF882A37CF7D315E8512E72B5E698F, L_24, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_26;
		L_26 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_25, L_26, NULL);
		// inOutLag = GUILayout.HorizontalSlider(inOutLag, 0, 500);
		float L_27 = V_2;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_28;
		L_28 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		float L_29;
		L_29 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_27, (0.0f), (500.0f), L_28, NULL);
		V_2 = L_29;
		// this.peer.NetworkSimulationSettings.IncomingLag = (int)inOutLag;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_30 = __this->___peer_8;
		NullCheck(L_30);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_31;
		L_31 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_30, NULL);
		float L_32 = V_2;
		NullCheck(L_31);
		NetworkSimulationSet_set_IncomingLag_m25C5AD9C4B1FC2669360A47135B4E0E31531A1D6(L_31, il2cpp_codegen_cast_double_to_int<int32_t>(L_32), NULL);
		// this.peer.NetworkSimulationSettings.OutgoingLag = (int)inOutLag;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_33 = __this->___peer_8;
		NullCheck(L_33);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_34;
		L_34 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_33, NULL);
		float L_35 = V_2;
		NullCheck(L_34);
		NetworkSimulationSet_set_OutgoingLag_m53C3F6F784D7A868A69E1AF5A387B04DAF43EA8A(L_34, il2cpp_codegen_cast_double_to_int<int32_t>(L_35), NULL);
		// float inOutJitter = this.peer.NetworkSimulationSettings.IncomingJitter;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_36 = __this->___peer_8;
		NullCheck(L_36);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_37;
		L_37 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_36, NULL);
		NullCheck(L_37);
		int32_t L_38;
		L_38 = NetworkSimulationSet_get_IncomingJitter_m17E4A249796BCD139B343124A3045150DEB9FD7C(L_37, NULL);
		V_3 = ((float)L_38);
		// GUILayout.Label(string.Format("Jit {0}", inOutJitter));
		float L_39 = V_3;
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42;
		L_42 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4D1222295B8DFE9719DE9D0B801BBBA75A5B561B, L_41, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_43;
		L_43 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_42, L_43, NULL);
		// inOutJitter = GUILayout.HorizontalSlider(inOutJitter, 0, 100);
		float L_44 = V_3;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_45;
		L_45 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		float L_46;
		L_46 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_44, (0.0f), (100.0f), L_45, NULL);
		V_3 = L_46;
		// this.peer.NetworkSimulationSettings.IncomingJitter = (int)inOutJitter;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_47 = __this->___peer_8;
		NullCheck(L_47);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_48;
		L_48 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_47, NULL);
		float L_49 = V_3;
		NullCheck(L_48);
		NetworkSimulationSet_set_IncomingJitter_mCB79E77D490287EEE0CD880E8091539B82409D9C(L_48, il2cpp_codegen_cast_double_to_int<int32_t>(L_49), NULL);
		// this.peer.NetworkSimulationSettings.OutgoingJitter = (int)inOutJitter;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_50 = __this->___peer_8;
		NullCheck(L_50);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_51;
		L_51 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_50, NULL);
		float L_52 = V_3;
		NullCheck(L_51);
		NetworkSimulationSet_set_OutgoingJitter_mB127A220B2DE110E29AF3D4BDC08E393C671B5BC(L_51, il2cpp_codegen_cast_double_to_int<int32_t>(L_52), NULL);
		// float loss = this.peer.NetworkSimulationSettings.IncomingLossPercentage;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_53 = __this->___peer_8;
		NullCheck(L_53);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_54;
		L_54 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_53, NULL);
		NullCheck(L_54);
		int32_t L_55;
		L_55 = NetworkSimulationSet_get_IncomingLossPercentage_m4E99E7B27BCC46F2AE76C547EFF04E02F397432E(L_54, NULL);
		V_4 = ((float)L_55);
		// GUILayout.Label(string.Format("Loss {0}", loss));
		float L_56 = V_4;
		float L_57 = L_56;
		RuntimeObject* L_58 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_57);
		String_t* L_59;
		L_59 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCEBB379CCA002A83D4BAA94B2D48213D86137B24, L_58, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_60;
		L_60 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_59, L_60, NULL);
		// loss = GUILayout.HorizontalSlider(loss, 0, 10);
		float L_61 = V_4;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_62;
		L_62 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		float L_63;
		L_63 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_61, (0.0f), (10.0f), L_62, NULL);
		V_4 = L_63;
		// this.peer.NetworkSimulationSettings.IncomingLossPercentage = (int)loss;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_64 = __this->___peer_8;
		NullCheck(L_64);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_65;
		L_65 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_64, NULL);
		float L_66 = V_4;
		NullCheck(L_65);
		NetworkSimulationSet_set_IncomingLossPercentage_mAD28C44A01E5A051D9B1B883C9BEB4E24327F11C(L_65, il2cpp_codegen_cast_double_to_int<int32_t>(L_66), NULL);
		// this.peer.NetworkSimulationSettings.OutgoingLossPercentage = (int)loss;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_67 = __this->___peer_8;
		NullCheck(L_67);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_68;
		L_68 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_67, NULL);
		float L_69 = V_4;
		NullCheck(L_68);
		NetworkSimulationSet_set_OutgoingLossPercentage_m0EDB404867753C870405E0C1565E13B407063B29(L_68, il2cpp_codegen_cast_double_to_int<int32_t>(L_69), NULL);
		// GUILayout.Label(string.Format("Lost Audio Frames {0}%", (int)this.debugLostPercent));
		float L_70 = __this->___debugLostPercent_9;
		int32_t L_71 = il2cpp_codegen_cast_double_to_int<int32_t>(L_70);
		RuntimeObject* L_72 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_71);
		String_t* L_73;
		L_73 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralED7B79A29325375F1A6BF0C543C962FF04B43306, L_72, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_74;
		L_74 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_73, L_74, NULL);
		// this.debugLostPercent = GUILayout.HorizontalSlider(this.debugLostPercent, 0, 100);
		float L_75 = __this->___debugLostPercent_9;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_76;
		L_76 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		float L_77;
		L_77 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_75, (0.0f), (100.0f), L_76, NULL);
		__this->___debugLostPercent_9 = L_77;
		// if (newSimEnabled)
		bool L_78 = V_1;
		if (!L_78)
		{
			goto IL_01f5;
		}
	}
	{
		// this.voiceConnection.VoiceClient.DebugLostPercent = (int)this.debugLostPercent;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_79 = __this->___voiceConnection_4;
		NullCheck(L_79);
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_80;
		L_80 = VoiceConnection_get_VoiceClient_m3FE44015ADFE8EFED2FAB64D5878D7962D0628B6(L_79, NULL);
		float L_81 = __this->___debugLostPercent_9;
		NullCheck(L_80);
		VoiceClient_set_DebugLostPercent_m661F08B4FCA903D03B772A2B954CE1CA8E77DC3A_inline(L_80, il2cpp_codegen_cast_double_to_int<int32_t>(L_81), NULL);
		goto IL_0206;
	}

IL_01f5:
	{
		// this.voiceConnection.VoiceClient.DebugLostPercent = 0;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_82 = __this->___voiceConnection_4;
		NullCheck(L_82);
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_83;
		L_83 = VoiceConnection_get_VoiceClient_m3FE44015ADFE8EFED2FAB64D5878D7962D0628B6(L_82, NULL);
		NullCheck(L_83);
		VoiceClient_set_DebugLostPercent_m661F08B4FCA903D03B772A2B954CE1CA8E77DC3A_inline(L_83, 0, NULL);
	}

IL_0206:
	{
		// if (GUI.changed)
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448(NULL);
		if (!L_84)
		{
			goto IL_021d;
		}
	}
	{
		// this.windowRect.height = 100;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_85 = (&__this->___windowRect_5);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_85, (100.0f), NULL);
	}

IL_021d:
	{
		// GUI.DragWindow();
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DragWindow_m4DEBB036044B4C24727E8794716C6727C1E7DABB(NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceLagSimulationGui__ctor_m637B94E69E32AB0C8EECE759909E11D1E0A77E4A (PhotonVoiceLagSimulationGui_t3AE439FA23B88A1EF6922190079B88F6EBB4F176* __this, const RuntimeMethod* method) 
{
	{
		// private Rect windowRect = new Rect(0, 100, 200, 100);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (100.0f), (200.0f), (100.0f), /*hidden argument*/NULL);
		__this->___windowRect_5 = L_0;
		// private int windowId = 201;
		__this->___windowId_6 = ((int32_t)201);
		// private bool visible = true;
		__this->___visible_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceStatsGui_OnEnable_mB740FFABD0CDB0DE8BC453EA7AFC1B3ED3B36D71 (PhotonVoiceStatsGui_t962969BCDF9F121E9BB3D9EDC106CE074DE66D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5628B5550431B73AD2BA7443FC874900634E9469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA70439C0E7D26C76C0387691E4AE08678E59627);
		s_Il2CppMethodInitialized = true;
	}
	VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* V_0 = NULL;
	{
		// VoiceConnection[] voiceConnections = this.GetComponents<VoiceConnection>();
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_0;
		L_0 = Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8(__this, Component_GetComponents_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mA5F2B99787B95FCF402D2156B559B5A7C0C87FB8_RuntimeMethod_var);
		V_0 = L_0;
		// if (voiceConnections == null || voiceConnections.Length == 0)
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_2 = V_0;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0021;
		}
	}

IL_000e:
	{
		// Debug.LogError("No VoiceConnection component found, PhotonVoiceStatsGui disabled", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralCA70439C0E7D26C76C0387691E4AE08678E59627, __this, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// if (voiceConnections.Length > 1)
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogWarningFormat(this, "Multiple VoiceConnection components found, using first occurrence attached to GameObject {0}", voiceConnections[0].name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mEC3E8902D2EF0D6CDC7D2643D75DF8A7A6F84713(__this, _stringLiteral5628B5550431B73AD2BA7443FC874900634E9469, L_5, NULL);
	}

IL_0043:
	{
		// this.voiceConnection = voiceConnections[0];
		VoiceConnectionU5BU5D_tF90797187743A41D892BFE2C7415E8951059CB7D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->___voiceConnection_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceConnection_13), (void*)L_12);
		// this.voiceClient = this.voiceConnection.VoiceClient;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_13 = __this->___voiceConnection_13;
		NullCheck(L_13);
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_14;
		L_14 = VoiceConnection_get_VoiceClient_m3FE44015ADFE8EFED2FAB64D5878D7962D0628B6(L_13, NULL);
		__this->___voiceClient_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceClient_14), (void*)L_14);
		// this.peer = this.voiceConnection.Client.LoadBalancingPeer;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_15 = __this->___voiceConnection_13;
		NullCheck(L_15);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_16;
		L_16 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_15, NULL);
		NullCheck(L_16);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_17;
		L_17 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_16, NULL);
		__this->___peer_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peer_12), (void*)L_17);
		// if (this.statsRect.x <= 0)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&__this->___statsRect_10);
		float L_19;
		L_19 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_18, NULL);
		if ((!(((float)L_19) <= ((float)(0.0f)))))
		{
			goto IL_00a2;
		}
	}
	{
		// this.statsRect.x = Screen.width - this.statsRect.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_20 = (&__this->___statsRect_10);
		int32_t L_21;
		L_21 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_22 = (&__this->___statsRect_10);
		float L_23;
		L_23 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_22, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_20, ((float)il2cpp_codegen_subtract(((float)L_21), L_23)), NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceStatsGui_Update_mB384EE93629E553DA1E91E429F7BCD1BDF3C8576 (PhotonVoiceStatsGui_t962969BCDF9F121E9BB3D9EDC106CE074DE66D6C* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Tab) && Input.GetKey(KeyCode.LeftShift))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)9), NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// this.statsWindowOn = !this.statsWindowOn;
		bool L_2 = __this->___statsWindowOn_4;
		__this->___statsWindowOn_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// this.statsOn = true;    // enable stats when showing the window
		__this->___statsOn_5 = (bool)1;
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceStatsGui_OnGUI_m89DC27BAA17C7A69420DE48F7C38D8BCBCAB4946 (PhotonVoiceStatsGui_t962969BCDF9F121E9BB3D9EDC106CE074DE66D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonVoiceStatsGui_TrafficStatsWindow_m2C30EE406DDF776AC9E5F3299C1E2A07DD4A7B23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC557E8F87EB7C65D61EF3453FEF626974D8CA6C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.peer.TrafficStatsEnabled != this.statsOn)
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0 = __this->___peer_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonPeer_get_TrafficStatsEnabled_mB7C4D26AAD36A731A4C89B1DE6144B480D9FF2C9(L_0, NULL);
		bool L_2 = __this->___statsOn_5;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		// this.peer.TrafficStatsEnabled = this.statsOn;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_3 = __this->___peer_12;
		bool L_4 = __this->___statsOn_5;
		NullCheck(L_3);
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_3, L_4, NULL);
	}

IL_0024:
	{
		// if (!this.statsWindowOn)
		bool L_5 = __this->___statsWindowOn_4;
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		return;
	}

IL_002d:
	{
		// this.statsRect = GUILayout.Window(this.windowId, this.statsRect, this.TrafficStatsWindow, "Voice Client Messages (shift+tab)");
		int32_t L_6 = __this->___windowId_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7 = __this->___statsRect_10;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_8 = (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*)il2cpp_codegen_object_new(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71(L_8, __this, (intptr_t)((void*)PhotonVoiceStatsGui_TrafficStatsWindow_m2C30EE406DDF776AC9E5F3299C1E2A07DD4A7B23_RuntimeMethod_var), NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = GUILayout_Window_mF2F1C1620706F70E59FAAA4882967AB589FF9059(L_6, L_7, L_8, _stringLiteralC557E8F87EB7C65D61EF3453FEF626974D8CA6C7, L_9, NULL);
		__this->___statsRect_10 = L_10;
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::TrafficStatsWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceStatsGui_TrafficStatsWindow_m2C30EE406DDF776AC9E5F3299C1E2A07DD4A7B23 (PhotonVoiceStatsGui_t962969BCDF9F121E9BB3D9EDC106CE074DE66D6C* __this, int32_t ___0_windowId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077174D238DA7DFDB454D547A055E7072B64BB8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D8E0C4E7C6774193F51AC5E0BA8EB39587302CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ABBA4A319AE2113068B5F1585697EEEBD4D6E68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2041DD87E40FF4B23D9550910DB36F409AD904D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E967EC47C0181B3A2E25F28AF8F0061B4E2A296);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353F030C7133A5FA9805808B0E231960C4B7DA87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C550D612379916935E4282D434E4EA23536FCB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DB64990F3C0419D770F2F59CBA7371DAAB819BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7043549454391529898AE7C2DCFB5D44B85F92D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793A42BFC478A0C4DC544E915AF20BE5648D6F65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79E4269E60EB210270327E4E447DBFFC931523EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E64342724123AE2D7BA294CBE7BE933FC3BDF9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA65FFD9D9EC7098F16777565B3FCE05AEBFCDC98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA04E9B69AE9502D4E2755F60981654299EA47B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB654DC6E6829721C44D5C02AF79359CB2E53232);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* V_1 = NULL;
	int64_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		// bool statsToLog = false;
		V_0 = (bool)0;
		// TrafficStatsGameLevel gls = this.peer.TrafficStatsGameLevel;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0 = __this->___peer_12;
		NullCheck(L_0);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_1;
		L_1 = PhotonPeer_get_TrafficStatsGameLevel_m83D92F2C803367552F09AD55007BAD250309ED27_inline(L_0, NULL);
		V_1 = L_1;
		// long elapsedMs = this.peer.TrafficStatsElapsedMs / 1000;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_2 = __this->___peer_12;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = PhotonPeer_get_TrafficStatsElapsedMs_mF57D01ADE9E6A2A552F57139CDF482723420589B(L_2, NULL);
		V_2 = ((int64_t)(L_3/((int64_t)((int32_t)1000))));
		// if (elapsedMs == 0)
		int64_t L_4 = V_2;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		// elapsedMs = 1;
		V_2 = ((int64_t)1);
	}

IL_0027:
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_5, NULL);
		// this.buttonsOn = GUILayout.Toggle(this.buttonsOn, "buttons");
		bool L_6 = __this->___buttonsOn_8;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_7;
		L_7 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_8;
		L_8 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_6, _stringLiteral2E967EC47C0181B3A2E25F28AF8F0061B4E2A296, L_7, NULL);
		__this->___buttonsOn_8 = L_8;
		// this.healthStatsVisible = GUILayout.Toggle(this.healthStatsVisible, "health");
		bool L_9 = __this->___healthStatsVisible_6;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_10;
		L_10 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_11;
		L_11 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_9, _stringLiteralA65FFD9D9EC7098F16777565B3FCE05AEBFCDC98, L_10, NULL);
		__this->___healthStatsVisible_6 = L_11;
		// this.trafficStatsOn = GUILayout.Toggle(this.trafficStatsOn, "traffic");
		bool L_12 = __this->___trafficStatsOn_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13;
		L_13 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_14;
		L_14 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_12, _stringLiteralBA04E9B69AE9502D4E2755F60981654299EA47B1, L_13, NULL);
		__this->___trafficStatsOn_7 = L_14;
		// this.voiceStatsOn = GUILayout.Toggle(this.voiceStatsOn, "voice stats");
		bool L_15 = __this->___voiceStatsOn_9;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_16;
		L_16 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_17;
		L_17 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_15, _stringLiteral7043549454391529898AE7C2DCFB5D44B85F92D9, L_16, NULL);
		__this->___voiceStatsOn_9 = L_17;
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// string total = string.Format("Out {0,4} | In {1,4} | Sum {2,4}", gls.TotalOutgoingMessageCount, gls.TotalIncomingMessageCount, gls.TotalMessageCount);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mBD769AE99A34702FEA80F6BC9D79542F0992DC4C(L_18, NULL);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = TrafficStatsGameLevel_get_TotalIncomingMessageCount_m13EB9EE2F58AE4A8884589ECB6C06D176B74A326(L_22, NULL);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = TrafficStatsGameLevel_get_TotalMessageCount_mA6B693C4265A9680FBD12F6259A3BB050B985CF2(L_26, NULL);
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403, L_21, L_25, L_29, NULL);
		V_3 = L_30;
		// string elapsedTime = string.Format("{0}sec average:", elapsedMs);
		int64_t L_31 = V_2;
		int64_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1ABBA4A319AE2113068B5F1585697EEEBD4D6E68, L_33, NULL);
		V_4 = L_34;
		// string average = string.Format("Out {0,4} | In {1,4} | Sum {2,4}", gls.TotalOutgoingMessageCount / elapsedMs, gls.TotalIncomingMessageCount / elapsedMs, gls.TotalMessageCount / elapsedMs);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mBD769AE99A34702FEA80F6BC9D79542F0992DC4C(L_35, NULL);
		int64_t L_37 = V_2;
		int64_t L_38 = ((int64_t)(((int64_t)L_36)/L_37));
		RuntimeObject* L_39 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_38);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = TrafficStatsGameLevel_get_TotalIncomingMessageCount_m13EB9EE2F58AE4A8884589ECB6C06D176B74A326(L_40, NULL);
		int64_t L_42 = V_2;
		int64_t L_43 = ((int64_t)(((int64_t)L_41)/L_42));
		RuntimeObject* L_44 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_43);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = TrafficStatsGameLevel_get_TotalMessageCount_mA6B693C4265A9680FBD12F6259A3BB050B985CF2(L_45, NULL);
		int64_t L_47 = V_2;
		int64_t L_48 = ((int64_t)(((int64_t)L_46)/L_47));
		RuntimeObject* L_49 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50;
		L_50 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403, L_39, L_44, L_49, NULL);
		V_5 = L_50;
		// GUILayout.Label(total);
		String_t* L_51 = V_3;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_52;
		L_52 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_51, L_52, NULL);
		// GUILayout.Label(elapsedTime);
		String_t* L_53 = V_4;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_54;
		L_54 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_53, L_54, NULL);
		// GUILayout.Label(average);
		String_t* L_55 = V_5;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_56;
		L_56 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_55, L_56, NULL);
		// if (this.buttonsOn)
		bool L_57 = __this->___buttonsOn_8;
		if (!L_57)
		{
			goto IL_01a3;
		}
	}
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_58;
		L_58 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_58, NULL);
		// this.statsOn = GUILayout.Toggle(this.statsOn, "stats on");
		bool L_59 = __this->___statsOn_5;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_60;
		L_60 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_61;
		L_61 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_59, _stringLiteral4DB64990F3C0419D770F2F59CBA7371DAAB819BE, L_60, NULL);
		__this->___statsOn_5 = L_61;
		// if (GUILayout.Button("Reset"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_62;
		L_62 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_63;
		L_63 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, L_62, NULL);
		if (!L_63)
		{
			goto IL_018e;
		}
	}
	{
		// this.peer.TrafficStatsReset();
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_64 = __this->___peer_12;
		NullCheck(L_64);
		PhotonPeer_TrafficStatsReset_m2A7C38F51A95521B3F4A707A24E92C06BAFC3AFD(L_64, NULL);
		// this.peer.TrafficStatsEnabled = true;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_65 = __this->___peer_12;
		NullCheck(L_65);
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_65, (bool)1, NULL);
	}

IL_018e:
	{
		// statsToLog = GUILayout.Button("To Log");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_66;
		L_66 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_67;
		L_67 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral793A42BFC478A0C4DC544E915AF20BE5648D6F65, L_66, NULL);
		V_0 = L_67;
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
	}

IL_01a3:
	{
		// string trafficStatsIn = string.Empty;
		String_t* L_68 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_6 = L_68;
		// string trafficStatsOut = string.Empty;
		String_t* L_69 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_7 = L_69;
		// if (this.trafficStatsOn)
		bool L_70 = __this->___trafficStatsOn_7;
		if (!L_70)
		{
			goto IL_020e;
		}
	}
	{
		// GUILayout.Box("Voice Client Traffic Stats");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_71;
		L_71 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Box_m4CEFB7550F94CA85459CEACB810E9F99C7451456(_stringLiteral353F030C7133A5FA9805808B0E231960C4B7DA87, L_71, NULL);
		// trafficStatsIn = string.Concat("Incoming: \n", this.peer.TrafficStatsIncoming);
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_72 = __this->___peer_12;
		NullCheck(L_72);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_73;
		L_73 = PhotonPeer_get_TrafficStatsIncoming_mFBFFDE72C315515EF874F92B67D135BEEE3E67D9_inline(L_72, NULL);
		String_t* L_74;
		L_74 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral2041DD87E40FF4B23D9550910DB36F409AD904D2, L_73, NULL);
		V_6 = L_74;
		// trafficStatsOut = string.Concat("Outgoing: \n", this.peer.TrafficStatsOutgoing);
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_75 = __this->___peer_12;
		NullCheck(L_75);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_76;
		L_76 = PhotonPeer_get_TrafficStatsOutgoing_mDD70068CDA34548046EF39295A045E978315AADE_inline(L_75, NULL);
		String_t* L_77;
		L_77 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteralBB654DC6E6829721C44D5C02AF79359CB2E53232, L_76, NULL);
		V_7 = L_77;
		// GUILayout.Label(trafficStatsIn);
		String_t* L_78 = V_6;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_79;
		L_79 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_78, L_79, NULL);
		// GUILayout.Label(trafficStatsOut);
		String_t* L_80 = V_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_81;
		L_81 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_80, L_81, NULL);
	}

IL_020e:
	{
		// string healthStats = string.Empty;
		String_t* L_82 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_8 = L_82;
		// if (this.healthStatsVisible)
		bool L_83 = __this->___healthStatsVisible_6;
		if (!L_83)
		{
			goto IL_0303;
		}
	}
	{
		// GUILayout.Box("Voice Client Health Stats");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_84;
		L_84 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Box_m4CEFB7550F94CA85459CEACB810E9F99C7451456(_stringLiteral79E4269E60EB210270327E4E447DBFFC931523EA, L_84, NULL);
		// healthStats = string.Format(
		//     "ping: {6}|{9}[+/-{7}|{10}]ms resent:{8} \n\nmax ms between\nsend: {0,4} \ndispatch: {1,4} \n\nlongest dispatch for: \nev({3}):{2,3}ms \nop({5}):{4,3}ms",
		//     gls.LongestDeltaBetweenSending,
		//     gls.LongestDeltaBetweenDispatching,
		//     gls.LongestEventCallback,
		//     gls.LongestEventCallbackCode,
		//     gls.LongestOpResponseCallback,
		//     gls.LongestOpResponseCallbackOpCode,
		//     this.peer.RoundTripTime,
		//     this.peer.RoundTripTimeVariance,
		//     this.peer.ResentReliableCommands,
		//     this.voiceClient.RoundTripTime,
		//     this.voiceClient.RoundTripTimeVariance);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = L_85;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_87 = V_1;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline(L_87, NULL);
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_89);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_90);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_90);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_86;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_92 = V_1;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline(L_92, NULL);
		int32_t L_94 = L_93;
		RuntimeObject* L_95 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_94);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_95);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_91;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_97 = V_1;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline(L_97, NULL);
		int32_t L_99 = L_98;
		RuntimeObject* L_100 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_99);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_100);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_100);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_101 = L_96;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_102 = V_1;
		NullCheck(L_102);
		uint8_t L_103;
		L_103 = TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline(L_102, NULL);
		uint8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_104);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_105);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_105);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = L_101;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_107 = V_1;
		NullCheck(L_107);
		int32_t L_108;
		L_108 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline(L_107, NULL);
		int32_t L_109 = L_108;
		RuntimeObject* L_110 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_109);
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_110);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_110);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_111 = L_106;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_112 = V_1;
		NullCheck(L_112);
		uint8_t L_113;
		L_113 = TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline(L_112, NULL);
		uint8_t L_114 = L_113;
		RuntimeObject* L_115 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_114);
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, L_115);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_115);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_116 = L_111;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_117 = __this->___peer_12;
		NullCheck(L_117);
		int32_t L_118;
		L_118 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_117, NULL);
		int32_t L_119 = L_118;
		RuntimeObject* L_120 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_119);
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, L_120);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_120);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_121 = L_116;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_122 = __this->___peer_12;
		NullCheck(L_122);
		int32_t L_123;
		L_123 = PhotonPeer_get_RoundTripTimeVariance_mEB905CCB7BECBD67C8B6BB183F9DF019332F0BCA(L_122, NULL);
		int32_t L_124 = L_123;
		RuntimeObject* L_125 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_124);
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, L_125);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_125);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_126 = L_121;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_127 = __this->___peer_12;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = PhotonPeer_get_ResentReliableCommands_mAEADAB3CEF280037F2208E8969C9E6626973FD87(L_127, NULL);
		int32_t L_129 = L_128;
		RuntimeObject* L_130 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_126);
		ArrayElementTypeCheck (L_126, L_130);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_130);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_131 = L_126;
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_132 = __this->___voiceClient_14;
		NullCheck(L_132);
		int32_t L_133;
		L_133 = VoiceClient_get_RoundTripTime_m6DD2EF8C9166757654EEA55527B926EA316A89FB_inline(L_132, NULL);
		int32_t L_134 = L_133;
		RuntimeObject* L_135 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_134);
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, L_135);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_135);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_136 = L_131;
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_137 = __this->___voiceClient_14;
		NullCheck(L_137);
		int32_t L_138;
		L_138 = VoiceClient_get_RoundTripTimeVariance_mC8EFB27305D471D6BFEDA798F1593423D71588DC_inline(L_137, NULL);
		int32_t L_139 = L_138;
		RuntimeObject* L_140 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_139);
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, L_140);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_140);
		String_t* L_141;
		L_141 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral8E64342724123AE2D7BA294CBE7BE933FC3BDF9D, L_136, NULL);
		V_8 = L_141;
		// GUILayout.Label(healthStats);
		String_t* L_142 = V_8;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_143;
		L_143 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_142, L_143, NULL);
	}

IL_0303:
	{
		// string voiceStats = string.Empty;
		String_t* L_144 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		// if (this.voiceStatsOn)
		bool L_145 = __this->___voiceStatsOn_9;
		if (!L_145)
		{
			goto IL_03c2;
		}
	}
	{
		// GUILayout.Box("Voice Frames Stats");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_146;
		L_146 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Box_m4CEFB7550F94CA85459CEACB810E9F99C7451456(_stringLiteral0D8E0C4E7C6774193F51AC5E0BA8EB39587302CA, L_146, NULL);
		// voiceStats = string.Format("received: {0}, {1:F2}/s \n\nlost: {2}, {3:F2}/s ({4:F2}%) \n\nsent: {5} ({6} bytes)",
		//     this.voiceClient.FramesReceived,
		//     this.voiceConnection.FramesReceivedPerSecond,
		//     this.voiceClient.FramesLost,
		//     this.voiceConnection.FramesLostPerSecond,
		//     this.voiceConnection.FramesLostPercent,
		//     this.voiceClient.FramesSent,
		//     this.voiceClient.FramesSentBytes);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_147 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_148 = L_147;
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_149 = __this->___voiceClient_14;
		NullCheck(L_149);
		int32_t L_150;
		L_150 = VoiceClient_get_FramesReceived_m9AB529352DA8F1C9A7FBEB4FE109D0CAEE6C440A_inline(L_149, NULL);
		int32_t L_151 = L_150;
		RuntimeObject* L_152 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_151);
		NullCheck(L_148);
		ArrayElementTypeCheck (L_148, L_152);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_152);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_153 = L_148;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_154 = __this->___voiceConnection_13;
		NullCheck(L_154);
		float L_155;
		L_155 = VoiceConnection_get_FramesReceivedPerSecond_mECC359139BD873D38F094E8AFFE809E0680A87B8_inline(L_154, NULL);
		float L_156 = L_155;
		RuntimeObject* L_157 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_156);
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, L_157);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_157);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_158 = L_153;
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_159 = __this->___voiceClient_14;
		NullCheck(L_159);
		int32_t L_160;
		L_160 = VoiceClient_get_FramesLost_m98466CCB14660851F20F985C1074A16BD49CBFDA_inline(L_159, NULL);
		int32_t L_161 = L_160;
		RuntimeObject* L_162 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_161);
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_162);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_162);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_163 = L_158;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_164 = __this->___voiceConnection_13;
		NullCheck(L_164);
		float L_165;
		L_165 = VoiceConnection_get_FramesLostPerSecond_m33865CCF5C89832C20A8F87101080FD73621DB13_inline(L_164, NULL);
		float L_166 = L_165;
		RuntimeObject* L_167 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_166);
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_167);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_167);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_168 = L_163;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_169 = __this->___voiceConnection_13;
		NullCheck(L_169);
		float L_170;
		L_170 = VoiceConnection_get_FramesLostPercent_m792583A111A2B9CEFDF6CCD5EB20CE60C7BB7197_inline(L_169, NULL);
		float L_171 = L_170;
		RuntimeObject* L_172 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_171);
		NullCheck(L_168);
		ArrayElementTypeCheck (L_168, L_172);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_172);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_173 = L_168;
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_174 = __this->___voiceClient_14;
		NullCheck(L_174);
		int32_t L_175;
		L_175 = VoiceClient_get_FramesSent_m1BA3241254EDE469FDF70CB4B5A7D3483CF81B3E(L_174, NULL);
		int32_t L_176 = L_175;
		RuntimeObject* L_177 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_176);
		NullCheck(L_173);
		ArrayElementTypeCheck (L_173, L_177);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_177);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_178 = L_173;
		VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* L_179 = __this->___voiceClient_14;
		NullCheck(L_179);
		int32_t L_180;
		L_180 = VoiceClient_get_FramesSentBytes_mAE278DF31CF670B1E58EB0261FE61F290FDC5150(L_179, NULL);
		int32_t L_181 = L_180;
		RuntimeObject* L_182 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_181);
		NullCheck(L_178);
		ArrayElementTypeCheck (L_178, L_182);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_182);
		String_t* L_183;
		L_183 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral077174D238DA7DFDB454D547A055E7072B64BB8D, L_178, NULL);
		// GUILayout.Label(voiceStats);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_184;
		L_184 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_183, L_184, NULL);
	}

IL_03c2:
	{
		// if (statsToLog)
		bool L_185 = V_0;
		if (!L_185)
		{
			goto IL_03f7;
		}
	}
	{
		// string complete = string.Format("{0}\n{1}\n{2}\n{3}\n{4}\n{5}", total, elapsedTime, average, trafficStatsIn, trafficStatsOut, healthStats);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_186 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_187 = L_186;
		String_t* L_188 = V_3;
		NullCheck(L_187);
		ArrayElementTypeCheck (L_187, L_188);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_188);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_189 = L_187;
		String_t* L_190 = V_4;
		NullCheck(L_189);
		ArrayElementTypeCheck (L_189, L_190);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_190);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_191 = L_189;
		String_t* L_192 = V_5;
		NullCheck(L_191);
		ArrayElementTypeCheck (L_191, L_192);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_192);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_193 = L_191;
		String_t* L_194 = V_6;
		NullCheck(L_193);
		ArrayElementTypeCheck (L_193, L_194);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_194);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_195 = L_193;
		String_t* L_196 = V_7;
		NullCheck(L_195);
		ArrayElementTypeCheck (L_195, L_196);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_196);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_197 = L_195;
		String_t* L_198 = V_8;
		NullCheck(L_197);
		ArrayElementTypeCheck (L_197, L_198);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_198);
		String_t* L_199;
		L_199 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral4C550D612379916935E4282D434E4EA23536FCB6, L_197, NULL);
		// Debug.Log(complete);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_199, NULL);
	}

IL_03f7:
	{
		// if (GUI.changed)
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_200;
		L_200 = GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448(NULL);
		if (!L_200)
		{
			goto IL_040e;
		}
	}
	{
		// this.statsRect.height = 100;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_201 = (&__this->___statsRect_10);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_201, (100.0f), NULL);
	}

IL_040e:
	{
		// GUI.DragWindow();
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DragWindow_m4DEBB036044B4C24727E8794716C6727C1E7DABB(NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceStatsGui__ctor_mD5C775C32E2D9EA081752DC8AA3CB354CD73DA98 (PhotonVoiceStatsGui_t962969BCDF9F121E9BB3D9EDC106CE074DE66D6C* __this, const RuntimeMethod* method) 
{
	{
		// private bool statsWindowOn = true;
		__this->___statsWindowOn_4 = (bool)1;
		// private bool voiceStatsOn = true;
		__this->___voiceStatsOn_9 = (bool)1;
		// private Rect statsRect = new Rect(0, 100, 300, 50);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (100.0f), (300.0f), (50.0f), /*hidden argument*/NULL);
		__this->___statsRect_10 = L_0;
		// private int windowId = 200;
		__this->___windowId_11 = ((int32_t)200);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveIncomingStreamToFile_Awake_m488EC6BF522F8E701641E79182BC5159D2459BBD (SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveIncomingStreamToFile_OnRemoteVoiceAdded_m0ED7856BAFC5671876C3837F9A0570D8C8AE7A0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveIncomingStreamToFile_OnSpeakerLinked_m441F4227F7F6CB31C0C5DA87B1EC134BA05B1AAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		VoiceComponent_Awake_m6AC34084B90505F4064B4CDE0671C36B3538DFF0(__this, NULL);
		// this.voiceConnection = this.GetComponent<VoiceConnection>();
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0;
		L_0 = Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4(__this, Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var);
		__this->___voiceConnection_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceConnection_7), (void*)L_0);
		// this.voiceConnection.RemoteVoiceAdded += this.OnRemoteVoiceAdded;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_1 = __this->___voiceConnection_7;
		Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* L_2 = (Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3*)il2cpp_codegen_object_new(Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mB3E258E7E69A94ABCD9F825A08390A0A0F894CBC(L_2, __this, (intptr_t)((void*)SaveIncomingStreamToFile_OnRemoteVoiceAdded_m0ED7856BAFC5671876C3837F9A0570D8C8AE7A0B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		VoiceConnection_add_RemoteVoiceAdded_mD443595196101F37DCA64BECD59E820CB96A687E(L_1, L_2, NULL);
		// this.voiceConnection.SpeakerLinked += this.OnSpeakerLinked;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_3 = __this->___voiceConnection_7;
		Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* L_4 = (Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229*)il2cpp_codegen_object_new(Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m38EDB08C8F1E0C25255FB4492C6F311B1CD6B80B(L_4, __this, (intptr_t)((void*)SaveIncomingStreamToFile_OnSpeakerLinked_m441F4227F7F6CB31C0C5DA87B1EC134BA05B1AAD_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VoiceConnection_add_SpeakerLinked_m77B3E5CCAF4E798E02C8C40E7178AF1740E01588(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::OnSpeakerLinked(Photon.Voice.Unity.Speaker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveIncomingStreamToFile_OnSpeakerLinked_m441F4227F7F6CB31C0C5DA87B1EC134BA05B1AAD (SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_speaker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.muteLocalSpeaker && speaker.Actor != null && speaker.Actor.IsLocal)
		bool L_0 = __this->___muteLocalSpeaker_8;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_1 = ___0_speaker;
		NullCheck(L_1);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2;
		L_2 = Speaker_get_Actor_mAEC193A7C7DBD50082AAF9AEC7553B9774D66347_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_3 = ___0_speaker;
		NullCheck(L_3);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4;
		L_4 = Speaker_get_Actor_mAEC193A7C7DBD50082AAF9AEC7553B9774D66347_inline(L_3, NULL);
		NullCheck(L_4);
		bool L_5 = L_4->___IsLocal_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// AudioSource audioSource = speaker.GetComponent<AudioSource>();
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_6 = ___0_speaker;
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_6, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// audioSource.mute = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = L_7;
		NullCheck(L_8);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_8, (bool)1, NULL);
		// audioSource.volume = 0f;
		NullCheck(L_8);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_8, (0.0f), NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveIncomingStreamToFile_OnDestroy_m2F0342BAC2242EB27A89BF2A544C2237739A2928 (SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveIncomingStreamToFile_OnRemoteVoiceAdded_m0ED7856BAFC5671876C3837F9A0570D8C8AE7A0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveIncomingStreamToFile_OnSpeakerLinked_m441F4227F7F6CB31C0C5DA87B1EC134BA05B1AAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.voiceConnection.SpeakerLinked -= this.OnSpeakerLinked;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = __this->___voiceConnection_7;
		Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* L_1 = (Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229*)il2cpp_codegen_object_new(Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m38EDB08C8F1E0C25255FB4492C6F311B1CD6B80B(L_1, __this, (intptr_t)((void*)SaveIncomingStreamToFile_OnSpeakerLinked_m441F4227F7F6CB31C0C5DA87B1EC134BA05B1AAD_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VoiceConnection_remove_SpeakerLinked_m92F1AE6FFC2A3DDDBDB209A8E9EBA526FC1302FE(L_0, L_1, NULL);
		// this.voiceConnection.RemoteVoiceAdded -= this.OnRemoteVoiceAdded;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_2 = __this->___voiceConnection_7;
		Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* L_3 = (Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3*)il2cpp_codegen_object_new(Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mB3E258E7E69A94ABCD9F825A08390A0A0F894CBC(L_3, __this, (intptr_t)((void*)SaveIncomingStreamToFile_OnRemoteVoiceAdded_m0ED7856BAFC5671876C3837F9A0570D8C8AE7A0B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VoiceConnection_remove_RemoteVoiceAdded_mFE42438A9C4E19E74A28C2AA6627F75A3AB6916A(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::OnRemoteVoiceAdded(Photon.Voice.Unity.RemoteVoiceLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveIncomingStreamToFile_OnRemoteVoiceAdded_m0ED7856BAFC5671876C3837F9A0570D8C8AE7A0B (SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* __this, RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___0_remoteVoiceLink, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__0_m3265BAEC06460A39E134CEDAF92D4AD8DC4232D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__1_m88401E3EF635535CE178EFFAE5FAC1F98062DE3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7214EDF0F370FC5EBF669847A3589BA398359C0);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* L_0 = (U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m674636F2008E053FC99AC725DA4BF6FA34A42389(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// int bitsPerSample = 32;
		V_1 = ((int32_t)32);
		// string filePath = this.GetFilePath(remoteVoiceLink);
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_2 = ___0_remoteVoiceLink;
		String_t* L_3;
		L_3 = SaveIncomingStreamToFile_GetFilePath_mA70252DBA0AAC7B473BC0358B5B9403CE7C19C5E(__this, L_2, NULL);
		V_2 = L_3;
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_4;
		L_4 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VoiceLogger_get_IsInfoEnabled_mA9FF618D95ECF73C1798A3F415025CBCAB2985F0(L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// this.Logger.LogInfo("Incoming stream, output file path: {0}", filePath);
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_6;
		L_6 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_6);
		VoiceLogger_LogInfo_m49C8ED854791186E44F9413034BBEC9FC656778C(L_6, _stringLiteralA7214EDF0F370FC5EBF669847A3589BA398359C0, L_8, NULL);
	}

IL_003f:
	{
		// WaveWriter waveWriter = new WaveWriter(filePath, new WaveFormat(remoteVoiceLink.Info.SamplingRate, bitsPerSample, remoteVoiceLink.Info.Channels));
		U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* L_10 = V_0;
		String_t* L_11 = V_2;
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_12 = ___0_remoteVoiceLink;
		NullCheck(L_12);
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_13;
		L_13 = RemoteVoiceLink_get_Info_m6CC9ECE02C7B8FF1254B732EA00857A03F9B869A_inline(L_12, NULL);
		V_3 = L_13;
		int32_t L_14;
		L_14 = VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8_inline((&V_3), NULL);
		int32_t L_15 = V_1;
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_16 = ___0_remoteVoiceLink;
		NullCheck(L_16);
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_17;
		L_17 = RemoteVoiceLink_get_Info_m6CC9ECE02C7B8FF1254B732EA00857A03F9B869A_inline(L_16, NULL);
		V_3 = L_17;
		int32_t L_18;
		L_18 = VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0_inline((&V_3), NULL);
		WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146* L_19 = (WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146*)il2cpp_codegen_object_new(WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WaveFormat__ctor_m8F0288B4F0186E4530C431B50DFCCA036032E6D3(L_19, L_14, L_15, L_18, NULL);
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_20 = (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC*)il2cpp_codegen_object_new(WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaveWriter__ctor_m3B4A2A15DB7965DCF426C3AB655C557C31C960FF(L_20, L_11, L_19, NULL);
		NullCheck(L_10);
		L_10->___waveWriter_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___waveWriter_0), (void*)L_20);
		// remoteVoiceLink.FloatFrameDecoded += f => { waveWriter.WriteSamples(f.Buf, 0, f.Buf.Length); };
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_21 = ___0_remoteVoiceLink;
		U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* L_22 = V_0;
		Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84* L_23 = (Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84*)il2cpp_codegen_object_new(Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mEC461CE983739CB41BB6A618F1882B8BC3E6CC8A(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__0_m3265BAEC06460A39E134CEDAF92D4AD8DC4232D3_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		RemoteVoiceLink_add_FloatFrameDecoded_m19466075C1748E8B67D2A215B88788F04E8486C6(L_21, L_23, NULL);
		// remoteVoiceLink.RemoteVoiceRemoved += () =>
		// {
		//     if (this.Logger.IsInfoEnabled)
		//     {
		//         this.Logger.LogInfo("Remote voice stream removed: Saving wav file.");
		//     }
		//     waveWriter.Dispose();
		// };
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_24 = ___0_remoteVoiceLink;
		U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* L_25 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__1_m88401E3EF635535CE178EFFAE5FAC1F98062DE3E_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		RemoteVoiceLink_add_RemoteVoiceRemoved_m185E928062DD66D6F6749C93932D7D8EAFAF0C76(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.String Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::GetFilePath(Photon.Voice.Unity.RemoteVoiceLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveIncomingStreamToFile_GetFilePath_mA70252DBA0AAC7B473BC0358B5B9403CE7C19C5E (SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* __this, RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___0_remoteVoiceLink, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEA1A0970ACC8C06E20112A27698F60D168A7C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD680EC91D800A9E1C79A33D5BDB7C6BCEB920660);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string filename = string.Format("in_{0}_{1}_{2}_{3}_{4}.wav",
		//     System.DateTime.UtcNow.ToString("yyyy-MM-dd_HH-mm-ss-ffff"), Random.Range(0, 1000),
		//     remoteVoiceLink.ChannelId, remoteVoiceLink.PlayerId, remoteVoiceLink.VoiceId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteralD680EC91D800A9E1C79A33D5BDB7C6BCEB920660, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)1000), NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_9 = ___0_remoteVoiceLink;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RemoteVoiceLink_get_ChannelId_mE7140A7A9DA0FCDC81B9A53B45F5FB10971A718D_inline(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_8;
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_14 = ___0_remoteVoiceLink;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RemoteVoiceLink_get_PlayerId_m931FD8F7C2A29025B7B00F13A9D2AAEC8AABE6F5_inline(L_14, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_19 = ___0_remoteVoiceLink;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = RemoteVoiceLink_get_VoiceId_mA249081E4DC6B45043B3021BAD9B289A29F9DF95_inline(L_19, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralBEA1A0970ACC8C06E20112A27698F60D168A7C87, L_18, NULL);
		V_0 = L_23;
		// return Path.Combine(Application.persistentDataPath, filename);
		String_t* L_24;
		L_24 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_24, L_25, NULL);
		return L_26;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveIncomingStreamToFile__ctor_m7A322CCD5CF2F9480D516E63E4151C6EC41A9D00 (SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* __this, const RuntimeMethod* method) 
{
	{
		VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58(__this, NULL);
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m674636F2008E053FC99AC725DA4BF6FA34A42389 (U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::<OnRemoteVoiceAdded>b__0(Photon.Voice.FrameOut`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__0_m3265BAEC06460A39E134CEDAF92D4AD8DC4232D3 (U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* __this, FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D* ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remoteVoiceLink.FloatFrameDecoded += f => { waveWriter.WriteSamples(f.Buf, 0, f.Buf.Length); };
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = __this->___waveWriter_0;
		FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D* L_1 = ___0_f;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_inline(L_1, FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_RuntimeMethod_var);
		FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D* L_3 = ___0_f;
		NullCheck(L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4;
		L_4 = FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_inline(L_3, FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_RuntimeMethod_var);
		NullCheck(L_4);
		NullCheck(L_0);
		WaveWriter_WriteSamples_m359C3DCDB8BDFB4DFCF53FDC9921D22F03F44312(L_0, L_2, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// remoteVoiceLink.FloatFrameDecoded += f => { waveWriter.WriteSamples(f.Buf, 0, f.Buf.Length); };
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::<OnRemoteVoiceAdded>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__1_m88401E3EF635535CE178EFFAE5FAC1F98062DE3E (U3CU3Ec__DisplayClass5_0_t46AE92988E0BDA8774625E0089646C39E3EBD88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3A60FB7BA6A81ED481C7195C4CF91C4F128A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.Logger.IsInfoEnabled)
		SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_1;
		L_1 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VoiceLogger_get_IsInfoEnabled_mA9FF618D95ECF73C1798A3F415025CBCAB2985F0(L_1, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// this.Logger.LogInfo("Remote voice stream removed: Saving wav file.");
		SaveIncomingStreamToFile_t0385E8F44E71A21840BD97370164A61190C7DA5C* L_3 = __this->___U3CU3E4__this_1;
		NullCheck(L_3);
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_4;
		L_4 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(L_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		VoiceLogger_LogInfo_m49C8ED854791186E44F9413034BBEC9FC656778C(L_4, _stringLiteral2F3A60FB7BA6A81ED481C7195C4CF91C4F128A3F, L_5, NULL);
	}

IL_002c:
	{
		// waveWriter.Dispose();
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_6 = __this->___waveWriter_0;
		NullCheck(L_6);
		WaveWriter_Dispose_m1ED7AE773F5C7BE127E58FC1EB94F734F52E35B5(L_6, NULL);
		// };
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile::PhotonVoiceCreated(Photon.Voice.Unity.PhotonVoiceCreatedParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveOutgoingStreamToFile_PhotonVoiceCreated_mF4B16529C2FDA9F5053291B6C43D4C720CABFCBE (SaveOutgoingStreamToFile_t3F6C2F111CA7DB1E2904923ADF8943D2FF327FA2* __this, PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* ___0_photonVoiceCreatedParams, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_AddPreProcessor_m961793A8EF1CF5A31EFD070C3D1008F3C9E5F1A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_AddPreProcessor_mFA197377A98F6CBA3FD1F22CE9C4CD995303A5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1357DF6C7B3FCA812CB05B7B2AC92681A4D64610);
		s_Il2CppMethodInitialized = true;
	}
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// VoiceInfo voiceInfo = photonVoiceCreatedParams.Voice.Info;
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_0 = ___0_photonVoiceCreatedParams;
		NullCheck(L_0);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_1;
		L_1 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_0, NULL);
		NullCheck(L_1);
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_2;
		L_2 = LocalVoice_get_Info_mFCD2D5AC24454B0E5B0538EE171756EF90F2E938_inline(L_1, NULL);
		V_0 = L_2;
		// int bitsPerSample = 32;
		V_1 = ((int32_t)32);
		// if (photonVoiceCreatedParams.Voice is LocalVoiceAudioShort)
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_3 = ___0_photonVoiceCreatedParams;
		NullCheck(L_3);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_4;
		L_4 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_3, NULL);
		if (!((LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8*)IsInstClass((RuntimeObject*)L_4, LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		// bitsPerSample = 16;
		V_1 = ((int32_t)16);
	}

IL_001f:
	{
		// string filePath = this.GetFilePath();
		String_t* L_5;
		L_5 = SaveOutgoingStreamToFile_GetFilePath_mDB517C829E4480DEB80E0F5EC3F38AAF66D9B6EB(__this, NULL);
		V_2 = L_5;
		// this.wavWriter = new WaveWriter(filePath, new WaveFormat(voiceInfo.SamplingRate, bitsPerSample, voiceInfo.Channels));
		String_t* L_6 = V_2;
		int32_t L_7;
		L_7 = VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8_inline((&V_0), NULL);
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0_inline((&V_0), NULL);
		WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146* L_10 = (WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146*)il2cpp_codegen_object_new(WaveFormat_t7D2624A18D0C8EECAE5E8D67925BE65420A53146_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaveFormat__ctor_m8F0288B4F0186E4530C431B50DFCCA036032E6D3(L_10, L_7, L_8, L_9, NULL);
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_11 = (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC*)il2cpp_codegen_object_new(WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaveWriter__ctor_m3B4A2A15DB7965DCF426C3AB655C557C31C960FF(L_11, L_6, L_10, NULL);
		__this->___wavWriter_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wavWriter_7), (void*)L_11);
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_12;
		L_12 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VoiceLogger_get_IsInfoEnabled_mA9FF618D95ECF73C1798A3F415025CBCAB2985F0(L_12, NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		// this.Logger.LogInfo("Outgoing stream, output file path: {0}", filePath);
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_14;
		L_14 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		String_t* L_17 = V_2;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		NullCheck(L_14);
		VoiceLogger_LogInfo_m49C8ED854791186E44F9413034BBEC9FC656778C(L_14, _stringLiteral1357DF6C7B3FCA812CB05B7B2AC92681A4D64610, L_16, NULL);
	}

IL_006d:
	{
		// if (photonVoiceCreatedParams.Voice is LocalVoiceAudioFloat)
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_18 = ___0_photonVoiceCreatedParams;
		NullCheck(L_18);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_19;
		L_19 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_18, NULL);
		if (!((LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9*)IsInstClass((RuntimeObject*)L_19, LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var)))
		{
			goto IL_009f;
		}
	}
	{
		// LocalVoiceAudioFloat localVoiceAudioFloat = photonVoiceCreatedParams.Voice as LocalVoiceAudioFloat;
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_20 = ___0_photonVoiceCreatedParams;
		NullCheck(L_20);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_21;
		L_21 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_20, NULL);
		// localVoiceAudioFloat.AddPreProcessor(new OutgoingStreamSaverFloat(this.wavWriter));
		IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* L_22 = (IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147*)(IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147*)SZArrayNew(IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147_il2cpp_TypeInfo_var, (uint32_t)1);
		IProcessor_1U5BU5D_t4489D87F9BE5F6BA2448AAE87280B23C8585C147* L_23 = L_22;
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_24 = __this->___wavWriter_7;
		OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72* L_25 = (OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72*)il2cpp_codegen_object_new(OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		OutgoingStreamSaverFloat__ctor_m90745B9DEFB9A7C4396AA4E63644713078570E55(L_25, L_24, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		NullCheck(((LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9*)IsInstClass((RuntimeObject*)L_21, LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var)));
		LocalVoiceFramed_1_AddPreProcessor_m961793A8EF1CF5A31EFD070C3D1008F3C9E5F1A8(((LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9*)IsInstClass((RuntimeObject*)L_21, LocalVoiceAudioFloat_t4C3D5671EC69E54F5FD784640E845E0C4CE59EA9_il2cpp_TypeInfo_var)), L_23, LocalVoiceFramed_1_AddPreProcessor_m961793A8EF1CF5A31EFD070C3D1008F3C9E5F1A8_RuntimeMethod_var);
		return;
	}

IL_009f:
	{
		// else if (photonVoiceCreatedParams.Voice is LocalVoiceAudioShort)
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_26 = ___0_photonVoiceCreatedParams;
		NullCheck(L_26);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_27;
		L_27 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_26, NULL);
		if (!((LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8*)IsInstClass((RuntimeObject*)L_27, LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var)))
		{
			goto IL_00d0;
		}
	}
	{
		// LocalVoiceAudioShort localVoiceAudioShort = photonVoiceCreatedParams.Voice as LocalVoiceAudioShort;
		PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* L_28 = ___0_photonVoiceCreatedParams;
		NullCheck(L_28);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_29;
		L_29 = PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline(L_28, NULL);
		// localVoiceAudioShort.AddPreProcessor(new OutgoingStreamSaverShort(this.wavWriter));
		IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* L_30 = (IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF*)(IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF*)SZArrayNew(IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF_il2cpp_TypeInfo_var, (uint32_t)1);
		IProcessor_1U5BU5D_tB97140E3248149AFBFD3EA7A2255773A7B0E83CF* L_31 = L_30;
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_32 = __this->___wavWriter_7;
		OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A* L_33 = (OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A*)il2cpp_codegen_object_new(OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		OutgoingStreamSaverShort__ctor_m9EDE7A94D023B9E653E4C604315E59C85DFBA190(L_33, L_32, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
		NullCheck(((LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8*)IsInstClass((RuntimeObject*)L_29, LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var)));
		LocalVoiceFramed_1_AddPreProcessor_mFA197377A98F6CBA3FD1F22CE9C4CD995303A5E8(((LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8*)IsInstClass((RuntimeObject*)L_29, LocalVoiceAudioShort_t4C3D0F6249C3C253D6683E859234A5A8D9F538C8_il2cpp_TypeInfo_var)), L_31, LocalVoiceFramed_1_AddPreProcessor_mFA197377A98F6CBA3FD1F22CE9C4CD995303A5E8_RuntimeMethod_var);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.String Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile::GetFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveOutgoingStreamToFile_GetFilePath_mDB517C829E4480DEB80E0F5EC3F38AAF66D9B6EB (SaveOutgoingStreamToFile_t3F6C2F111CA7DB1E2904923ADF8943D2FF327FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF2B9E7C63E89FAEAFE528147912E448BC15ED61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD680EC91D800A9E1C79A33D5BDB7C6BCEB920660);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string filename = string.Format("out_{0}_{1}.wav", System.DateTime.UtcNow.ToString("yyyy-MM-dd_HH-mm-ss-ffff"), Random.Range(0, 1000));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteralD680EC91D800A9E1C79A33D5BDB7C6BCEB920660, NULL);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)1000), NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralCF2B9E7C63E89FAEAFE528147912E448BC15ED61, L_1, L_4, NULL);
		V_0 = L_5;
		// return Path.Combine(Application.persistentDataPath, filename);
		String_t* L_6;
		L_6 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile::PhotonVoiceRemoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveOutgoingStreamToFile_PhotonVoiceRemoved_m15E12CE64F2ADE8C0ACCE526990504C4F2DB2910 (SaveOutgoingStreamToFile_t3F6C2F111CA7DB1E2904923ADF8943D2FF327FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42385DE7EB765824B03D4240F5A98528E6D3B981);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.wavWriter.Dispose();
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = __this->___wavWriter_7;
		NullCheck(L_0);
		WaveWriter_Dispose_m1ED7AE773F5C7BE127E58FC1EB94F734F52E35B5(L_0, NULL);
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_1;
		L_1 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VoiceLogger_get_IsInfoEnabled_mA9FF618D95ECF73C1798A3F415025CBCAB2985F0(L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// this.Logger.LogInfo("Recording stopped: Saving wav file.");
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_3;
		L_3 = VoiceComponent_get_Logger_mDB2D7196AEA0AA8C4439968596D322698BF8557B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		VoiceLogger_LogInfo_m49C8ED854791186E44F9413034BBEC9FC656778C(L_3, _stringLiteral42385DE7EB765824B03D4240F5A98528E6D3B981, L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveOutgoingStreamToFile__ctor_mB36623985C112DA100954C05DBC662FDBD80C4BA (SaveOutgoingStreamToFile_t3F6C2F111CA7DB1E2904923ADF8943D2FF327FA2* __this, const RuntimeMethod* method) 
{
	{
		VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58(__this, NULL);
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::.ctor(CSCore.Codecs.WAV.WaveWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverFloat__ctor_m90745B9DEFB9A7C4396AA4E63644713078570E55 (OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72* __this, WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___0_waveWriter, const RuntimeMethod* method) 
{
	{
		// public OutgoingStreamSaverFloat(WaveWriter waveWriter)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.wavWriter = waveWriter;
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = ___0_waveWriter;
		__this->___wavWriter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wavWriter_0), (void*)L_0);
		// }
		return;
	}
}
// System.Single[] Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::Process(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* OutgoingStreamSaverFloat_Process_m4F73A719AA7CDA9C3286CC76B748FB2736E5AFCB (OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buf, const RuntimeMethod* method) 
{
	{
		// this.wavWriter.WriteSamples(buf, 0, buf.Length);
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = __this->___wavWriter_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_buf;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_buf;
		NullCheck(L_2);
		NullCheck(L_0);
		WaveWriter_WriteSamples_m359C3DCDB8BDFB4DFCF53FDC9921D22F03F44312(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		// return buf;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_buf;
		return L_3;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverFloat_Dispose_mE34C8F8B24D62B6DBFC58123560B90CB2E9B1E42 (OutgoingStreamSaverFloat_tADB526B9D7E1AD540D970BBD5392007559BDFB72* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.wavWriter.IsDisposed && !this.wavWriter.IsDisposing)
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = __this->___wavWriter_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = WaveWriter_get_IsDisposed_m64165D0BB7EFC2C8BD35FC61D3073C25CFA5C8C5_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_2 = __this->___wavWriter_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = WaveWriter_get_IsDisposing_mB0440545CD35198940020472DC6FCDD97D297620_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// this.wavWriter.Dispose();
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_4 = __this->___wavWriter_0;
		NullCheck(L_4);
		WaveWriter_Dispose_m1ED7AE773F5C7BE127E58FC1EB94F734F52E35B5(L_4, NULL);
	}

IL_0025:
	{
		// }
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::.ctor(CSCore.Codecs.WAV.WaveWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverShort__ctor_m9EDE7A94D023B9E653E4C604315E59C85DFBA190 (OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A* __this, WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* ___0_waveWriter, const RuntimeMethod* method) 
{
	{
		// public OutgoingStreamSaverShort(WaveWriter waveWriter)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.wavWriter = waveWriter;
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = ___0_waveWriter;
		__this->___wavWriter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wavWriter_0), (void*)L_0);
		// }
		return;
	}
}
// System.Int16[] Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::Process(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* OutgoingStreamSaverShort_Process_mE2A38470D2808A1BE2B47D6677CF639345376370 (OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_buf, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < buf.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// this.wavWriter.Write(buf[i]);
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = __this->___wavWriter_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___0_buf;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		WaveWriter_Write_mCB1ECA9A435809DF5623A8F324BFFA132996C7B2(L_0, L_4, NULL);
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_6 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___0_buf;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return buf;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = ___0_buf;
		return L_8;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverShort_Dispose_m264FD0D719B1DD529916DFB69064EDEBB9640BFB (OutgoingStreamSaverShort_t161D22714D0EDD2A3E2D369787DC42E0F5E0E48A* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.wavWriter.IsDisposed && !this.wavWriter.IsDisposing)
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_0 = __this->___wavWriter_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = WaveWriter_get_IsDisposed_m64165D0BB7EFC2C8BD35FC61D3073C25CFA5C8C5_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_2 = __this->___wavWriter_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = WaveWriter_get_IsDisposing_mB0440545CD35198940020472DC6FCDD97D297620_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// this.wavWriter.Dispose();
		WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* L_4 = __this->___wavWriter_0;
		NullCheck(L_4);
		WaveWriter_Dispose_m1ED7AE773F5C7BE127E58FC1EB94F734F52E35B5(L_4, NULL);
	}

IL_0025:
	{
		// }
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
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestTone_Start_mB8A5A8DAE84888596E4B67619A6E2B3258BF03CE (TestTone_t1D1F9761E194FB02D854D898340F9E3A84A3A61A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mB4C50BC933D594F749D7A62BFF9EA6E8362D54EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_m577C6752940D6CFACDF5FB47E784E754A67B5B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* G_B2_0 = NULL;
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* G_B2_1 = NULL;
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* G_B1_0 = NULL;
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* G_B1_1 = NULL;
	{
		// Recorder rec = this.gameObject.GetComponent<Recorder>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_1;
		L_1 = GameObject_GetComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mB4C50BC933D594F749D7A62BFF9EA6E8362D54EF(L_0, GameObject_GetComponent_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mB4C50BC933D594F749D7A62BFF9EA6E8362D54EF_RuntimeMethod_var);
		// rec.SourceType = Recorder.InputSourceType.Factory;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_2 = L_1;
		NullCheck(L_2);
		Recorder_set_SourceType_m2DBF84AF542E7662A4302A0D20399C7FC5E1E13D(L_2, 2, NULL);
		// rec.InputFactory = () =>
		// {
		//     return new ToneAudioReader();
		// };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var);
		Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* L_3 = ((U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var);
		U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC* L_5 = ((U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* L_6 = (Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68*)il2cpp_codegen_object_new(Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_1__ctor_m642C03B0FFBFB11F37FBF10A30C92712FEB07017(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_m577C6752940D6CFACDF5FB47E784E754A67B5B91_RuntimeMethod_var), NULL);
		Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* L_7 = L_6;
		((U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0031:
	{
		NullCheck(G_B2_1);
		Recorder_set_InputFactory_mD22EEE0D5522D5EE2977B86750E2911A2CFE5250(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestTone__ctor_mF62EDF8AB84B09AB5F4620DFF9091100F2EC7C79 (TestTone_t1D1F9761E194FB02D854D898340F9E3A84A3A61A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0099BE6979E70C95124E261FF67C062E3F3D5F3C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC* L_0 = (U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC*)il2cpp_codegen_object_new(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m85FFABB32BE7E098A924EC2D0F049E5353CE2543(L_0, NULL);
		((U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m85FFABB32BE7E098A924EC2D0F049E5353CE2543 (U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Photon.Voice.IAudioDesc Photon.Voice.Unity.UtilityScripts.TestTone/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CStartU3Eb__0_0_m577C6752940D6CFACDF5FB47E784E754A67B5B91 (U3CU3Ec_t83A73BE10F5BBEDFC5903686DCF1271245F28AAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ToneAudioReader();
		ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* L_0 = (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE*)il2cpp_codegen_object_new(ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ToneAudioReader__ctor_m9A2C23156D226E19443040D2CA9E07938BF53BAF(L_0, NULL);
		return L_0;
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
// System.Void Photon.Voice.Unity.UtilityScripts.ToneAudioReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToneAudioReader__ctor_m9A2C23156D226E19443040D2CA9E07938BF53BAF (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) 
{
	{
		// public ToneAudioReader()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.k = 2 * Math.PI * 440 / this.SamplingRate;
		int32_t L_0;
		L_0 = ToneAudioReader_get_SamplingRate_m51C930E459654E3215A15882B0B7CE51EF629836(__this, NULL);
		__this->___k_0 = ((double)((2764.6015351590181)/((double)L_0)));
		// }
		return;
	}
}
// System.Int32 Photon.Voice.Unity.UtilityScripts.ToneAudioReader::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToneAudioReader_get_Channels_m3ABD06F11576788437D9A366DB0E3938F6B90711 (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) 
{
	{
		// public int Channels { get { return 2; } }
		return 2;
	}
}
// System.Int32 Photon.Voice.Unity.UtilityScripts.ToneAudioReader::get_SamplingRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToneAudioReader_get_SamplingRate_m51C930E459654E3215A15882B0B7CE51EF629836 (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) 
{
	{
		// public int SamplingRate { get { return 24000; } }
		return ((int32_t)24000);
	}
}
// System.String Photon.Voice.Unity.UtilityScripts.ToneAudioReader::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToneAudioReader_get_Error_m5C32CF22254E0758AC374041443AC3E9C2151F3A (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.ToneAudioReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToneAudioReader_Dispose_m3165F4B0E65A569A4424BA98D581A6508DE51F84 (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.UtilityScripts.ToneAudioReader::Read(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToneAudioReader_Read_mFFF9547D6545897F364EC104C77723E5B5782003 (ToneAudioReader_t57A8507261BE57B68CD3E9224D25F5D2F52AA0BE* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59C4043917979C43B9A8A14EA8624587B909FD6B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var bufSamples = buf.Length / this.Channels;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_buf;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ToneAudioReader_get_Channels_m3ABD06F11576788437D9A366DB0E3938F6B90711(__this, NULL);
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))/L_1));
		// var t = (long)(AudioSettings.dspTime * this.SamplingRate);
		double L_2;
		L_2 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		int32_t L_3;
		L_3 = ToneAudioReader_get_SamplingRate_m51C930E459654E3215A15882B0B7CE51EF629836(__this, NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply(L_2, ((double)L_3))));
		// var deltaTimeSamples = t - this.timeSamples;
		int64_t L_4 = V_1;
		int64_t L_5 = __this->___timeSamples_1;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_4, L_5));
		// if (Math.Abs(deltaTimeSamples) > this.SamplingRate / 4) // when started or Read has not been called for a while
		int64_t L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = il2cpp_codegen_abs(L_6);
		int32_t L_8;
		L_8 = ToneAudioReader_get_SamplingRate_m51C930E459654E3215A15882B0B7CE51EF629836(__this, NULL);
		if ((((int64_t)L_7) <= ((int64_t)((int64_t)((int32_t)(L_8/4))))))
		{
			goto IL_0068;
		}
	}
	{
		// Debug.LogWarningFormat("ToneAudioReader sample time is out: {0} / {1}", this.timeSamples, t);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int64_t L_11 = __this->___timeSamples_1;
		int64_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		int64_t L_15 = V_1;
		int64_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteral59C4043917979C43B9A8A14EA8624587B909FD6B, L_14, NULL);
		// deltaTimeSamples = bufSamples;
		int32_t L_18 = V_0;
		V_2 = ((int64_t)L_18);
		// this.timeSamples = t - bufSamples;
		int64_t L_19 = V_1;
		int32_t L_20 = V_0;
		__this->___timeSamples_1 = ((int64_t)il2cpp_codegen_subtract(L_19, ((int64_t)L_20)));
	}

IL_0068:
	{
		// if (deltaTimeSamples < bufSamples)
		int64_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int64_t)L_21) >= ((int64_t)((int64_t)L_22))))
		{
			goto IL_006f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_006f:
	{
		// int x = 0;
		V_3 = 0;
		// for (int i = 0; i < bufSamples; i++)
		V_4 = 0;
		goto IL_00c5;
	}

IL_0076:
	{
		// var v = (float)Math.Sin(this.timeSamples++ * this.k) * 0.2f;
		int64_t L_23 = __this->___timeSamples_1;
		V_6 = L_23;
		int64_t L_24 = V_6;
		__this->___timeSamples_1 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
		int64_t L_25 = V_6;
		double L_26 = __this->___k_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = sin(((double)il2cpp_codegen_multiply(((double)L_25), L_26)));
		V_5 = ((float)il2cpp_codegen_multiply(((float)L_27), (0.200000003f)));
		// for (int j = 0; j < this.Channels; j++)
		V_7 = 0;
		goto IL_00b5;
	}

IL_00a6:
	{
		// buf[x++] = v;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = ___0_buf;
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		float L_31 = V_5;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (float)L_31);
		// for (int j = 0; j < this.Channels; j++)
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b5:
	{
		// for (int j = 0; j < this.Channels; j++)
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = ToneAudioReader_get_Channels_m3ABD06F11576788437D9A366DB0E3938F6B90711(__this, NULL);
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_00a6;
		}
	}
	{
		// for (int i = 0; i < bufSamples; i++)
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c5:
	{
		// for (int i = 0; i < bufSamples; i++)
		int32_t L_36 = V_4;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0076;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomOptions_set_PublishUserId_mCAF45915B1DDAEB11A590246792C64D5C27ADE82_inline (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CPublishUserIdU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_AmplificationFactor_m6E6A78940B81BC9035FAAC9FF6FB8679D5CAE954_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AmplificationFactor { get; set; }
		float L_0 = ___0_value;
		__this->___U3CAmplificationFactorU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_AmplificationFactor_m198773BB3DCF934998643559EEF564824B705160_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short AmplificationFactor { get; set; }
		int16_t L_0 = ___0_value;
		__this->___U3CAmplificationFactorU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_BoostValue_mF56A704AC35C793DD64AD2A70D9F1D49D71E1165_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float BoostValue { get; set; }
		float L_0 = ___0_value;
		__this->___U3CBoostValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_BoostValue_m27CCB1E511BE0882BF412870E26A7A6E00FEBC27_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short BoostValue { get; set; }
		int16_t L_0 = ___0_value;
		__this->___U3CBoostValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_Disabled_mD371D23851E63AF5A6C4BE6D5276219EE30989F5_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CDisabledU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_Disabled_m38CE61C359053B315F89566960FA1CEC0C421C95_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CDisabledU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C_inline (PhotonVoiceCreatedParams_t56A463AB6188DCFE8F2669073DF50BF4AA4B865A* __this, const RuntimeMethod* method) 
{
	{
		// public Voice.LocalVoice Voice { get; set; }
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_0 = __this->___U3CVoiceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifier_get_AmplificationFactor_m3520F32D0B31EA9076100684D52DC6DBB87862D7_inline (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.amplificationFactor; }
		float L_0 = __this->___amplificationFactor_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifier_get_BoostValue_m9E022BEC8F6C0C87C3041A71E4537E98FA916106_inline (MicAmplifier_t76252BF4BCFFA6ACAF32DB1EF27844D3DEF323B6* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.boostValue; }
		float L_0 = __this->___boostValue_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicAmplifierFloat_get_Disabled_mA72105C0998AD667B0A948B5606624ECBE77A62A_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = __this->___U3CDisabledU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_AmplificationFactor_mF6BF127490CC68103DC3E968949EFEEABD95C43E_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public float AmplificationFactor { get; set; }
		float L_0 = __this->___U3CAmplificationFactorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_BoostValue_mB7D0D60C191A4DD4CF28C4BE8D28F46D5DAA4272_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public float BoostValue { get; set; }
		float L_0 = __this->___U3CBoostValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MicAmplifierFloat_get_MaxBefore_mE284EE666B88D421C15682861448C97289A43725_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxBefore { get; private set; }
		float L_0 = __this->___U3CMaxBeforeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_MaxBefore_m45E63FB81F55D06647DFB2F19F8DADF3A40DBBFC_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxBefore { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMaxBeforeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierFloat_set_MaxAfter_mE50BD4688A58A49999CBAF2E285450DE62D8AA82_inline (MicAmplifierFloat_t87D3FE8BC89FFC4CA9D82905972D0CA0697021CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxAfter { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMaxAfterU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicAmplifierShort_get_Disabled_m6AA14222D1376C14B421CF20DA4932BAE60E61CA_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public bool Disabled { get; set; }
		bool L_0 = __this->___U3CDisabledU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_AmplificationFactor_m9C224D06C12F11B6E13F4B475D68C4016B731A0A_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public short AmplificationFactor { get; set; }
		int16_t L_0 = __this->___U3CAmplificationFactorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_BoostValue_mC1C0E3A2C408CAE04473EF0FDA3EA4811E5E47E6_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public short BoostValue { get; set; }
		int16_t L_0 = __this->___U3CBoostValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MicAmplifierShort_get_MaxBefore_m2AA4ED496BD7B840A23A42B1EC4ADC7DFF17DABE_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, const RuntimeMethod* method) 
{
	{
		// public short MaxBefore { get; private set; }
		int16_t L_0 = __this->___U3CMaxBeforeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_MaxBefore_mC8B01DDC8516728CAACD118BF4EE72F035F15E34_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short MaxBefore { get; private set; }
		int16_t L_0 = ___0_value;
		__this->___U3CMaxBeforeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicAmplifierShort_set_MaxAfter_mB7CB7B8AD8866CD8874A6498C56B51EEC5AABED0_inline (MicAmplifierShort_t4E8F1CAD589505EF83AA0FE4F10DE29B1EBF84AE* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short MaxAfter { get; private set; }
		int16_t L_0 = ___0_value;
		__this->___U3CMaxAfterU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_0 = __this->___U3CLoadBalancingPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_DebugLostPercent_m372E20DEF459F85724F793CD11E43A7F635B4B72_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) 
{
	{
		// public int DebugLostPercent { get; set; }
		int32_t L_0 = __this->___U3CDebugLostPercentU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceClient_set_DebugLostPercent_m661F08B4FCA903D03B772A2B954CE1CA8E77DC3A_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int DebugLostPercent { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CDebugLostPercentU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* PhotonPeer_get_TrafficStatsGameLevel_m83D92F2C803367552F09AD55007BAD250309ED27_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_0 = __this->___U3CTrafficStatsGameLevelU3Ek__BackingField_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsIncoming_mFBFFDE72C315515EF874F92B67D135BEEE3E67D9_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_0 = __this->___U3CTrafficStatsIncomingU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsOutgoing_mDD70068CDA34548046EF39295A045E978315AADE_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_0 = __this->___U3CTrafficStatsOutgoingU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestEventCallbackU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_RoundTripTime_m6DD2EF8C9166757654EEA55527B926EA316A89FB_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) 
{
	{
		// public int RoundTripTime { get; private set; }
		int32_t L_0 = __this->___U3CRoundTripTimeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_RoundTripTimeVariance_mC8EFB27305D471D6BFEDA798F1593423D71588DC_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) 
{
	{
		// public int RoundTripTimeVariance { get; private set; }
		int32_t L_0 = __this->___U3CRoundTripTimeVarianceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_FramesReceived_m9AB529352DA8F1C9A7FBEB4FE109D0CAEE6C440A_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) 
{
	{
		// public int FramesReceived { get; private set; }
		int32_t L_0 = __this->___U3CFramesReceivedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VoiceConnection_get_FramesReceivedPerSecond_mECC359139BD873D38F094E8AFFE809E0680A87B8_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public float FramesReceivedPerSecond { get; private set; }
		float L_0 = __this->___U3CFramesReceivedPerSecondU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceClient_get_FramesLost_m98466CCB14660851F20F985C1074A16BD49CBFDA_inline (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, const RuntimeMethod* method) 
{
	{
		// public int FramesLost { get; internal set; }
		int32_t L_0 = __this->___U3CFramesLostU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VoiceConnection_get_FramesLostPerSecond_m33865CCF5C89832C20A8F87101080FD73621DB13_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public float FramesLostPerSecond { get; private set; }
		float L_0 = __this->___U3CFramesLostPerSecondU3Ek__BackingField_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VoiceConnection_get_FramesLostPercent_m792583A111A2B9CEFDF6CCD5EB20CE60C7BB7197_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public float FramesLostPercent { get; private set; }
		float L_0 = __this->___U3CFramesLostPercentU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* Speaker_get_Actor_mAEC193A7C7DBD50082AAF9AEC7553B9774D66347_inline (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) 
{
	{
		// public Realtime.Player Actor { get; protected internal set; }
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = __this->___U3CActorU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 RemoteVoiceLink_get_Info_m6CC9ECE02C7B8FF1254B732EA00857A03F9B869A_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceInfo Info { get; private set; }
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_0 = __this->___U3CInfoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8_inline (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404* __this, const RuntimeMethod* method) 
{
	{
		// public int SamplingRate { get; set; }
		int32_t L_0 = __this->___U3CSamplingRateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0_inline (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404* __this, const RuntimeMethod* method) 
{
	{
		// public int Channels { get; set; }
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_ChannelId_mE7140A7A9DA0FCDC81B9A53B45F5FB10971A718D_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) 
{
	{
		// public int ChannelId { get; private set; }
		int32_t L_0 = __this->___U3CChannelIdU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_PlayerId_m931FD8F7C2A29025B7B00F13A9D2AAEC8AABE6F5_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerId { get; private set; }
		int32_t L_0 = __this->___U3CPlayerIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_VoiceId_mA249081E4DC6B45043B3021BAD9B289A29F9DF95_inline (RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* __this, const RuntimeMethod* method) 
{
	{
		// public int VoiceId { get; private set; }
		int32_t L_0 = __this->___U3CVoiceIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 LocalVoice_get_Info_mFCD2D5AC24454B0E5B0538EE171756EF90F2E938_inline (LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceInfo Info { get { return info; } }
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_0 = __this->___info_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposed_m64165D0BB7EFC2C8BD35FC61D3073C25CFA5C8C5_inline (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, const RuntimeMethod* method) 
{
	{
		// return _isDisposed;
		bool L_0 = __this->____isDisposed_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposing_mB0440545CD35198940020472DC6FCDD97D297620_inline (WaveWriter_tB868C88CB7C6F85FCCB277BBF3CD2F0AA2EFCEFC* __this, const RuntimeMethod* method) 
{
	{
		// return _isDisposing;
		bool L_0 = __this->____isDisposing_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* FrameOut_1_get_Buf_mD21AC55D18CE61CAEF7A037E5C825B3EBA21A0B5_gshared_inline (FrameOut_1_tE1D253183799A33EB68D1E188B90F1E04064CE5D* __this, const RuntimeMethod* method) 
{
	{
		// public T[] Buf { get; private set; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->___U3CBufU3Ek__BackingField_0;
		return L_0;
	}
}
