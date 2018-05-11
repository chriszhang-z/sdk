namespace csharp Ruyi.SDK.CommonType
namespace cpp Ruyi.SDK.CommonType

enum LoginState {
    /** Logout state */
	Logout = 0,
    /** Login state */
	Login = 1,
}

enum InputCagetory {
    RuyiGamePad = 0,
    KeyboardMouse = 1,
    XBox360 = 2,
}

enum ePlatform {
    None = 0,
    PC = 1,
    Console = 2,
    All = 3,
}

enum eUIType {
    None = 0,
    Toggle = 1,
    Text = 2,
    Slider = 3,
    CheckList = 4,
    OptionList = 5,
    DateTime = 6,
    TextInput = 7,
}


exception ErrorException {
	1: i32 errId,
	2: string errMsg,
}

struct range {
    1: double minimum,
    2: double maximum,
}

struct InputModifier {
    1: optional range DeadZone,
    2: double Scale,
}

struct InputIdentifier {
    1: string Device,
    2: string Value,
    3: optional string ActivateEvent,
    4: optional InputModifier Modifier,
}

struct ActionTriggerInfo {
    1: InputCagetory InputCagetory,
    2: list<InputIdentifier> TriggerConditions,
    3: optional bool AutoTrigger,
    4: optional i32 TriggerInterval,
}

struct InputActionInfo {
    1: string ActionName,
    2: ActionTriggerInfo TriggerInfo,
}

struct notification {
    1: string title,
    2: string detail,
    3: list<string> option,
}

struct dataListItem {
    1: string elementType,
    2: list<string> values,
    3: notification removeNotification,
}

struct activeDependency {
    1: string name,
    2: string condition,
}

struct SettingValue {
    1: string dataType,
    2: string dataValue,
}

struct SettingItem {
    1: string id,
    2: string display,
    3: string dataType,
    4: string dataValue,
    5: optional dataListItem dataList,
    6: optional ePlatform platform,
    7: optional string summary,
    8: optional string description,
    9: optional eUIType UIType,
    10: optional bool devModeOnly,
    11: optional bool internalOnly,
    12: optional bool readOnly,
    13: bool isValid,
    14: bool isActive,
    15: optional string validation,
    16: optional list<activeDependency> activeDependencies,
    17: string ActionName,
    18: string ActionObject,
    19: string ActionMethodName,
}

struct SettingCategory {
    1: string id,
    2: string display,
    3: optional string summary,
    4: optional string description,
    5: i32 sortingPriority,
    6: bool isSystemCategory,
    7: map<string, i32> items,
    8: bool enable,
    9: bool showInUI,
}

struct ModuleSetting {
    1: string name,
    2: string version,
    3: list<SettingItem> settings,
    4: list<SettingCategory> categories,
}

struct AppDataRecord {
    /** The record ID */
	1: string id,
    /** The record value */
	2: SettingValue content,
}

struct AppDataCollection {
    /** The category of the records */
	1: string category,
    /** The records of the collection. See AppDataRecord */
	2: list<AppDataRecord> records,
}

struct AppData {
    /** The App ID */
	1: string appId,
    /** The user data of the App. See AppDataCollection */
	2: list<AppDataCollection> data,
}


