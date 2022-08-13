/**
 * Name: UpGun
 * Version: 0.5
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.GetPlayersInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpherePos                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SphereRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AUpGunBaseCharacter*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TeamDoesntMatter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldShareTeam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TestVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AUpGunBaseCharacter*>                 Players                                                    (Parm, OutParm)
	 */
	void UBP_Lib_Utils_C::GetPlayersInRange(const struct FVector& SpherePos, float SphereRadius, class AUpGunBaseCharacter** Character, bool TeamDoesntMatter, bool ShouldShareTeam, bool TestVisibility, class UObject* WorldContext, TArray<class AUpGunBaseCharacter*>* Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.GetPlayersInRange");
		
		UBP_Lib_Utils_C_GetPlayersInRange_Params params {};
		params.SpherePos = SpherePos;
		params.SphereRadius = SphereRadius;
		params.TeamDoesntMatter = TeamDoesntMatter;
		params.ShouldShareTeam = ShouldShareTeam;
		params.TestVisibility = TestVisibility;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.GetArmorColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Chara                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::GetArmorColor(class AActor* Chara, class UObject* WorldContext, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.GetArmorColor");
		
		UBP_Lib_Utils_C_GetArmorColor_Params params {};
		params.Chara = Chara;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.GetRelevantColorForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Use_Team_Colors_for_Armors                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::GetRelevantColorForPlayer(class AUpGunBasePlayerState* PS, class UObject* WorldContext, bool* Use_Team_Colors_for_Armors, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.GetRelevantColorForPlayer");
		
		UBP_Lib_Utils_C_GetRelevantColorForPlayer_Params params {};
		params.PS = PS;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Use_Team_Colors_for_Armors != nullptr)
			*Use_Team_Colors_for_Armors = params.Use_Team_Colors_for_Armors;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Knife
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Custom_Knife(const class FName& RowName, class USkeletalMeshComponent** Mesh, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Knife");
		
		UBP_Lib_Utils_C_Custom_Knife_Params params {};
		params.RowName = RowName;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Screen_Player_UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunScreen                                FaceID                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Face_Tint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      UI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Custom_Screen_Player_UI(const struct FUpGunScreen& FaceID, const struct FLinearColor& Face_Tint, class UImage** UI, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Screen_Player_UI");
		
		UBP_Lib_Utils_C_Custom_Screen_Player_UI_Params params {};
		params.FaceID = FaceID;
		params.Face_Tint = Face_Tint;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UI != nullptr)
			*UI = params.UI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Achievement_CheckCombo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<struct FGameplayTag, unsigned char>           DesiredSkills                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               RelevantLevels                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Achievement_ID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasUnlocked                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Lib_Utils_C::Achievement_CheckCombo(class AUpGunBasePlayerState** PS, TMap<struct FGameplayTag, unsigned char> DesiredSkills, bool RelevantLevels, const class FString& Achievement_ID, class UObject* WorldContext, bool* HasUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Achievement_CheckCombo");
		
		UBP_Lib_Utils_C_Achievement_CheckCombo_Params params {};
		params.DesiredSkills = DesiredSkills;
		params.RelevantLevels = RelevantLevels;
		params.Achievement_ID = Achievement_ID;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PS != nullptr)
			*PS = params.PS;
		if (HasUnlocked != nullptr)
			*HasUnlocked = params.HasUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Count_EquippedSkills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillAndLevels                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Count_EquippedSkills(class AUpGunBasePlayerState** State, class UObject* WorldContext, int32_t* SkillAndLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Count_EquippedSkills");
		
		UBP_Lib_Utils_C_Count_EquippedSkills_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		if (SkillAndLevels != nullptr)
			*SkillAndLevels = params.SkillAndLevels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.CountDroppableSkills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Available_Skills                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::CountDroppableSkills(class UObject* WorldContext, int32_t* Available_Skills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.CountDroppableSkills");
		
		UBP_Lib_Utils_C_CountDroppableSkills_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available_Skills != nullptr)
			*Available_Skills = params.Available_Skills;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Screen_UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunScreen                                ScreenStruct                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Custom_Screen_UI(const struct FUpGunScreen& ScreenStruct, class UObject* WorldContext, class UMaterialInstanceDynamic** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Screen_UI");
		
		UBP_Lib_Utils_C_Custom_Screen_UI_Params params {};
		params.ScreenStruct = ScreenStruct;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Custom Screen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MatIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUpGunScreen                                RowScreen                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Custom_Screen(class UPrimitiveComponent** Mesh, const class FName& RowName, int32_t MatIndex, const struct FUpGunScreen& RowScreen, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Custom Screen");
		
		UBP_Lib_Utils_C_Custom_Screen_Params params {};
		params.RowName = RowName;
		params.MatIndex = MatIndex;
		params.RowScreen = RowScreen;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Custom Hat (For Debug)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Hat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CheckHatPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Robot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Custom_Hat_For_Debug(const class FName& RowName, class UStaticMeshComponent** Hat, bool CheckHatPosition, bool Robot, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Custom Hat (For Debug)");
		
		UBP_Lib_Utils_C_Custom_Hat_For_Debug_Params params {};
		params.RowName = RowName;
		params.CheckHatPosition = CheckHatPosition;
		params.Robot = Robot;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hat != nullptr)
			*Hat = params.Hat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Rifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUpGunWeaponSkin                            RowRifle                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Custom_Rifle(const class FName& RowName, class USkeletalMeshComponent** Mesh, const struct FUpGunWeaponSkin& RowRifle, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Rifle");
		
		UBP_Lib_Utils_C_Custom_Rifle_Params params {};
		params.RowName = RowName;
		params.RowRifle = RowRifle;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Armor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUpGunArmor                                 Armor_Row                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Custom_Armor(const class FName& RowName, class UPrimitiveComponent** Mesh, int32_t MaterialIndex, const struct FUpGunArmor& Armor_Row, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Armor");
		
		UBP_Lib_Utils_C_Custom_Armor_Params params {};
		params.RowName = RowName;
		params.MaterialIndex = MaterialIndex;
		params.Armor_Row = Armor_Row;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.SelectBadge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class AUpGunBasePlayerState*                       PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::SelectBadge(class UImage** Image, class AUpGunBasePlayerState** PS, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.SelectBadge");
		
		UBP_Lib_Utils_C_SelectBadge_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
		if (PS != nullptr)
			*PS = params.PS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.Cut Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            MaxCharacters                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEditableText*                               EditableTextRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::Cut_Text(class FText* Text, int32_t MaxCharacters, class UEditableText** EditableTextRef, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.Cut Text");
		
		UBP_Lib_Utils_C_Cut_Text_Params params {};
		params.MaxCharacters = MaxCharacters;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (EditableTextRef != nullptr)
			*EditableTextRef = params.EditableTextRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.DamageMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<struct FGameplayTag, float>                   Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FGameplayTag                                DamageTags                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageOut                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::DamageMultiplier(float* Damage, TMap<struct FGameplayTag, float> Multiplier, const struct FGameplayTag& DamageTags, class UObject* WorldContext, float* DamageOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.DamageMultiplier");
		
		UBP_Lib_Utils_C_DamageMultiplier_Params params {};
		params.Multiplier = Multiplier;
		params.DamageTags = DamageTags;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
		if (DamageOut != nullptr)
			*DamageOut = params.DamageOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.TraceSemiSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinDistanceBtwPoints                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxDrawDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             ValidLocations                                             (Parm, OutParm)
	 */
	void UBP_Lib_Utils_C::TraceSemiSphere(const struct FVector& Location, float MinDistanceBtwPoints, int32_t MaxDrawDistance, TArray<class AActor*> ActorsToIgnore, class UObject* WorldContext, TArray<struct FVector>* ValidLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.TraceSemiSphere");
		
		UBP_Lib_Utils_C_TraceSemiSphere_Params params {};
		params.Location = Location;
		params.MinDistanceBtwPoints = MinDistanceBtwPoints;
		params.MaxDrawDistance = MaxDrawDistance;
		params.ActorsToIgnore = ActorsToIgnore;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidLocations != nullptr)
			*ValidLocations = params.ValidLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.GetRandomMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Mask                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::GetRandomMask(class UObject* WorldContext, class UMaterialInterface** Mask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.GetRandomMask");
		
		UBP_Lib_Utils_C_GetRandomMask_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mask != nullptr)
			*Mask = params.Mask;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.GetLocRelativeTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		int32_t                                            Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Up                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::GetLocRelativeTo(class USceneComponent* Component, int32_t Forward, int32_t Up, int32_t Right, class UObject* WorldContext, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.GetLocRelativeTo");
		
		UBP_Lib_Utils_C_GetLocRelativeTo_Params params {};
		params.Component = Component;
		params.Forward = Forward;
		params.Up = Up;
		params.Right = Right;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lib_Utils.BP_Lib_Utils_C.FastForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Lib_Utils_C::FastForward(class USceneComponent* Component, int32_t Distance, class UObject* WorldContext, struct FVector* StartLocation, struct FVector* EndLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lib_Utils.BP_Lib_Utils_C.FastForward");
		
		UBP_Lib_Utils_C_FastForward_Params params {};
		params.Component = Component;
		params.Distance = Distance;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartLocation != nullptr)
			*StartLocation = params.StartLocation;
		if (EndLocation != nullptr)
			*EndLocation = params.EndLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Lib_Utils_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Lib_Utils_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lib_Utils.BP_Lib_Utils_C");
		return ptr;
	}

}


