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
	 * BlueprintGeneratedClass BP_Lobby_PlayerState.BP_Lobby_PlayerState_C
	 * Size -> 0x0008 (FullSize[0x0480] - InheritedSize[0x0478])
	 */
	class ABP_Lobby_PlayerState_C : public AUpGunLobbyPlayerState
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
