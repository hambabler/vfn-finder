#pragma once

/**
 * Name: UpGun
 * Version: 0.5
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_LibFunction_Particle.BP_LibFunction_Particle_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_LibFunction_Particle_C : public UBlueprintFunctionLibrary
	{
	public:
		void ParticleSpawnLOOP(class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, class UMaterialInterface* Particle_Mat, const struct FLinearColor& Color, float Particle_Size, int32_t Particle_Rate, int32_t Spawn_Radius, int32_t System_Life_Time, class UObject* WorldContext);
		void Particle_Spawn_Circle(class USceneComponent* Attach_to_Component, const struct FVector& Location, const struct FLinearColor& Color, float Size, float speed, float SystemLifeTime, class UObject* WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
