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
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.ApplyVisualSettingsAtLaunch
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::ApplyVisualSettingsAtLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.ApplyVisualSettingsAtLaunch");
		
		UGI_BP_Upgun_C_ApplyVisualSettingsAtLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.CheckCosmeticOwnership
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::CheckCosmeticOwnership()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.CheckCosmeticOwnership");
		
		UGI_BP_Upgun_C_CheckCosmeticOwnership_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.ApplyKeyMappingFromSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FallBackOnAZERTY                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGI_BP_Upgun_C::ApplyKeyMappingFromSave(bool FallBackOnAZERTY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.ApplyKeyMappingFromSave");
		
		UGI_BP_Upgun_C_ApplyKeyMappingFromSave_Params params {};
		params.FallBackOnAZERTY = FallBackOnAZERTY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.ResetMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseAZERTY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGI_BP_Upgun_C::ResetMapping(bool UseAZERTY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.ResetMapping");
		
		UGI_BP_Upgun_C_ResetMapping_Params params {};
		params.UseAZERTY = UseAZERTY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.RemoveMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ResetSavedValues                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGI_BP_Upgun_C::RemoveMapping(bool ResetSavedValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.RemoveMapping");
		
		UGI_BP_Upgun_C_RemoveMapping_Params params {};
		params.ResetSavedValues = ResetSavedValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.AjustVolumesAtLauch
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::AjustVolumesAtLauch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.AjustVolumesAtLauch");
		
		UGI_BP_Upgun_C_AjustVolumesAtLauch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.SaveData
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::SaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.SaveData");
		
		UGI_BP_Upgun_C_SaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.CreateSaveSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSlotCreated                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGI_BP_Upgun_C::CreateSaveSlot(bool* WasSlotCreated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.CreateSaveSlot");
		
		UGI_BP_Upgun_C_CreateSaveSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasSlotCreated != nullptr)
			*WasSlotCreated = params.WasSlotCreated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.Load Saved Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SAVE_C*                                  Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGI_BP_Upgun_C::Load_Saved_Data(class UBP_SAVE_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.Load Saved Data");
		
		UGI_BP_Upgun_C_Load_Saved_Data_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.ReceiveInit");
		
		UGI_BP_Upgun_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.BP_OnNetworkError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetworkFailure                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGI_BP_Upgun_C::BP_OnNetworkError(ENetworkFailure Type, const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.BP_OnNetworkError");
		
		UGI_BP_Upgun_C_BP_OnNetworkError_Params params {};
		params.Type = Type;
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.BP_OnInitialInventoryReady
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::BP_OnInitialInventoryReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.BP_OnInitialInventoryReady");
		
		UGI_BP_Upgun_C_BP_OnInitialInventoryReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.ExecuteUbergraph_GI_BP_Upgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGI_BP_Upgun_C::ExecuteUbergraph_GI_BP_Upgun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.ExecuteUbergraph_GI_BP_Upgun");
		
		UGI_BP_Upgun_C_ExecuteUbergraph_GI_BP_Upgun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.UpdateKeyMapping__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::UpdateKeyMapping__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.UpdateKeyMapping__DelegateSignature");
		
		UGI_BP_Upgun_C_UpdateKeyMapping__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.OnCosmeticsUpdated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::OnCosmeticsUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.OnCosmeticsUpdated__DelegateSignature");
		
		UGI_BP_Upgun_C_OnCosmeticsUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_BP_Upgun.GI_BP_Upgun_C.UpdateCrossHair__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGI_BP_Upgun_C::UpdateCrossHair__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_BP_Upgun.GI_BP_Upgun_C.UpdateCrossHair__DelegateSignature");
		
		UGI_BP_Upgun_C_UpdateCrossHair__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGI_BP_Upgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGI_BP_Upgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GI_BP_Upgun.GI_BP_Upgun_C");
		return ptr;
	}

}


