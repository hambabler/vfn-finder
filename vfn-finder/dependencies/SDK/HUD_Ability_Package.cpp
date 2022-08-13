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
	 * 		Name   -> Function HUD_Ability.HUD_Ability_C.OnAbilityCommitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpGunGameplayAbility*                       AbilityTags                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Ability_C::OnAbilityCommitted(class UUpGunGameplayAbility* AbilityTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Ability.HUD_Ability_C.OnAbilityCommitted");
		
		UHUD_Ability_C_OnAbilityCommitted_Params params {};
		params.AbilityTags = AbilityTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Ability.HUD_Ability_C.OnAbilityCooldownActivatedOrRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TagCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Ability_C::OnAbilityCooldownActivatedOrRemoved(int32_t TagCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Ability.HUD_Ability_C.OnAbilityCooldownActivatedOrRemoved");
		
		UHUD_Ability_C_OnAbilityCooldownActivatedOrRemoved_Params params {};
		params.TagCount = TagCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Ability.HUD_Ability_C.DisplayInputName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Ability_C::DisplayInputName(const class FName& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Ability.HUD_Ability_C.DisplayInputName");
		
		UHUD_Ability_C_DisplayInputName_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Ability.HUD_Ability_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Ability_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Ability.HUD_Ability_C.Construct");
		
		UHUD_Ability_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Ability.HUD_Ability_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Ability_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Ability.HUD_Ability_C.Tick");
		
		UHUD_Ability_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Ability.HUD_Ability_C.ExecuteUbergraph_HUD_Ability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Ability_C::ExecuteUbergraph_HUD_Ability(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Ability.HUD_Ability_C.ExecuteUbergraph_HUD_Ability");
		
		UHUD_Ability_C_ExecuteUbergraph_HUD_Ability_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Ability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Ability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Ability.HUD_Ability_C");
		return ptr;
	}

}


