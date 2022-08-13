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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum UpGun.EUpGunChatMessageSenderType
	 */
	enum class EUpGunChatMessageSenderType : uint8_t
	{
		System = 0,
		Player = 1,
		MAX    = 2
	};

	/**
	 * Enum UpGun.EUpGunLobbyJoinResult
	 */
	enum class EUpGunLobbyJoinResult : uint8_t
	{
		Success                      = 0,
		ErrorFull                    = 1,
		ErrorDoesNotExist            = 2,
		ErrorCouldNotRetrieveAddress = 3,
		ErrorAlreadyInLobby          = 4,
		ErrorUnknown                 = 5,
		MAX                          = 6
	};

	/**
	 * Enum UpGun.EHorrorSyncMode
	 */
	enum class EHorrorSyncMode : uint8_t
	{
		NoSmooth      = 0,
		Interpolation = 1,
		MAX           = 2
	};

	/**
	 * Enum UpGun.EUpGunWeaponRigFlagBits
	 */
	enum class EUpGunWeaponRigFlagBits : uint8_t
	{
		None      = 0,
		FPSWeapon = 1,
		TPSWeapon = 2,
		FPSHands  = 3,
		TPSHands  = 4,
		MAX       = 5
	};

	/**
	 * Enum UpGun.EUpGunWeaponSkinType
	 */
	enum class EUpGunWeaponSkinType : uint8_t
	{
		Rifle = 0,
		Knife = 1,
		MAX   = 2
	};

	/**
	 * Enum UpGun.EUpGunEquipmentType
	 */
	enum class EUpGunEquipmentType : uint8_t
	{
		Hat      = 0,
		Backpack = 1,
		MAX      = 2
	};

	/**
	 * Enum UpGun.EUpGunCosmeticType
	 */
	enum class EUpGunCosmeticType : uint8_t
	{
		Unknown   = 0,
		Armor     = 1,
		Hat       = 2,
		Screen    = 3,
		Rifle     = 4,
		Knife     = 5,
		Emote     = 6,
		Equipment = 7,
		MAX       = 8
	};

	/**
	 * Enum UpGun.EUpGunInputUse
	 */
	enum class EUpGunInputUse : uint8_t
	{
		Axis   = 0,
		Action = 1,
		UI     = 2,
		MAX    = 3
	};

	/**
	 * Enum UpGun.EUpGunInput
	 */
	enum class EUpGunInput : uint8_t
	{
		None           = 0,
		ConfirmTarget  = 1,
		CancelTarget   = 2,
		PrimaryFire    = 3,
		SecondaryFire  = 4,
		Jump           = 5,
		Grenade        = 6,
		Knife          = 7,
		Skill1         = 8,
		Skill2         = 9,
		Skill3         = 10,
		Reload         = 11,
		Dash           = 12,
		Crouch         = 13,
		Aim            = 14,
		AutomaticSkill = 15,
		Inspect        = 16,
		MAX            = 17
	};

	/**
	 * Enum UpGun.EUpGunOSSItemGeneratorFlags
	 */
	enum class EUpGunOSSItemGeneratorFlags : uint8_t
	{
		None           = 0,
		BundleAllItems = 1,
		MAX            = 2
	};

	/**
	 * Enum UpGun.EUpGunInventoryItemFlags
	 */
	enum class EUpGunInventoryItemFlags : uint8_t
	{
		None     = 0,
		NoTrade  = 1,
		Removed  = 2,
		Consumed = 3,
		MAX      = 4
	};

	/**
	 * Enum UpGun.EUpGunOSSItemPromoConditionType
	 */
	enum class EUpGunOSSItemPromoConditionType : uint8_t
	{
		Ownership   = 0,
		Achievement = 1,
		Playtime    = 2,
		MAX         = 3
	};

	/**
	 * Enum UpGun.EUpGunOSSItemFlags
	 */
	enum class EUpGunOSSItemFlags : uint8_t
	{
		None                       = 0,
		ExcludeFromGlobalGenerator = 1,
		IsAnimated                 = 2,
		MAX                        = 3
	};

	/**
	 * Enum UpGun.EUpGunOSSItemRarity
	 */
	enum class EUpGunOSSItemRarity : uint8_t
	{
		Common   = 0,
		Uncommon = 1,
		Rare     = 2,
		Epic     = 3,
		Elite    = 4,
		MAX      = 5
	};

	/**
	 * Enum UpGun.EUpGunOSSItemPriceCategory
	 */
	enum class EUpGunOSSItemPriceCategory : uint8_t
	{
		VLV25    = 0,
		VLV50    = 1,
		VLV75    = 2,
		VLV100   = 3,
		VLV150   = 4,
		VLV200   = 5,
		VLV250   = 6,
		VLV300   = 7,
		VLV350   = 8,
		VLV400   = 9,
		VLV450   = 10,
		VLV500   = 11,
		VLV550   = 12,
		VLV600   = 13,
		VLV650   = 14,
		VLV700   = 15,
		VLV750   = 16,
		VLV800   = 17,
		VLV850   = 18,
		VLV900   = 19,
		VLV950   = 20,
		VLV1000  = 21,
		VLV10000 = 22,
		MAX      = 23
	};

	/**
	 * Enum UpGun.EUpGunOSSItemType
	 */
	enum class EUpGunOSSItemType : uint8_t
	{
		Hat    = 0,
		Armor  = 1,
		Screen = 2,
		Gun    = 3,
		Knife  = 4,
		Emote  = 5,
		MAX    = 6
	};

	/**
	 * Enum UpGun.EUpGunSkillCategory
	 */
	enum class EUpGunSkillCategory : uint8_t
	{
		Unknown    = 0,
		Rifle      = 1,
		Knife      = 2,
		Player     = 3,
		Grenade    = 4,
		Capacity   = 5,
		Extension  = 6,
		Compromise = 7,
		MAX        = 8
	};

	/**
	 * Enum UpGun.EUpGunSkillType
	 */
	enum class EUpGunSkillType : uint8_t
	{
		None            = 0,
		GameplayEffect  = 1,
		GameplayAbility = 2,
		MAX             = 3
	};

	/**
	 * Enum UpGun.EUpGunStatType
	 */
	enum class EUpGunStatType : uint8_t
	{
		Int32 = 0,
		Float = 1,
		MAX   = 2
	};

	/**
	 * Enum UpGun.EUpGunStatOSSUpdateMode
	 */
	enum class EUpGunStatOSSUpdateMode : uint8_t
	{
		Delta = 0,
		Max   = 1
	};

	/**
	 * Enum UpGun.EUpGunTeamFlagBits
	 */
	enum class EUpGunTeamFlagBits : uint8_t
	{
		None       = 0,
		Reserved   = 1,
		NoChatRoom = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UpGun.UpGunGameplayAbilityLocalAnimMontageMesh
	 * Size -> 0x0030
	 */
	struct FUpGunGameplayAbilityLocalAnimMontageMesh
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilityLocalAnimMontage                    Montage;                                                 // 0x0008(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunGameplayAbilityRepAnimMontage
	 * Size -> 0x0028
	 */
	struct FUpGunGameplayAbilityRepAnimMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Position;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IsStopped : 1;                                           // 0x0014(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ForcePlayBit : 1;                                        // 0x0014(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReplicatePlayRate : 1;                                   // 0x0014(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8A6V[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunGameplayAbilityReplicatedMontageMesh
	 * Size -> 0x0030
	 */
	struct FUpGunGameplayAbilityReplicatedMontageMesh
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunGameplayAbilityRepAnimMontage                 Montage;                                                 // 0x0008(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunTeamId
	 * Size -> 0x0001
	 */
	struct FUpGunTeamId
	{
	public:
		unsigned char                                              ID;                                                      // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunHUDWidgetContext
	 * Size -> 0x0010
	 */
	struct FUpGunHUDWidgetContext
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedMouse;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXZ0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RefCount;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunSynchronizedTimer
	 * Size -> 0x0018
	 */
	struct FUpGunSynchronizedTimer
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        ServerTimerHandle;                                       // 0x0008(0x0008) RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerTimeStart;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerDuration;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunPlayerControllerDamageEvent
	 * Size -> 0x0010
	 */
	struct FUpGunPlayerControllerDamageEvent
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCF1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBasePlayerState*                               Killer;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemId
	 * Size -> 0x0010
	 */
	struct FUpGunOSSItemId
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunCosmeticSettings
	 * Size -> 0x0060
	 */
	struct FUpGunCosmeticSettings
	{
	public:
		struct FUpGunOSSItemId                                     ScreenItemId;                                            // 0x0000(0x0010) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FaceTint;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunOSSItemId                                     ArmorItemId;                                             // 0x0020(0x0010) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunOSSItemId                                     HatItemId;                                               // 0x0030(0x0010) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunOSSItemId                                     RifleItemId;                                             // 0x0040(0x0010) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunOSSItemId                                     KnifeItemId;                                             // 0x0050(0x0010) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunChatRoomId
	 * Size -> 0x0001
	 */
	struct FUpGunChatRoomId
	{
	public:
		unsigned char                                              ID;                                                      // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunChatMessage
	 * Size -> 0x0028
	 */
	struct FUpGunChatMessage
	{
	public:
		EUpGunChatMessageSenderType                                SenderType;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOWN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBasePlayerState*                               Sender;                                                  // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunChatRoomId                                    Room;                                                    // 0x0010(0x0001) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L32J[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunChatRoom
	 * Size -> 0x0028
	 */
	struct FUpGunChatRoom
	{
	public:
		struct FUpGunChatRoomId                                    ID;                                                      // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z68C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AUpGunBasePlayerState*>                       Players;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunTeam
	 * Size -> 0x0038
	 */
	struct FUpGunTeam
	{
	public:
		struct FUpGunTeamId                                        ID;                                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_504M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Flags;                                                   // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AUpGunBasePlayerState*>                       Players;                                                 // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Score;                                                   // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunChatRoomId                                    ChatRoomId;                                              // 0x0034(0x0001) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RG66[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunGameModeSettingsDefaultSkill
	 * Size -> 0x000C
	 */
	struct FUpGunGameModeSettingsDefaultSkill
	{
	public:
		struct FGameplayTag                                        Skill;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunFriend
	 * Size -> 0x0098
	 */
	struct FUpGunFriend
	{
	public:
		unsigned char                                              UnknownData_7HUF[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunAbilityMontageMesh
	 * Size -> 0x0010
	 */
	struct FUpGunAbilityMontageMesh
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemGenerator
	 * Size -> 0x0048
	 */
	struct FUpGunOSSItemGenerator
	{
	public:
		int32_t                                                    SteamID;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3FG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x0018(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B21V[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Items;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bDisabled;                                               // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDropLimit;                                           // 0x0031(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SLN[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DropLimit;                                               // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DropIntervalInMinutes;                                   // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DropWindowInMinutes;                                     // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DropMaxPerWindow;                                        // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHND[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemLocalizedString
	 * Size -> 0x0020
	 */
	struct FUpGunOSSItemLocalizedString
	{
	public:
		class FString                                              French;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              English;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemTypeSettings
	 * Size -> 0x0020
	 */
	struct FUpGunOSSItemTypeSettings
	{
	public:
		struct FUpGunOSSItemLocalizedString                        Name;                                                    // 0x0000(0x0020) Edit, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemRaritySettings
	 * Size -> 0x0024
	 */
	struct FUpGunOSSItemRaritySettings
	{
	public:
		struct FLinearColor                                        NameColor;                                               // 0x0000(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0010(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Chance;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunSkillInstance
	 * Size -> 0x0030
	 */
	struct FUpGunSkillInstance
	{
	public:
		class UUpGunSkill*                                         Skill;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V008[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGameplayEffectHandle>                 GameplayEffectHandles;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayAbilitySpecHandle>                  GameplayAbilitiesHandles;                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunStatManagerStat
	 * Size -> 0x000C
	 */
	struct FUpGunStatManagerStat
	{
	public:
		struct FGameplayTag                                        ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunWeaponProjectileFireRPC
	 * Size -> 0x0010
	 */
	struct FUpGunWeaponProjectileFireRPC
	{
	public:
		struct FVector_NetQuantizeNormal                           Direction;                                               // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SyncChance;                                              // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIQI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunWeaponManagerWeaponInfo
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FUpGunWeaponManagerWeaponInfo : public FFastArraySerializerItem
	{
	public:
		struct FGameplayTag                                        Type;                                                    // 0x000C(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VL1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunWeapon*                                        Weapon;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunWeaponManagerWeaponInfoContainer
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FUpGunWeaponManagerWeaponInfoContainer : public FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_MU7K[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUpGunWeaponManagerWeaponInfo>               Items;                                                   // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunInventoryItem
	 * Size -> 0x0028
	 */
	struct FUpGunInventoryItem
	{
	public:
		struct FUpGunOSSItemId                                     InstanceID;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUpGunOSSItemId                                     ItemId;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03TG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunLobbyData
	 * Size -> 0x0118
	 */
	struct FUpGunLobbyData
	{
	public:
		unsigned char                                              UnknownData_8EEP[0x108];                                 // 0x0000(0x0108) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0108(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunAbilitySpecHandle
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FUpGunAbilitySpecHandle : public FFastArraySerializerItem
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunAbilitySpecHandleContainer
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FUpGunAbilitySpecHandleContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FUpGunAbilitySpecHandle>                     Items;                                                   // 0x0108(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSId
	 * Size -> 0x0010
	 */
	struct FUpGunOSSId
	{
	public:
		class FString                                              Steam;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemPromoConditionOwnershipInfo
	 * Size -> 0x0010
	 */
	struct FUpGunOSSItemPromoConditionOwnershipInfo
	{
	public:
		struct FUpGunOSSId                                         AppId;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemPromoConditionAchievementInfo
	 * Size -> 0x0010
	 */
	struct FUpGunOSSItemPromoConditionAchievementInfo
	{
	public:
		struct FUpGunOSSId                                         AchievementId;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemPromoConditionPlaytimeInfo
	 * Size -> 0x0018
	 */
	struct FUpGunOSSItemPromoConditionPlaytimeInfo
	{
	public:
		struct FUpGunOSSId                                         AppId;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    PlaytimeInMinutes;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWWQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemPromoConditionInfo
	 * Size -> 0x0040
	 */
	struct FUpGunOSSItemPromoConditionInfo
	{
	public:
		EUpGunOSSItemPromoConditionType                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EV24[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUpGunOSSItemPromoConditionOwnershipInfo            OwnershipInfo;                                           // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FUpGunOSSItemPromoConditionAchievementInfo          AchievementInfo;                                         // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FUpGunOSSItemPromoConditionPlaytimeInfo             PlaytimeInfo;                                            // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemPromoInfo
	 * Size -> 0x0018
	 */
	struct FUpGunOSSItemPromoInfo
	{
	public:
		bool                                                       bManual;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ10[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUpGunOSSItemPromoConditionInfo>             Conditions;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSItemMetadata
	 * Size -> 0x0070
	 */
	struct FUpGunOSSItemMetadata
	{
	public:
		int32_t                                                    SteamID;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LC0L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUpGunOSSItemLocalizedString                        Name;                                                    // 0x0008(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FUpGunOSSItemLocalizedString                        Description;                                             // 0x0028(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EUpGunOSSItemType                                          Type;                                                    // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpGunOSSItemRarity                                        Rarity;                                                  // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpGunOSSItemPriceCategory                                 PriceCategory;                                           // 0x004A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x004B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTradeable;                                            // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMarketable;                                           // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHidden;                                               // 0x004E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeDropped;                                           // 0x004F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStoreHidden;                                            // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXIY[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUpGunOSSItemPromoInfo                              PromoInfo;                                               // 0x0058(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunWeaponSkin
	 * Size -> 0x0190 (FullSize[0x0198] - InheritedSize[0x0008])
	 */
	struct FUpGunWeaponSkin : public FTableRowBase
	{
	public:
		EUpGunWeaponSkinType                                       Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLGU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Mesh[0x28];                                              // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Material[0x28];                                          // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Thumbnail[0x28];                                         // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<class FName, float>                                   ScalarParameters;                                        // 0x0088(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              TextureParameters[0x50];                                 // 0x00D8(0x0050) UNKNOWN PROPERTY: MapProperty
		struct FUpGunOSSItemMetadata                               OSSMetadata;                                             // 0x0128(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunScreen
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FUpGunScreen : public FTableRowBase
	{
	public:
		unsigned char                                              Texture[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FLinearColor>                                Tints;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              OverrideMaterial[0x28];                                  // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FUpGunOSSItemMetadata                               OSSMetadata;                                             // 0x0068(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunArmor
	 * Size -> 0x0138 (FullSize[0x0140] - InheritedSize[0x0008])
	 */
	struct FUpGunArmor : public FTableRowBase
	{
	public:
		struct FLinearColor                                        PrimaryTint;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryTint;                                           // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileablePattern;                                        // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSZ6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Pattern[0x28];                                           // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OverrideMaterial[0x28];                                  // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<class FName, float>                                   ScalarParameters;                                        // 0x0080(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FUpGunOSSItemMetadata                               OSSMetadata;                                             // 0x00D0(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunEquipment
	 * Size -> 0x0188 (FullSize[0x0190] - InheritedSize[0x0008])
	 */
	struct FUpGunEquipment : public FTableRowBase
	{
	public:
		EUpGunEquipmentType                                        Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9MA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StaticMesh[0x28];                                        // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GhostStaticMesh[0x28];                                   // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HUDImage[0x28];                                          // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OverrideActor[0x28];                                     // 0x0088(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK3X[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RobotTransform;                                          // 0x00C0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          GhostTransform;                                          // 0x00F0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FUpGunOSSItemMetadata                               OSSMetadata;                                             // 0x0120(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunInputMapping
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FUpGunInputMapping : public FTableRowBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpGunInputUse                                             Use;                                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFJZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInputChord                                         KeyKeyboardAZERTY;                                       // 0x0030(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputChord                                         KeyKeyboardQUERTY;                                       // 0x0050(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputChord                                         KeyGamepad;                                              // 0x0070(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLT8[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunPodiumPlayerInfos
	 * Size -> 0x0018
	 */
	struct FUpGunPodiumPlayerInfos
	{
	public:
		class AUpGunBasePlayerState*                               Player;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Place;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Stat;                                                    // 0x000C(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StatValue;                                               // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunSkillStructOLD
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FUpGunSkillStructOLD : public FTableRowBase
	{
	public:
		EUpGunSkillType                                            Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LevelCount;                                              // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWAZ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Help;                                                    // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EUpGunSkillCategory                                        Category;                                                // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BIN[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Image;                                                   // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          HUDIcon;                                                 // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               RequiredTags;                                            // 0x0070(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               BlockedTags;                                             // 0x0090(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              AbilityClass;                                            // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EffectClass;                                             // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunTargetData_SkillTPDisk
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FUpGunTargetData_SkillTPDisk : public FGameplayAbilityTargetData
	{
	public:
		struct FVector_NetQuantize                                 DstLocation;                                             // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           SurfaceNormal;                                           // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunSpectatorOwningClientMove
	 * Size -> 0x0018
	 */
	struct FUpGunSpectatorOwningClientMove
	{
	public:
		struct FVector_NetQuantize                                 FinalLocation;                                           // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Direction;                                               // 0x000C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UpGun.UpGunStatOSSMetadata
	 * Size -> 0x0018
	 */
	struct FUpGunStatOSSMetadata
	{
	public:
		class FString                                              SteamID;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpGunStatOSSUpdateMode                                    UpdateMode;                                              // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UV3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunStat
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FUpGunStat : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        ID;                                                      // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EUpGunStatType                                             Type;                                                    // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOSSStat;                                              // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTWJ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUpGunStatOSSMetadata                               OSSMetadata;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFND[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UpGun.UpGunOSSStatId
	 * Size -> 0x0010
	 */
	struct FUpGunOSSStatId
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
