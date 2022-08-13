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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_VerifiedPlayers.S_VerifiedPlayers
	 * Size -> 0x0018
	 */
	struct FS_VerifiedPlayers
	{
	public:
		TArray<class FString>                                      Names_3_9D06D32746E89B32663A45AE6C705F3E;                // 0x0000(0x0010) Edit, BlueprintVisible
		class UTexture2D*                                          Icon_7_1B53400646B0990479D9328C17D62C08;                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
