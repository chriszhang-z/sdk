/// GENERATED BY SDK TOOL.

/// DON'T MODIFY THIS FILE UNLESS YOU'RE FULLY UNDERSTANDING WHAT YOU ARE DOING!!!

#include "../PubSub/MessageCreator.h" 

using namespace Ruyi;

std::map<string, MessageCreatorFunc> MessageCreator::ccs;

void MessageCreator::Initialize()
{
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceEventHeader", Ruyi::SDK::InputManager::InputDeviceEventHeader);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceConnectionChanged", Ruyi::SDK::InputManager::InputDeviceConnectionChanged);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.RuyiInputStateChanged", Ruyi::SDK::InputManager::RuyiInputStateChanged);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceStateChangedX360", Ruyi::SDK::InputManager::InputDeviceStateChangedX360);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceStateChangedGamepad", Ruyi::SDK::InputManager::InputDeviceStateChangedGamepad);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceStateChangedJoystick", Ruyi::SDK::InputManager::InputDeviceStateChangedJoystick);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceStateChangedKeyboard", Ruyi::SDK::InputManager::InputDeviceStateChangedKeyboard);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceStateChangedMouse", Ruyi::SDK::InputManager::InputDeviceStateChangedMouse);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputActionTriggered", Ruyi::SDK::InputManager::InputActionTriggered);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.RuyiInputEvent", Ruyi::SDK::InputManager::RuyiInputEvent);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceStateChangedRuyiController", Ruyi::SDK::InputManager::InputDeviceStateChangedRuyiController);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.InputManager.InputDeviceStateChanged", Ruyi::SDK::InputManager::InputDeviceStateChanged);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.StorageLayer.GetLocalPathResult", Ruyi::SDK::StorageLayer::GetLocalPathResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.CategoryNode", Ruyi::SDK::SettingSystem::Api::CategoryNode);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.SettingSearchResult", Ruyi::SDK::SettingSystem::Api::SettingSearchResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.SettingTree", Ruyi::SDK::SettingSystem::Api::SettingTree);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.NodeList", Ruyi::SDK::SettingSystem::Api::NodeList);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.SettingItemNotification", Ruyi::SDK::SettingSystem::Api::SettingItemNotification);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.GlobalInputDefine.Gamepad", Ruyi::SDK::GlobalInputDefine::Gamepad);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.GlobalInputDefine.RuyiInputStateXB360", Ruyi::SDK::GlobalInputDefine::RuyiInputStateXB360);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.GlobalInputDefine.RuyiInputStateKeyboard", Ruyi::SDK::GlobalInputDefine::RuyiInputStateKeyboard);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.GlobalInputDefine.RuyiInputStateMouse", Ruyi::SDK::GlobalInputDefine::RuyiInputStateMouse);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.GlobalInputDefine.RuyiInputStateGamepad", Ruyi::SDK::GlobalInputDefine::RuyiInputStateGamepad);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.GlobalInputDefine.RuyiInputStateJoystick", Ruyi::SDK::GlobalInputDefine::RuyiInputStateJoystick);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.GlobalInputDefine.RuyiInputStateRuyiController", Ruyi::SDK::GlobalInputDefine::RuyiInputStateRuyiController);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.BrainCloudApi.FileUploadSuccessResult", Ruyi::SDK::BrainCloudApi::FileUploadSuccessResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.BrainCloudApi.FileUploadFailedResult", Ruyi::SDK::BrainCloudApi::FileUploadFailedResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.LocalizationService.LanguageChangedMsg", Ruyi::SDK::LocalizationService::LanguageChangedMsg);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.UserServiceExternal.InputActionEvent", Ruyi::SDK::UserServiceExternal::InputActionEvent);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.UserServiceExternal.UserEvent", Ruyi::SDK::UserServiceExternal::UserEvent);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.UserServiceExternal.UserInfo_Public", Ruyi::SDK::UserServiceExternal::UserInfo_Public);
}