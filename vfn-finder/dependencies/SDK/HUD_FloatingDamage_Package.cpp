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
	 * 		Name   -> Function HUD_FloatingDamage.HUD_FloatingDamage_C.SetDamageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FloatingDamage_C::SetDamageNumber(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FloatingDamage.HUD_FloatingDamage_C.SetDamageNumber");
		
		UHUD_FloatingDamage_C_SetDamageNumber_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FloatingDamage.HUD_FloatingDamage_C.SetDamageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Headshot                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UHUD_FloatingDamage_C::SetDamageText(const class FText& Text, bool Headshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FloatingDamage.HUD_FloatingDamage_C.SetDamageText");
		
		UHUD_FloatingDamage_C_SetDamageText_Params params {};
		params.Text = Text;
		params.Headshot = Headshot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FloatingDamage.HUD_FloatingDamage_C.ExecuteUbergraph_HUD_FloatingDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FloatingDamage_C::ExecuteUbergraph_HUD_FloatingDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FloatingDamage.HUD_FloatingDamage_C.ExecuteUbergraph_HUD_FloatingDamage");
		
		UHUD_FloatingDamage_C_ExecuteUbergraph_HUD_FloatingDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_FloatingDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_FloatingDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_FloatingDamage.HUD_FloatingDamage_C");
		return ptr;
	}

}


