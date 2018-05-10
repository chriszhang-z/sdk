/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef CommonTypeSDKDataTypes_TYPES_H
#define CommonTypeSDKDataTypes_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace Ruyi { namespace SDK { namespace CommonType {

struct LoginState {
  enum type {
    Logout = 0,
    Login = 1
  };
};

extern const std::map<int, const char*> _LoginState_VALUES_TO_NAMES;

struct InputCagetory {
  enum type {
    RuyiGamePad = 0,
    KeyboardMouse = 1,
    XBox360 = 2
  };
};

extern const std::map<int, const char*> _InputCagetory_VALUES_TO_NAMES;

struct ePlatform {
  enum type {
    None = 0,
    PC = 1,
    Console = 2,
    All = 3
  };
};

extern const std::map<int, const char*> _ePlatform_VALUES_TO_NAMES;

struct eUIType {
  enum type {
    None = 0,
    Toggle = 1,
    Text = 2,
    Slider = 3,
    CheckList = 4,
    OptionList = 5,
    DateTime = 6,
    TextInput = 7
  };
};

extern const std::map<int, const char*> _eUIType_VALUES_TO_NAMES;

class ErrorException;

class range;

class InputModifier;

class InputIdentifier;

class ActionTriggerInfo;

class InputActionInfo;

class notification;

class dataListItem;

class activeDependency;

class SettingValue;

class SettingItem;

class SettingCategory;

class ModuleSetting;

class AppDataRecord;

class AppDataCollection;

class AppData;

typedef struct _ErrorException__isset {
  _ErrorException__isset() : errId(false), errMsg(false) {}
  bool errId :1;
  bool errMsg :1;
} _ErrorException__isset;

class ErrorException : public ::apache::thrift::TException {
 public:

  ErrorException(const ErrorException&);
  ErrorException& operator=(const ErrorException&);
  ErrorException() : errId(0), errMsg() {
  }

  virtual ~ErrorException() throw();
  int32_t errId;
  std::string errMsg;

  _ErrorException__isset __isset;

  void __set_errId(const int32_t val);

  void __set_errMsg(const std::string& val);

  bool operator == (const ErrorException & rhs) const
  {
    if (!(errId == rhs.errId))
      return false;
    if (!(errMsg == rhs.errMsg))
      return false;
    return true;
  }
  bool operator != (const ErrorException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ErrorException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ErrorException &a, ErrorException &b);

inline std::ostream& operator<<(std::ostream& out, const ErrorException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _range__isset {
  _range__isset() : minimum(false), maximum(false) {}
  bool minimum :1;
  bool maximum :1;
} _range__isset;

class range : public virtual ::apache::thrift::TBase {
 public:

  range(const range&);
  range& operator=(const range&);
  range() : minimum(0), maximum(0) {
  }

  virtual ~range() throw();
  double minimum;
  double maximum;

  _range__isset __isset;

  void __set_minimum(const double val);

  void __set_maximum(const double val);

  bool operator == (const range & rhs) const
  {
    if (!(minimum == rhs.minimum))
      return false;
    if (!(maximum == rhs.maximum))
      return false;
    return true;
  }
  bool operator != (const range &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const range & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(range &a, range &b);

inline std::ostream& operator<<(std::ostream& out, const range& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InputModifier__isset {
  _InputModifier__isset() : DeadZone(false), Scale(false) {}
  bool DeadZone :1;
  bool Scale :1;
} _InputModifier__isset;

class InputModifier : public virtual ::apache::thrift::TBase {
 public:

  InputModifier(const InputModifier&);
  InputModifier& operator=(const InputModifier&);
  InputModifier() : Scale(0) {
  }

  virtual ~InputModifier() throw();
  range DeadZone;
  double Scale;

  _InputModifier__isset __isset;

  void __set_DeadZone(const range& val);

  void __set_Scale(const double val);

  bool operator == (const InputModifier & rhs) const
  {
    if (__isset.DeadZone != rhs.__isset.DeadZone)
      return false;
    else if (__isset.DeadZone && !(DeadZone == rhs.DeadZone))
      return false;
    if (!(Scale == rhs.Scale))
      return false;
    return true;
  }
  bool operator != (const InputModifier &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputModifier & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InputModifier &a, InputModifier &b);

inline std::ostream& operator<<(std::ostream& out, const InputModifier& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InputIdentifier__isset {
  _InputIdentifier__isset() : Device(false), Value(false), ActivateEvent(false), Modifier(false) {}
  bool Device :1;
  bool Value :1;
  bool ActivateEvent :1;
  bool Modifier :1;
} _InputIdentifier__isset;

class InputIdentifier : public virtual ::apache::thrift::TBase {
 public:

  InputIdentifier(const InputIdentifier&);
  InputIdentifier& operator=(const InputIdentifier&);
  InputIdentifier() : Device(), Value(), ActivateEvent() {
  }

  virtual ~InputIdentifier() throw();
  std::string Device;
  std::string Value;
  std::string ActivateEvent;
  InputModifier Modifier;

  _InputIdentifier__isset __isset;

  void __set_Device(const std::string& val);

  void __set_Value(const std::string& val);

  void __set_ActivateEvent(const std::string& val);

  void __set_Modifier(const InputModifier& val);

  bool operator == (const InputIdentifier & rhs) const
  {
    if (!(Device == rhs.Device))
      return false;
    if (!(Value == rhs.Value))
      return false;
    if (__isset.ActivateEvent != rhs.__isset.ActivateEvent)
      return false;
    else if (__isset.ActivateEvent && !(ActivateEvent == rhs.ActivateEvent))
      return false;
    if (__isset.Modifier != rhs.__isset.Modifier)
      return false;
    else if (__isset.Modifier && !(Modifier == rhs.Modifier))
      return false;
    return true;
  }
  bool operator != (const InputIdentifier &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputIdentifier & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InputIdentifier &a, InputIdentifier &b);

inline std::ostream& operator<<(std::ostream& out, const InputIdentifier& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionTriggerInfo__isset {
  _ActionTriggerInfo__isset() : InputCagetory(false), TriggerConditions(false), AutoTrigger(false), TriggerInterval(false) {}
  bool InputCagetory :1;
  bool TriggerConditions :1;
  bool AutoTrigger :1;
  bool TriggerInterval :1;
} _ActionTriggerInfo__isset;

class ActionTriggerInfo : public virtual ::apache::thrift::TBase {
 public:

  ActionTriggerInfo(const ActionTriggerInfo&);
  ActionTriggerInfo& operator=(const ActionTriggerInfo&);
  ActionTriggerInfo() : InputCagetory((InputCagetory::type)0), AutoTrigger(0), TriggerInterval(0) {
  }

  virtual ~ActionTriggerInfo() throw();
  InputCagetory::type InputCagetory;
  std::vector<InputIdentifier>  TriggerConditions;
  bool AutoTrigger;
  int32_t TriggerInterval;

  _ActionTriggerInfo__isset __isset;

  void __set_InputCagetory(const InputCagetory::type val);

  void __set_TriggerConditions(const std::vector<InputIdentifier> & val);

  void __set_AutoTrigger(const bool val);

  void __set_TriggerInterval(const int32_t val);

  bool operator == (const ActionTriggerInfo & rhs) const
  {
    if (!(InputCagetory == rhs.InputCagetory))
      return false;
    if (!(TriggerConditions == rhs.TriggerConditions))
      return false;
    if (__isset.AutoTrigger != rhs.__isset.AutoTrigger)
      return false;
    else if (__isset.AutoTrigger && !(AutoTrigger == rhs.AutoTrigger))
      return false;
    if (__isset.TriggerInterval != rhs.__isset.TriggerInterval)
      return false;
    else if (__isset.TriggerInterval && !(TriggerInterval == rhs.TriggerInterval))
      return false;
    return true;
  }
  bool operator != (const ActionTriggerInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionTriggerInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionTriggerInfo &a, ActionTriggerInfo &b);

inline std::ostream& operator<<(std::ostream& out, const ActionTriggerInfo& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InputActionInfo__isset {
  _InputActionInfo__isset() : ActionName(false), TriggerInfo(false) {}
  bool ActionName :1;
  bool TriggerInfo :1;
} _InputActionInfo__isset;

class InputActionInfo : public virtual ::apache::thrift::TBase {
 public:

  InputActionInfo(const InputActionInfo&);
  InputActionInfo& operator=(const InputActionInfo&);
  InputActionInfo() : ActionName() {
  }

  virtual ~InputActionInfo() throw();
  std::string ActionName;
  ActionTriggerInfo TriggerInfo;

  _InputActionInfo__isset __isset;

  void __set_ActionName(const std::string& val);

  void __set_TriggerInfo(const ActionTriggerInfo& val);

  bool operator == (const InputActionInfo & rhs) const
  {
    if (!(ActionName == rhs.ActionName))
      return false;
    if (!(TriggerInfo == rhs.TriggerInfo))
      return false;
    return true;
  }
  bool operator != (const InputActionInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputActionInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InputActionInfo &a, InputActionInfo &b);

inline std::ostream& operator<<(std::ostream& out, const InputActionInfo& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _notification__isset {
  _notification__isset() : title(false), detail(false), option(false) {}
  bool title :1;
  bool detail :1;
  bool option :1;
} _notification__isset;

class notification : public virtual ::apache::thrift::TBase {
 public:

  notification(const notification&);
  notification& operator=(const notification&);
  notification() : title(), detail() {
  }

  virtual ~notification() throw();
  std::string title;
  std::string detail;
  std::vector<std::string>  option;

  _notification__isset __isset;

  void __set_title(const std::string& val);

  void __set_detail(const std::string& val);

  void __set_option(const std::vector<std::string> & val);

  bool operator == (const notification & rhs) const
  {
    if (!(title == rhs.title))
      return false;
    if (!(detail == rhs.detail))
      return false;
    if (!(option == rhs.option))
      return false;
    return true;
  }
  bool operator != (const notification &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const notification & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(notification &a, notification &b);

inline std::ostream& operator<<(std::ostream& out, const notification& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _dataListItem__isset {
  _dataListItem__isset() : elementType(false), values(false), removeNotification(false) {}
  bool elementType :1;
  bool values :1;
  bool removeNotification :1;
} _dataListItem__isset;

class dataListItem : public virtual ::apache::thrift::TBase {
 public:

  dataListItem(const dataListItem&);
  dataListItem& operator=(const dataListItem&);
  dataListItem() : elementType() {
  }

  virtual ~dataListItem() throw();
  std::string elementType;
  std::vector<std::string>  values;
  notification removeNotification;

  _dataListItem__isset __isset;

  void __set_elementType(const std::string& val);

  void __set_values(const std::vector<std::string> & val);

  void __set_removeNotification(const notification& val);

  bool operator == (const dataListItem & rhs) const
  {
    if (!(elementType == rhs.elementType))
      return false;
    if (!(values == rhs.values))
      return false;
    if (!(removeNotification == rhs.removeNotification))
      return false;
    return true;
  }
  bool operator != (const dataListItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const dataListItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(dataListItem &a, dataListItem &b);

inline std::ostream& operator<<(std::ostream& out, const dataListItem& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _activeDependency__isset {
  _activeDependency__isset() : name(false), condition(false) {}
  bool name :1;
  bool condition :1;
} _activeDependency__isset;

class activeDependency : public virtual ::apache::thrift::TBase {
 public:

  activeDependency(const activeDependency&);
  activeDependency& operator=(const activeDependency&);
  activeDependency() : name(), condition() {
  }

  virtual ~activeDependency() throw();
  std::string name;
  std::string condition;

  _activeDependency__isset __isset;

  void __set_name(const std::string& val);

  void __set_condition(const std::string& val);

  bool operator == (const activeDependency & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(condition == rhs.condition))
      return false;
    return true;
  }
  bool operator != (const activeDependency &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const activeDependency & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(activeDependency &a, activeDependency &b);

inline std::ostream& operator<<(std::ostream& out, const activeDependency& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _SettingValue__isset {
  _SettingValue__isset() : dataType(false), dataValue(false) {}
  bool dataType :1;
  bool dataValue :1;
} _SettingValue__isset;

class SettingValue : public virtual ::apache::thrift::TBase {
 public:

  SettingValue(const SettingValue&);
  SettingValue& operator=(const SettingValue&);
  SettingValue() : dataType(), dataValue() {
  }

  virtual ~SettingValue() throw();
  std::string dataType;
  std::string dataValue;

  _SettingValue__isset __isset;

  void __set_dataType(const std::string& val);

  void __set_dataValue(const std::string& val);

  bool operator == (const SettingValue & rhs) const
  {
    if (!(dataType == rhs.dataType))
      return false;
    if (!(dataValue == rhs.dataValue))
      return false;
    return true;
  }
  bool operator != (const SettingValue &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SettingValue & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SettingValue &a, SettingValue &b);

inline std::ostream& operator<<(std::ostream& out, const SettingValue& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _SettingItem__isset {
  _SettingItem__isset() : id(false), display(false), dataType(false), dataValue(false), dataList(false), platform(false), summary(false), description(false), UIType(false), devModeOnly(false), internalOnly(false), readOnly(false), isValid(false), isActive(false), validation(false), activeDependencies(false), ActionName(false), ActionObject(false), ActionMethodName(false) {}
  bool id :1;
  bool display :1;
  bool dataType :1;
  bool dataValue :1;
  bool dataList :1;
  bool platform :1;
  bool summary :1;
  bool description :1;
  bool UIType :1;
  bool devModeOnly :1;
  bool internalOnly :1;
  bool readOnly :1;
  bool isValid :1;
  bool isActive :1;
  bool validation :1;
  bool activeDependencies :1;
  bool ActionName :1;
  bool ActionObject :1;
  bool ActionMethodName :1;
} _SettingItem__isset;

class SettingItem : public virtual ::apache::thrift::TBase {
 public:

  SettingItem(const SettingItem&);
  SettingItem& operator=(const SettingItem&);
  SettingItem() : id(), display(), dataType(), dataValue(), platform((ePlatform::type)0), summary(), description(), UIType((eUIType::type)0), devModeOnly(0), internalOnly(0), readOnly(0), isValid(0), isActive(0), validation(), ActionName(), ActionObject(), ActionMethodName() {
  }

  virtual ~SettingItem() throw();
  std::string id;
  std::string display;
  std::string dataType;
  std::string dataValue;
  dataListItem dataList;
  ePlatform::type platform;
  std::string summary;
  std::string description;
  eUIType::type UIType;
  bool devModeOnly;
  bool internalOnly;
  bool readOnly;
  bool isValid;
  bool isActive;
  std::string validation;
  std::vector<activeDependency>  activeDependencies;
  std::string ActionName;
  std::string ActionObject;
  std::string ActionMethodName;

  _SettingItem__isset __isset;

  void __set_id(const std::string& val);

  void __set_display(const std::string& val);

  void __set_dataType(const std::string& val);

  void __set_dataValue(const std::string& val);

  void __set_dataList(const dataListItem& val);

  void __set_platform(const ePlatform::type val);

  void __set_summary(const std::string& val);

  void __set_description(const std::string& val);

  void __set_UIType(const eUIType::type val);

  void __set_devModeOnly(const bool val);

  void __set_internalOnly(const bool val);

  void __set_readOnly(const bool val);

  void __set_isValid(const bool val);

  void __set_isActive(const bool val);

  void __set_validation(const std::string& val);

  void __set_activeDependencies(const std::vector<activeDependency> & val);

  void __set_ActionName(const std::string& val);

  void __set_ActionObject(const std::string& val);

  void __set_ActionMethodName(const std::string& val);

  bool operator == (const SettingItem & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(display == rhs.display))
      return false;
    if (!(dataType == rhs.dataType))
      return false;
    if (!(dataValue == rhs.dataValue))
      return false;
    if (__isset.dataList != rhs.__isset.dataList)
      return false;
    else if (__isset.dataList && !(dataList == rhs.dataList))
      return false;
    if (__isset.platform != rhs.__isset.platform)
      return false;
    else if (__isset.platform && !(platform == rhs.platform))
      return false;
    if (__isset.summary != rhs.__isset.summary)
      return false;
    else if (__isset.summary && !(summary == rhs.summary))
      return false;
    if (__isset.description != rhs.__isset.description)
      return false;
    else if (__isset.description && !(description == rhs.description))
      return false;
    if (__isset.UIType != rhs.__isset.UIType)
      return false;
    else if (__isset.UIType && !(UIType == rhs.UIType))
      return false;
    if (__isset.devModeOnly != rhs.__isset.devModeOnly)
      return false;
    else if (__isset.devModeOnly && !(devModeOnly == rhs.devModeOnly))
      return false;
    if (__isset.internalOnly != rhs.__isset.internalOnly)
      return false;
    else if (__isset.internalOnly && !(internalOnly == rhs.internalOnly))
      return false;
    if (__isset.readOnly != rhs.__isset.readOnly)
      return false;
    else if (__isset.readOnly && !(readOnly == rhs.readOnly))
      return false;
    if (!(isValid == rhs.isValid))
      return false;
    if (!(isActive == rhs.isActive))
      return false;
    if (__isset.validation != rhs.__isset.validation)
      return false;
    else if (__isset.validation && !(validation == rhs.validation))
      return false;
    if (__isset.activeDependencies != rhs.__isset.activeDependencies)
      return false;
    else if (__isset.activeDependencies && !(activeDependencies == rhs.activeDependencies))
      return false;
    if (!(ActionName == rhs.ActionName))
      return false;
    if (!(ActionObject == rhs.ActionObject))
      return false;
    if (!(ActionMethodName == rhs.ActionMethodName))
      return false;
    return true;
  }
  bool operator != (const SettingItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SettingItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SettingItem &a, SettingItem &b);

inline std::ostream& operator<<(std::ostream& out, const SettingItem& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _SettingCategory__isset {
  _SettingCategory__isset() : id(false), display(false), summary(false), description(false), sortingPriority(false), isSystemCategory(false), items(false), enable(false), showInUI(false) {}
  bool id :1;
  bool display :1;
  bool summary :1;
  bool description :1;
  bool sortingPriority :1;
  bool isSystemCategory :1;
  bool items :1;
  bool enable :1;
  bool showInUI :1;
} _SettingCategory__isset;

class SettingCategory : public virtual ::apache::thrift::TBase {
 public:

  SettingCategory(const SettingCategory&);
  SettingCategory& operator=(const SettingCategory&);
  SettingCategory() : id(), display(), summary(), description(), sortingPriority(0), isSystemCategory(0), enable(0), showInUI(0) {
  }

  virtual ~SettingCategory() throw();
  std::string id;
  std::string display;
  std::string summary;
  std::string description;
  int32_t sortingPriority;
  bool isSystemCategory;
  std::map<std::string, int32_t>  items;
  bool enable;
  bool showInUI;

  _SettingCategory__isset __isset;

  void __set_id(const std::string& val);

  void __set_display(const std::string& val);

  void __set_summary(const std::string& val);

  void __set_description(const std::string& val);

  void __set_sortingPriority(const int32_t val);

  void __set_isSystemCategory(const bool val);

  void __set_items(const std::map<std::string, int32_t> & val);

  void __set_enable(const bool val);

  void __set_showInUI(const bool val);

  bool operator == (const SettingCategory & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(display == rhs.display))
      return false;
    if (__isset.summary != rhs.__isset.summary)
      return false;
    else if (__isset.summary && !(summary == rhs.summary))
      return false;
    if (__isset.description != rhs.__isset.description)
      return false;
    else if (__isset.description && !(description == rhs.description))
      return false;
    if (!(sortingPriority == rhs.sortingPriority))
      return false;
    if (!(isSystemCategory == rhs.isSystemCategory))
      return false;
    if (!(items == rhs.items))
      return false;
    if (!(enable == rhs.enable))
      return false;
    if (!(showInUI == rhs.showInUI))
      return false;
    return true;
  }
  bool operator != (const SettingCategory &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SettingCategory & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SettingCategory &a, SettingCategory &b);

inline std::ostream& operator<<(std::ostream& out, const SettingCategory& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ModuleSetting__isset {
  _ModuleSetting__isset() : name(false), version(false), settings(false), categories(false) {}
  bool name :1;
  bool version :1;
  bool settings :1;
  bool categories :1;
} _ModuleSetting__isset;

class ModuleSetting : public virtual ::apache::thrift::TBase {
 public:

  ModuleSetting(const ModuleSetting&);
  ModuleSetting& operator=(const ModuleSetting&);
  ModuleSetting() : name(), version() {
  }

  virtual ~ModuleSetting() throw();
  std::string name;
  std::string version;
  std::vector<SettingItem>  settings;
  std::vector<SettingCategory>  categories;

  _ModuleSetting__isset __isset;

  void __set_name(const std::string& val);

  void __set_version(const std::string& val);

  void __set_settings(const std::vector<SettingItem> & val);

  void __set_categories(const std::vector<SettingCategory> & val);

  bool operator == (const ModuleSetting & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(version == rhs.version))
      return false;
    if (!(settings == rhs.settings))
      return false;
    if (!(categories == rhs.categories))
      return false;
    return true;
  }
  bool operator != (const ModuleSetting &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ModuleSetting & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ModuleSetting &a, ModuleSetting &b);

inline std::ostream& operator<<(std::ostream& out, const ModuleSetting& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AppDataRecord__isset {
  _AppDataRecord__isset() : id(false), content(false) {}
  bool id :1;
  bool content :1;
} _AppDataRecord__isset;

class AppDataRecord : public virtual ::apache::thrift::TBase {
 public:

  AppDataRecord(const AppDataRecord&);
  AppDataRecord& operator=(const AppDataRecord&);
  AppDataRecord() : id() {
  }

  virtual ~AppDataRecord() throw();
  std::string id;
  SettingValue content;

  _AppDataRecord__isset __isset;

  void __set_id(const std::string& val);

  void __set_content(const SettingValue& val);

  bool operator == (const AppDataRecord & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(content == rhs.content))
      return false;
    return true;
  }
  bool operator != (const AppDataRecord &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AppDataRecord & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AppDataRecord &a, AppDataRecord &b);

inline std::ostream& operator<<(std::ostream& out, const AppDataRecord& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AppDataCollection__isset {
  _AppDataCollection__isset() : category(false), records(false) {}
  bool category :1;
  bool records :1;
} _AppDataCollection__isset;

class AppDataCollection : public virtual ::apache::thrift::TBase {
 public:

  AppDataCollection(const AppDataCollection&);
  AppDataCollection& operator=(const AppDataCollection&);
  AppDataCollection() : category() {
  }

  virtual ~AppDataCollection() throw();
  std::string category;
  std::vector<AppDataRecord>  records;

  _AppDataCollection__isset __isset;

  void __set_category(const std::string& val);

  void __set_records(const std::vector<AppDataRecord> & val);

  bool operator == (const AppDataCollection & rhs) const
  {
    if (!(category == rhs.category))
      return false;
    if (!(records == rhs.records))
      return false;
    return true;
  }
  bool operator != (const AppDataCollection &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AppDataCollection & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AppDataCollection &a, AppDataCollection &b);

inline std::ostream& operator<<(std::ostream& out, const AppDataCollection& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AppData__isset {
  _AppData__isset() : appId(false), data(false) {}
  bool appId :1;
  bool data :1;
} _AppData__isset;

class AppData : public virtual ::apache::thrift::TBase {
 public:

  AppData(const AppData&);
  AppData& operator=(const AppData&);
  AppData() : appId() {
  }

  virtual ~AppData() throw();
  std::string appId;
  std::vector<AppDataCollection>  data;

  _AppData__isset __isset;

  void __set_appId(const std::string& val);

  void __set_data(const std::vector<AppDataCollection> & val);

  bool operator == (const AppData & rhs) const
  {
    if (!(appId == rhs.appId))
      return false;
    if (!(data == rhs.data))
      return false;
    return true;
  }
  bool operator != (const AppData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AppData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AppData &a, AppData &b);

inline std::ostream& operator<<(std::ostream& out, const AppData& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
