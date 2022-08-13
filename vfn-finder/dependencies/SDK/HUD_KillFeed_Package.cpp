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
	 * 		Name   -> Function HUD_KillFeed.HUD_KillFeed_C.OnPlayerKilledOther
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AUpGunBasePlayerState*                       Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AUpGunBasePlayerState*                       Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_KillFeed_C::OnPlayerKilledOther(const struct FGameplayEffectSpec& Spec, float Amount, class AUpGunBasePlayerState* Victim, class AUpGunBasePlayerState* Killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeed.HUD_KillFeed_C.OnPlayerKilledOther");
		
		UHUD_KillFeed_C_OnPlayerKilledOther_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		params.Victim = Victim;
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_KillFeed.HUD_KillFeed_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_KillFeed_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeed.HUD_KillFeed_C.Construct");
		
		UHUD_KillFeed_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_KillFeed.HUD_KillFeed_C.ExecuteUbergraph_HUD_KillFeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_KillFeed_C::ExecuteUbergraph_HUD_KillFeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeed.HUD_KillFeed_C.ExecuteUbergraph_HUD_KillFeed");
		
		UHUD_KillFeed_C_ExecuteUbergraph_HUD_KillFeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_KillFeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_KillFeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_KillFeed.HUD_KillFeed_C");
		return ptr;
	}

}


