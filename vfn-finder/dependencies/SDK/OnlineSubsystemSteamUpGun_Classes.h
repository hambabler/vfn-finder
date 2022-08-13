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
	 * Class OnlineSubsystemSteamUpGun.SteamUpGunAuthComponentModuleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamUpGunAuthComponentModuleInterface : public UHandlerComponentFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteamUpGun.SteamUpGunNetConnection
	 * Size -> 0x0008 (FullSize[0x1B98] - InheritedSize[0x1B90])
	 */
	class USteamUpGunNetConnection : public UIpConnection
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x1B90(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HC1[0x7];                                   // 0x1B91(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteamUpGun.SteamUpGunNetDriver
	 * Size -> 0x0008 (FullSize[0x07C0] - InheritedSize[0x07B8])
	 */
	class USteamUpGunNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_MBSD[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
