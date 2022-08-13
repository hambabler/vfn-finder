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
	 * 		Name   -> Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Deathmatch_Ghost_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Construct");
		
		UHUD_Deathmatch_Ghost_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Deathmatch_Ghost_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.PreConstruct");
		
		UHUD_Deathmatch_Ghost_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Boouh
	 * 		Flags  -> ()
	 */
	void UHUD_Deathmatch_Ghost_C::Boouh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Boouh");
		
		UHUD_Deathmatch_Ghost_C_Boouh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.ResetHUD
	 * 		Flags  -> ()
	 */
	void UHUD_Deathmatch_Ghost_C::ResetHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.ResetHUD");
		
		UHUD_Deathmatch_Ghost_C_ResetHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Deathmatch_Ghost_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Tick");
		
		UHUD_Deathmatch_Ghost_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.OnAcknowledgedPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Deathmatch_Ghost_C::OnAcknowledgedPossession(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.OnAcknowledgedPossession");
		
		UHUD_Deathmatch_Ghost_C_OnAcknowledgedPossession_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.ExecuteUbergraph_HUD_Deathmatch_Ghost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Deathmatch_Ghost_C::ExecuteUbergraph_HUD_Deathmatch_Ghost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.ExecuteUbergraph_HUD_Deathmatch_Ghost");
		
		UHUD_Deathmatch_Ghost_C_ExecuteUbergraph_HUD_Deathmatch_Ghost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Deathmatch_Ghost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Deathmatch_Ghost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C");
		return ptr;
	}

}


