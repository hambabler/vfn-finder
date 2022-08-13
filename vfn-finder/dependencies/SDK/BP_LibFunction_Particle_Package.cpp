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
	 * 		Name   -> Function BP_LibFunction_Particle.BP_LibFunction_Particle_C.ParticleSpawnLOOP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Particle_Mat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Particle_Size                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Particle_Rate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Spawn_Radius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            System_Life_Time                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LibFunction_Particle_C::ParticleSpawnLOOP(class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, class UMaterialInterface* Particle_Mat, const struct FLinearColor& Color, float Particle_Size, int32_t Particle_Rate, int32_t Spawn_Radius, int32_t System_Life_Time, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LibFunction_Particle.BP_LibFunction_Particle_C.ParticleSpawnLOOP");
		
		UBP_LibFunction_Particle_C_ParticleSpawnLOOP_Params params {};
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Particle_Mat = Particle_Mat;
		params.Color = Color;
		params.Particle_Size = Particle_Size;
		params.Particle_Rate = Particle_Rate;
		params.Spawn_Radius = Spawn_Radius;
		params.System_Life_Time = System_Life_Time;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LibFunction_Particle.BP_LibFunction_Particle_C.Particle Spawn Circle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Attach_to_Component                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SystemLifeTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LibFunction_Particle_C::Particle_Spawn_Circle(class USceneComponent* Attach_to_Component, const struct FVector& Location, const struct FLinearColor& Color, float Size, float speed, float SystemLifeTime, class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LibFunction_Particle.BP_LibFunction_Particle_C.Particle Spawn Circle");
		
		UBP_LibFunction_Particle_C_Particle_Spawn_Circle_Params params {};
		params.Attach_to_Component = Attach_to_Component;
		params.Location = Location;
		params.Color = Color;
		params.Size = Size;
		params.speed = speed;
		params.SystemLifeTime = SystemLifeTime;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LibFunction_Particle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LibFunction_Particle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LibFunction_Particle.BP_LibFunction_Particle_C");
		return ptr;
	}

}


