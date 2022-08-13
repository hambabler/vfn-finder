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
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.AreCosmeticsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Updated                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACharacterePrevisCustom_C::AreCosmeticsUpdated(bool* Updated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.AreCosmeticsUpdated");
		
		ACharacterePrevisCustom_C_AreCosmeticsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Updated != nullptr)
			*Updated = params.Updated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.UserConstructionScript");
		
		ACharacterePrevisCustom_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.Boing__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::Boing__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.Boing__FinishedFunc");
		
		ACharacterePrevisCustom_C_Boing__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.Boing__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::Boing__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.Boing__UpdateFunc");
		
		ACharacterePrevisCustom_C_Boing__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.Spin__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::Spin__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.Spin__FinishedFunc");
		
		ACharacterePrevisCustom_C_Spin__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.Spin__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::Spin__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.Spin__UpdateFunc");
		
		ACharacterePrevisCustom_C_Spin__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyEnd_510764A04CE91D20BB875CB61A99C2E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnNotifyEnd_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyEnd_510764A04CE91D20BB875CB61A99C2E0");
		
		ACharacterePrevisCustom_C_OnNotifyEnd_510764A04CE91D20BB875CB61A99C2E0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyBegin_510764A04CE91D20BB875CB61A99C2E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnNotifyBegin_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyBegin_510764A04CE91D20BB875CB61A99C2E0");
		
		ACharacterePrevisCustom_C_OnNotifyBegin_510764A04CE91D20BB875CB61A99C2E0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnInterrupted_510764A04CE91D20BB875CB61A99C2E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnInterrupted_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnInterrupted_510764A04CE91D20BB875CB61A99C2E0");
		
		ACharacterePrevisCustom_C_OnInterrupted_510764A04CE91D20BB875CB61A99C2E0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnBlendOut_510764A04CE91D20BB875CB61A99C2E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnBlendOut_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnBlendOut_510764A04CE91D20BB875CB61A99C2E0");
		
		ACharacterePrevisCustom_C_OnBlendOut_510764A04CE91D20BB875CB61A99C2E0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnCompleted_510764A04CE91D20BB875CB61A99C2E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnCompleted_510764A04CE91D20BB875CB61A99C2E0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnCompleted_510764A04CE91D20BB875CB61A99C2E0");
		
		ACharacterePrevisCustom_C_OnCompleted_510764A04CE91D20BB875CB61A99C2E0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyEnd_963433F44BA515CA8BCB8A81A4BF77E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnNotifyEnd_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyEnd_963433F44BA515CA8BCB8A81A4BF77E9");
		
		ACharacterePrevisCustom_C_OnNotifyEnd_963433F44BA515CA8BCB8A81A4BF77E9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyBegin_963433F44BA515CA8BCB8A81A4BF77E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnNotifyBegin_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnNotifyBegin_963433F44BA515CA8BCB8A81A4BF77E9");
		
		ACharacterePrevisCustom_C_OnNotifyBegin_963433F44BA515CA8BCB8A81A4BF77E9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnInterrupted_963433F44BA515CA8BCB8A81A4BF77E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnInterrupted_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnInterrupted_963433F44BA515CA8BCB8A81A4BF77E9");
		
		ACharacterePrevisCustom_C_OnInterrupted_963433F44BA515CA8BCB8A81A4BF77E9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnBlendOut_963433F44BA515CA8BCB8A81A4BF77E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnBlendOut_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnBlendOut_963433F44BA515CA8BCB8A81A4BF77E9");
		
		ACharacterePrevisCustom_C_OnBlendOut_963433F44BA515CA8BCB8A81A4BF77E9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnCompleted_963433F44BA515CA8BCB8A81A4BF77E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::OnCompleted_963433F44BA515CA8BCB8A81A4BF77E9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnCompleted_963433F44BA515CA8BCB8A81A4BF77E9");
		
		ACharacterePrevisCustom_C_OnCompleted_963433F44BA515CA8BCB8A81A4BF77E9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.ReceiveBeginPlay");
		
		ACharacterePrevisCustom_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.Play Anim chapeau
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::Play_Anim_chapeau()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.Play Anim chapeau");
		
		ACharacterePrevisCustom_C_Play_Anim_chapeau_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.PlayMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpGunCosmeticType                                 Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::PlayMontage(EUpGunCosmeticType Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.PlayMontage");
		
		ACharacterePrevisCustom_C_PlayMontage_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.SpinKnife
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::SpinKnife()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.SpinKnife");
		
		ACharacterePrevisCustom_C_SpinKnife_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.SwitchWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpGunCosmeticType                                 WeaponToEquip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::SwitchWeapon(EUpGunCosmeticType WeaponToEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.SwitchWeapon");
		
		ACharacterePrevisCustom_C_SwitchWeapon_Params params {};
		params.WeaponToEquip = WeaponToEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnCosmeticsUpdated
	 * 		Flags  -> ()
	 */
	void ACharacterePrevisCustom_C::OnCosmeticsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.OnCosmeticsUpdated");
		
		ACharacterePrevisCustom_C_OnCosmeticsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterePrevisCustom.CharacterePrevisCustom_C.ExecuteUbergraph_CharacterePrevisCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterePrevisCustom_C::ExecuteUbergraph_CharacterePrevisCustom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterePrevisCustom.CharacterePrevisCustom_C.ExecuteUbergraph_CharacterePrevisCustom");
		
		ACharacterePrevisCustom_C_ExecuteUbergraph_CharacterePrevisCustom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACharacterePrevisCustom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACharacterePrevisCustom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterePrevisCustom.CharacterePrevisCustom_C");
		return ptr;
	}

}


