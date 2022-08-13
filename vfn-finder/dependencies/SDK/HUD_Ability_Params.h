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
	 * Function HUD_Ability.HUD_Ability_C.OnAbilityCommitted
	 */
	struct UHUD_Ability_C_OnAbilityCommitted_Params
	{
	public:
		class UUpGunGameplayAbility*                               AbilityTags;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Ability.HUD_Ability_C.OnAbilityCooldownActivatedOrRemoved
	 */
	struct UHUD_Ability_C_OnAbilityCooldownActivatedOrRemoved_Params
	{
	public:
		int32_t                                                    TagCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Ability.HUD_Ability_C.DisplayInputName
	 */
	struct UHUD_Ability_C_DisplayInputName_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Ability.HUD_Ability_C.Construct
	 */
	struct UHUD_Ability_C_Construct_Params
	{	};

	/**
	 * Function HUD_Ability.HUD_Ability_C.Tick
	 */
	struct UHUD_Ability_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Ability.HUD_Ability_C.ExecuteUbergraph_HUD_Ability
	 */
	struct UHUD_Ability_C_ExecuteUbergraph_HUD_Ability_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_123Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
