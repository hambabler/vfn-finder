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
	 * BlueprintGeneratedClass BP_Chatbox_Message.BP_Chatbox_Message_C
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UBP_Chatbox_Message_C : public UObject
	{
	public:
		struct FUpGunChatMessage                                   Message;                                                 // 0x0028(0x0028) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
