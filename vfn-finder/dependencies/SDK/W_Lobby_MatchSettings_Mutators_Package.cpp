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
	 * 		Name   -> Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.SetWidgetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowMutators                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Lobby_MatchSettings_Mutators_C::SetWidgetVisibility(bool ShowMutators, bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.SetWidgetVisibility");
		
		UW_Lobby_MatchSettings_Mutators_C_SetWidgetVisibility_Params params {};
		params.ShowMutators = ShowMutators;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Lobby_MatchSettings_Mutators_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.Construct");
		
		UW_Lobby_MatchSettings_Mutators_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Lobby_MatchSettings_Mutators_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.PreConstruct");
		
		UW_Lobby_MatchSettings_Mutators_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.ExecuteUbergraph_W_Lobby_MatchSettings_Mutators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Lobby_MatchSettings_Mutators_C::ExecuteUbergraph_W_Lobby_MatchSettings_Mutators(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.ExecuteUbergraph_W_Lobby_MatchSettings_Mutators");
		
		UW_Lobby_MatchSettings_Mutators_C_ExecuteUbergraph_W_Lobby_MatchSettings_Mutators_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Lobby_MatchSettings_Mutators_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Lobby_MatchSettings_Mutators_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C");
		return ptr;
	}

}


