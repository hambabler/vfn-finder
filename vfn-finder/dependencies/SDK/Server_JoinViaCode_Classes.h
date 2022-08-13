#pragma once

/**
 * Name: UpGun
 * Version: 0.5
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Server_JoinViaCode.Server_JoinViaCode_C
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UServer_JoinViaCode_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ErrorJoining;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCircularThrobber*                                   CircularThrobber_145;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       EditableText_563;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_JoinError;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_51;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Join;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_pubs;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OpenServers;                                             // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnJoinCompleted(EUpGunLobbyJoinResult Result);
		void BndEvt__Server_JoinViaCode_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void BndEvt__Server_JoinViaCode_W_button_172_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature();
		void Construct();
		void BndEvt__Server_JoinViaCode_EditableText_562_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_Server_JoinViaCode(int32_t EntryPoint);
		void OpenServers__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
