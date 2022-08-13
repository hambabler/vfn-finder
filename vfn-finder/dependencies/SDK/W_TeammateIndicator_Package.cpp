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
	 * 		Name   -> Function W_TeammateIndicator.W_TeammateIndicator_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UW_TeammateIndicator_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TeammateIndicator.W_TeammateIndicator_C.UpdateVisibility");
		
		UW_TeammateIndicator_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TeammateIndicator.W_TeammateIndicator_C.UpdateColor
	 * 		Flags  -> ()
	 */
	void UW_TeammateIndicator_C::UpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TeammateIndicator.W_TeammateIndicator_C.UpdateColor");
		
		UW_TeammateIndicator_C_UpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TeammateIndicator.W_TeammateIndicator_C.Get_PS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       UpGun_PS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UW_TeammateIndicator_C::Get_PS(class AUpGunBasePlayerState** UpGun_PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TeammateIndicator.W_TeammateIndicator_C.Get_PS");
		
		UW_TeammateIndicator_C_Get_PS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpGun_PS != nullptr)
			*UpGun_PS = params.UpGun_PS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TeammateIndicator.W_TeammateIndicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_TeammateIndicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TeammateIndicator.W_TeammateIndicator_C.Construct");
		
		UW_TeammateIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TeammateIndicator.W_TeammateIndicator_C.Initialized
	 * 		Flags  -> ()
	 */
	void UW_TeammateIndicator_C::Initialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TeammateIndicator.W_TeammateIndicator_C.Initialized");
		
		UW_TeammateIndicator_C_Initialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TeammateIndicator.W_TeammateIndicator_C.OnCharacterKilled
	 * 		Flags  -> ()
	 */
	void UW_TeammateIndicator_C::OnCharacterKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TeammateIndicator.W_TeammateIndicator_C.OnCharacterKilled");
		
		UW_TeammateIndicator_C_OnCharacterKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TeammateIndicator.W_TeammateIndicator_C.ExecuteUbergraph_W_TeammateIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TeammateIndicator_C::ExecuteUbergraph_W_TeammateIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TeammateIndicator.W_TeammateIndicator_C.ExecuteUbergraph_W_TeammateIndicator");
		
		UW_TeammateIndicator_C_ExecuteUbergraph_W_TeammateIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TeammateIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TeammateIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TeammateIndicator.W_TeammateIndicator_C");
		return ptr;
	}

}


