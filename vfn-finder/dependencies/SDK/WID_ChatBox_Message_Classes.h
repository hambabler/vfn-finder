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
	 * WidgetBlueprintGeneratedClass WID_ChatBox_Message.WID_ChatBox_Message_C
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UWID_ChatBox_Message_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Image_35;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MessageText;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Chatbox_Message_C*                               Message;                                                 // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunGameStateBase*                                 GS;                                                      // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI_Upgun;                                                // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void AddIcon(class AUpGunBasePlayerState** PlayerState);
		void GetSenderName(class FText* Name);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void Construct();
		void ExecuteUbergraph_WID_ChatBox_Message(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
