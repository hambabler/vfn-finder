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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.GetPlayersInRange
	 */
	struct UBP_Lib_Utils_C_GetPlayersInRange_Params
	{
	public:
		struct FVector                                             SpherePos;                                               // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SphereRadius;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TeamDoesntMatter;                                        // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldShareTeam;                                         // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TestVisibility;                                          // 0x001A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DQA[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContext;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AUpGunBaseCharacter*>                         Players;                                                 // 0x0028(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.GetArmorColor
	 */
	struct UBP_Lib_Utils_C_GetArmorColor_Params
	{
	public:
		class AActor*                                              Chara;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.GetRelevantColorForPlayer
	 */
	struct UBP_Lib_Utils_C_GetRelevantColorForPlayer_Params
	{
	public:
		class AUpGunBasePlayerState*                               PS;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Use_Team_Colors_for_Armors;                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9W7Q[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BJB1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Knife
	 */
	struct UBP_Lib_Utils_C_Custom_Knife_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Screen_Player_UI
	 */
	struct UBP_Lib_Utils_C_Custom_Screen_Player_UI_Params
	{
	public:
		struct FUpGunScreen                                        FaceID;                                                  // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Face_Tint;                                               // 0x00D8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              UI;                                                      // 0x00E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Achievement_CheckCombo
	 */
	struct UBP_Lib_Utils_C_Achievement_CheckCombo_Params
	{
	public:
		class AUpGunBasePlayerState*                               PS;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<struct FGameplayTag, unsigned char>                   DesiredSkills;                                           // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       RelevantLevels;                                          // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X4AY[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Achievement_ID;                                          // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasUnlocked;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SL77[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Count_EquippedSkills
	 */
	struct UBP_Lib_Utils_C_Count_EquippedSkills_Params
	{
	public:
		class AUpGunBasePlayerState*                               State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillAndLevels;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.CountDroppableSkills
	 */
	struct UBP_Lib_Utils_C_CountDroppableSkills_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Available_Skills;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Screen_UI
	 */
	struct UBP_Lib_Utils_C_Custom_Screen_UI_Params
	{
	public:
		struct FUpGunScreen                                        ScreenStruct;                                            // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             WorldContext;                                            // 0x00D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            Material;                                                // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Custom Screen
	 */
	struct UBP_Lib_Utils_C_Custom_Screen_Params
	{
	public:
		class UPrimitiveComponent*                                 Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RowName;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MatIndex;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I63M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunScreen                                        RowScreen;                                               // 0x0018(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             WorldContext;                                            // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Custom Hat (For Debug)
	 */
	struct UBP_Lib_Utils_C_Custom_Hat_For_Debug_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                Hat;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CheckHatPosition;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Robot;                                                   // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0R6P[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContext;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Rifle
	 */
	struct UBP_Lib_Utils_C_Custom_Rifle_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FUpGunWeaponSkin                                    RowRifle;                                                // 0x0010(0x0198)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             WorldContext;                                            // 0x01A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Custom_Armor
	 */
	struct UBP_Lib_Utils_C_Custom_Armor_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaterialIndex;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LQ52[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunArmor                                         Armor_Row;                                               // 0x0018(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             WorldContext;                                            // 0x0158(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.SelectBadge
	 */
	struct UBP_Lib_Utils_C_SelectBadge_Params
	{
	public:
		class UImage*                                              Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class AUpGunBasePlayerState*                               PS;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.Cut Text
	 */
	struct UBP_Lib_Utils_C_Cut_Text_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    MaxCharacters;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R37N[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEditableText*                                       EditableTextRef;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.DamageMultiplier
	 */
	struct UBP_Lib_Utils_C_DamageMultiplier_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0GC3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<struct FGameplayTag, float>                           Multiplier;                                              // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FGameplayTag                                        DamageTags;                                              // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageOut;                                               // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.TraceSemiSphere
	 */
	struct UBP_Lib_Utils_C_TraceSemiSphere_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinDistanceBtwPoints;                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxDrawDistance;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_11KT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             WorldContext;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     ValidLocations;                                          // 0x0030(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.GetRandomMask
	 */
	struct UBP_Lib_Utils_C_GetRandomMask_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  Mask;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.GetLocRelativeTo
	 */
	struct UBP_Lib_Utils_C_GetLocRelativeTo_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    Forward;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Up;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E03Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContext;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lib_Utils.BP_Lib_Utils_C.FastForward
	 */
	struct UBP_Lib_Utils_C_FastForward_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Distance;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LFV0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             StartLocation;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndLocation;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
