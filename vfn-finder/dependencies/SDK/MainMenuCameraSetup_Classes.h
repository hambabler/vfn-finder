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
	 * BlueprintGeneratedClass MainMenuCameraSetup.MainMenuCameraSetup_C
	 * Size -> 0x0130 (FullSize[0x0350] - InheritedSize[0x0220])
	 */
	class AMainMenuCameraSetup_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMain_Menu_C*                                        MainMenu;                                                // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               CameraMainMenu;                                          // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI;                                                      // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UObject*                                             SAVE_Local;                                              // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BaseLoc;                                                 // 0x0250(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class ABP_MainMenu_GameMode_C*                             Main_Menu_GameMode;                                      // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_2JZH[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Loc_Custom;                                              // 0x0290(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          Loc_Custom_Face;                                         // 0x02C0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          Loc_Custom_Emote;                                        // 0x02F0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          Loc_Custom_Knife;                                        // 0x0320(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor

	public:
		void ShowInitialLanguageChoice();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_MainMenuCameraSetup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
