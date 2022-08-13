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
	 * 		Name   -> Function W_Fire.W_Fire_C.OnBurningTagUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TagCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Fire_C::OnBurningTagUpdated(int32_t TagCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Fire.W_Fire_C.OnBurningTagUpdated");
		
		UW_Fire_C_OnBurningTagUpdated_Params params {};
		params.TagCount = TagCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Fire.W_Fire_C.Finished_8417E8114AC64806976257986C299219
	 * 		Flags  -> ()
	 */
	void UW_Fire_C::Finished_8417E8114AC64806976257986C299219()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Fire.W_Fire_C.Finished_8417E8114AC64806976257986C299219");
		
		UW_Fire_C_Finished_8417E8114AC64806976257986C299219_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Fire.W_Fire_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Fire_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Fire.W_Fire_C.Construct");
		
		UW_Fire_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Fire.W_Fire_C.EndFire
	 * 		Flags  -> ()
	 */
	void UW_Fire_C::EndFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Fire.W_Fire_C.EndFire");
		
		UW_Fire_C_EndFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Fire.W_Fire_C.StartFire
	 * 		Flags  -> ()
	 */
	void UW_Fire_C::StartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Fire.W_Fire_C.StartFire");
		
		UW_Fire_C_StartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Fire.W_Fire_C.ExecuteUbergraph_W_Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Fire_C::ExecuteUbergraph_W_Fire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Fire.W_Fire_C.ExecuteUbergraph_W_Fire");
		
		UW_Fire_C_ExecuteUbergraph_W_Fire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Fire.W_Fire_C");
		return ptr;
	}

}


