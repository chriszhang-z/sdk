/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef GlobalInputDefineSDKDataTypes_TYPES_H
#define GlobalInputDefineSDKDataTypes_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace Ruyi { namespace SDK { namespace GlobalInputDefine {

struct RuyiInputDeviceType {
  enum type {
    XB360 = 0,
    Mouse = 1,
    Keyboard = 2,
    Joystick = 3,
    Gamepad = 4,
    Driving = 5,
    Flight = 6,
    FirstPerson = 7,
    ControlDevice = 8,
    ScreenPointer = 9,
    Remote = 10,
    Supplemental = 11,
    RuyiController = 100
  };
};

extern const std::map<int, const char*> _RuyiInputDeviceType_VALUES_TO_NAMES;

struct GamepadButtonFlags {
  enum type {
    Y = -32768,
    None = 0,
    DPadUp = 1,
    DPadDown = 2,
    DPadLeft = 4,
    DPadRight = 8,
    Start = 16,
    Back = 32,
    LeftThumb = 64,
    RightThumb = 128,
    LeftShoulder = 256,
    RightShoulder = 512,
    A = 4096,
    B = 8192,
    X = 16384,
    LeftTrigger = 32768,
    RightTrigger = 65536,
    LeftThumbX = 131072,
    LeftThumbY = 262144,
    RightThumbX = 524288,
    RightThumbY = 1048576
  };
};

extern const std::map<int, const char*> _GamepadButtonFlags_VALUES_TO_NAMES;

struct Key {
  enum type {
    Unknown = 0,
    Escape = 1,
    D1 = 2,
    D2 = 3,
    D3 = 4,
    D4 = 5,
    D5 = 6,
    D6 = 7,
    D7 = 8,
    D8 = 9,
    D9 = 10,
    D0 = 11,
    Minus = 12,
    Equals = 13,
    Back = 14,
    Tab = 15,
    Q = 16,
    W = 17,
    E = 18,
    R = 19,
    T = 20,
    Y = 21,
    U = 22,
    I = 23,
    O = 24,
    P = 25,
    LeftBracket = 26,
    RightBracket = 27,
    Return = 28,
    LeftControl = 29,
    A = 30,
    S = 31,
    D = 32,
    F = 33,
    G = 34,
    H = 35,
    J = 36,
    K = 37,
    L = 38,
    Semicolon = 39,
    Apostrophe = 40,
    Grave = 41,
    LeftShift = 42,
    Backslash = 43,
    Z = 44,
    X = 45,
    C = 46,
    V = 47,
    B = 48,
    N = 49,
    M = 50,
    Comma = 51,
    Period = 52,
    Slash = 53,
    RightShift = 54,
    Multiply = 55,
    LeftAlt = 56,
    Space = 57,
    Capital = 58,
    F1 = 59,
    F2 = 60,
    F3 = 61,
    F4 = 62,
    F5 = 63,
    F6 = 64,
    F7 = 65,
    F8 = 66,
    F9 = 67,
    F10 = 68,
    NumberLock = 69,
    ScrollLock = 70,
    NumberPad7 = 71,
    NumberPad8 = 72,
    NumberPad9 = 73,
    Subtract = 74,
    NumberPad4 = 75,
    NumberPad5 = 76,
    NumberPad6 = 77,
    Add = 78,
    NumberPad1 = 79,
    NumberPad2 = 80,
    NumberPad3 = 81,
    NumberPad0 = 82,
    Decimal = 83,
    Oem102 = 86,
    F11 = 87,
    F12 = 88,
    F13 = 100,
    F14 = 101,
    F15 = 102,
    Kana = 112,
    AbntC1 = 115,
    Convert = 121,
    NoConvert = 123,
    Yen = 125,
    AbntC2 = 126,
    NumberPadEquals = 141,
    PreviousTrack = 144,
    AT = 145,
    Colon = 146,
    Underline = 147,
    Kanji = 148,
    Stop = 149,
    AX = 150,
    Unlabeled = 151,
    NextTrack = 153,
    NumberPadEnter = 156,
    RightControl = 157,
    Mute = 160,
    Calculator = 161,
    PlayPause = 162,
    MediaStop = 164,
    VolumeDown = 174,
    VolumeUp = 176,
    WebHome = 178,
    NumberPadComma = 179,
    Divide = 181,
    PrintScreen = 183,
    RightAlt = 184,
    Pause = 197,
    Home = 199,
    Up = 200,
    PageUp = 201,
    Left = 203,
    Right = 205,
    End = 207,
    Down = 208,
    PageDown = 209,
    Insert = 210,
    Delete = 211,
    LeftWindowsKey = 219,
    RightWindowsKey = 220,
    Applications = 221,
    Power = 222,
    Sleep = 223,
    Wake = 227,
    WebSearch = 229,
    WebFavorites = 230,
    WebRefresh = 231,
    WebStop = 232,
    WebForward = 233,
    WebBack = 234,
    MyComputer = 235,
    Mail = 236,
    MediaSelect = 237
  };
};

extern const std::map<int, const char*> _Key_VALUES_TO_NAMES;

struct MouseOffset {
  enum type {
    X = 0,
    Y = 4,
    Z = 8,
    Buttons0 = 12,
    Buttons1 = 13,
    Buttons2 = 14,
    Buttons3 = 15,
    Buttons4 = 16,
    Buttons5 = 17,
    Buttons6 = 18,
    Buttons7 = 19
  };
};

extern const std::map<int, const char*> _MouseOffset_VALUES_TO_NAMES;

struct JoystickOffset {
  enum type {
    X = 0,
    Y = 4,
    Z = 8,
    RotationX = 12,
    RotationY = 16,
    RotationZ = 20,
    Sliders0 = 24,
    Sliders1 = 28,
    PointOfViewControllers0 = 32,
    PointOfViewControllers1 = 36,
    PointOfViewControllers2 = 40,
    PointOfViewControllers3 = 44,
    Buttons0 = 48,
    Buttons1 = 49,
    Buttons2 = 50,
    Buttons3 = 51,
    Buttons4 = 52,
    Buttons5 = 53,
    Buttons6 = 54,
    Buttons7 = 55,
    Buttons8 = 56,
    Buttons9 = 57,
    Buttons10 = 58,
    Buttons11 = 59,
    Buttons12 = 60,
    Buttons13 = 61,
    Buttons14 = 62,
    Buttons15 = 63,
    Buttons16 = 64,
    Buttons17 = 65,
    Buttons18 = 66,
    Buttons19 = 67,
    Buttons20 = 68,
    Buttons21 = 69,
    Buttons22 = 70,
    Buttons23 = 71,
    Buttons24 = 72,
    Buttons25 = 73,
    Buttons26 = 74,
    Buttons27 = 75,
    Buttons28 = 76,
    Buttons29 = 77,
    Buttons30 = 78,
    Buttons31 = 79,
    Buttons32 = 80,
    Buttons33 = 81,
    Buttons34 = 82,
    Buttons35 = 83,
    Buttons36 = 84,
    Buttons37 = 85,
    Buttons38 = 86,
    Buttons39 = 87,
    Buttons40 = 88,
    Buttons41 = 89,
    Buttons42 = 90,
    Buttons43 = 91,
    Buttons44 = 92,
    Buttons45 = 93,
    Buttons46 = 94,
    Buttons47 = 95,
    Buttons48 = 96,
    Buttons49 = 97,
    Buttons50 = 98,
    Buttons51 = 99,
    Buttons52 = 100,
    Buttons53 = 101,
    Buttons54 = 102,
    Buttons55 = 103,
    Buttons56 = 104,
    Buttons57 = 105,
    Buttons58 = 106,
    Buttons59 = 107,
    Buttons60 = 108,
    Buttons61 = 109,
    Buttons62 = 110,
    Buttons63 = 111,
    Buttons64 = 112,
    Buttons65 = 113,
    Buttons66 = 114,
    Buttons67 = 115,
    Buttons68 = 116,
    Buttons69 = 117,
    Buttons70 = 118,
    Buttons71 = 119,
    Buttons72 = 120,
    Buttons73 = 121,
    Buttons74 = 122,
    Buttons75 = 123,
    Buttons76 = 124,
    Buttons77 = 125,
    Buttons78 = 126,
    Buttons79 = 127,
    Buttons80 = 128,
    Buttons81 = 129,
    Buttons82 = 130,
    Buttons83 = 131,
    Buttons84 = 132,
    Buttons85 = 133,
    Buttons86 = 134,
    Buttons87 = 135,
    Buttons88 = 136,
    Buttons89 = 137,
    Buttons90 = 138,
    Buttons91 = 139,
    Buttons92 = 140,
    Buttons93 = 141,
    Buttons94 = 142,
    Buttons95 = 143,
    Buttons96 = 144,
    Buttons97 = 145,
    Buttons98 = 146,
    Buttons99 = 147,
    Buttons100 = 148,
    Buttons101 = 149,
    Buttons102 = 150,
    Buttons103 = 151,
    Buttons104 = 152,
    Buttons105 = 153,
    Buttons106 = 154,
    Buttons107 = 155,
    Buttons108 = 156,
    Buttons109 = 157,
    Buttons110 = 158,
    Buttons111 = 159,
    Buttons112 = 160,
    Buttons113 = 161,
    Buttons114 = 162,
    Buttons115 = 163,
    Buttons116 = 164,
    Buttons117 = 165,
    Buttons118 = 166,
    Buttons119 = 167,
    Buttons120 = 168,
    Buttons121 = 169,
    Buttons122 = 170,
    Buttons123 = 171,
    Buttons124 = 172,
    Buttons125 = 173,
    Buttons126 = 174,
    Buttons127 = 175,
    VelocityX = 176,
    VelocityY = 180,
    VelocityZ = 184,
    AngularVelocityX = 188,
    AngularVelocityY = 192,
    AngularVelocityZ = 196,
    VelocitySliders0 = 200,
    VelocitySliders1 = 204,
    AccelerationX = 208,
    AccelerationY = 212,
    AccelerationZ = 216,
    AngularAccelerationX = 220,
    AngularAccelerationY = 224,
    AngularAccelerationZ = 228,
    AccelerationSliders0 = 232,
    AccelerationSliders1 = 236,
    ForceX = 240,
    ForceY = 244,
    ForceZ = 248,
    TorqueX = 252,
    TorqueY = 256,
    TorqueZ = 260,
    ForceSliders0 = 264,
    ForceSliders1 = 268
  };
};

extern const std::map<int, const char*> _JoystickOffset_VALUES_TO_NAMES;

struct RuyiControllerKey {
  enum type {
    eButtonL3 = 1,
    eButtonR3 = 2,
    eButtonX = 4,
    eButtonB = 8,
    eButtonY = 16,
    eButtonA = 32,
    eButtonL1 = 64,
    eButtonR1 = 128,
    eButtonLeft = 256,
    eButtonRight = 512,
    eButtonUp = 1024,
    eButtonDown = 2048,
    eButtonStart = 4096,
    eButtonBack = 8192,
    eButtonHome = 16384,
    eAnalogL2 = 32768,
    eAnalogR2 = 65536,
    eAnalogLeftJoyX = 131072,
    eAnalogLeftJoyY = 262144,
    eAnalogRightJoyX = 524288,
    eAnalogRightJoyY = 1048576
  };
};

extern const std::map<int, const char*> _RuyiControllerKey_VALUES_TO_NAMES;

struct RuyiActionActivateEvent {
  enum type {
    eKeyDown = 1,
    eKeyUp = 2,
    eKeyDownAndUp = 3
  };
};

extern const std::map<int, const char*> _RuyiActionActivateEvent_VALUES_TO_NAMES;

class Gamepad;

class RuyiInputStateXB360;

class RuyiInputStateKeyboard;

class RuyiInputStateMouse;

class RuyiInputStateGamepad;

class RuyiInputStateJoystick;

class RuyiInputStateRuyiController;

typedef struct _Gamepad__isset {
  _Gamepad__isset() : Buttons(false), LeftTrigger(false), RightTrigger(false), LeftThumbX(false), LeftThumbY(false), RightThumbX(false), RightThumbY(false) {}
  bool Buttons :1;
  bool LeftTrigger :1;
  bool RightTrigger :1;
  bool LeftThumbX :1;
  bool LeftThumbY :1;
  bool RightThumbX :1;
  bool RightThumbY :1;
} _Gamepad__isset;

class Gamepad : public virtual ::apache::thrift::TBase {
 public:

  Gamepad(const Gamepad&);
  Gamepad& operator=(const Gamepad&);
  Gamepad() : Buttons(0), LeftTrigger(0), RightTrigger(0), LeftThumbX(0), LeftThumbY(0), RightThumbX(0), RightThumbY(0) {
  }

  virtual ~Gamepad() throw();
  int32_t Buttons;
  int8_t LeftTrigger;
  int8_t RightTrigger;
  int16_t LeftThumbX;
  int16_t LeftThumbY;
  int16_t RightThumbX;
  int16_t RightThumbY;

  _Gamepad__isset __isset;

  void __set_Buttons(const int32_t val);

  void __set_LeftTrigger(const int8_t val);

  void __set_RightTrigger(const int8_t val);

  void __set_LeftThumbX(const int16_t val);

  void __set_LeftThumbY(const int16_t val);

  void __set_RightThumbX(const int16_t val);

  void __set_RightThumbY(const int16_t val);

  bool operator == (const Gamepad & rhs) const
  {
    if (!(Buttons == rhs.Buttons))
      return false;
    if (!(LeftTrigger == rhs.LeftTrigger))
      return false;
    if (!(RightTrigger == rhs.RightTrigger))
      return false;
    if (!(LeftThumbX == rhs.LeftThumbX))
      return false;
    if (!(LeftThumbY == rhs.LeftThumbY))
      return false;
    if (!(RightThumbX == rhs.RightThumbX))
      return false;
    if (!(RightThumbY == rhs.RightThumbY))
      return false;
    return true;
  }
  bool operator != (const Gamepad &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Gamepad & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Gamepad &a, Gamepad &b);

inline std::ostream& operator<<(std::ostream& out, const Gamepad& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RuyiInputStateXB360__isset {
  _RuyiInputStateXB360__isset() : PacketNumber(false), gamepad(false) {}
  bool PacketNumber :1;
  bool gamepad :1;
} _RuyiInputStateXB360__isset;

class RuyiInputStateXB360 : public virtual ::apache::thrift::TBase {
 public:

  RuyiInputStateXB360(const RuyiInputStateXB360&);
  RuyiInputStateXB360& operator=(const RuyiInputStateXB360&);
  RuyiInputStateXB360() : PacketNumber(0) {
  }

  virtual ~RuyiInputStateXB360() throw();
  int32_t PacketNumber;
  Gamepad gamepad;

  _RuyiInputStateXB360__isset __isset;

  void __set_PacketNumber(const int32_t val);

  void __set_gamepad(const Gamepad& val);

  bool operator == (const RuyiInputStateXB360 & rhs) const
  {
    if (!(PacketNumber == rhs.PacketNumber))
      return false;
    if (!(gamepad == rhs.gamepad))
      return false;
    return true;
  }
  bool operator != (const RuyiInputStateXB360 &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RuyiInputStateXB360 & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RuyiInputStateXB360 &a, RuyiInputStateXB360 &b);

inline std::ostream& operator<<(std::ostream& out, const RuyiInputStateXB360& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RuyiInputStateKeyboard__isset {
  _RuyiInputStateKeyboard__isset() : RawOffset(false), Value(false), Timestamp(false), Sequence(false), Key(false), IsPressed(false), IsReleased(false) {}
  bool RawOffset :1;
  bool Value :1;
  bool Timestamp :1;
  bool Sequence :1;
  bool Key :1;
  bool IsPressed :1;
  bool IsReleased :1;
} _RuyiInputStateKeyboard__isset;

class RuyiInputStateKeyboard : public virtual ::apache::thrift::TBase {
 public:

  RuyiInputStateKeyboard(const RuyiInputStateKeyboard&);
  RuyiInputStateKeyboard& operator=(const RuyiInputStateKeyboard&);
  RuyiInputStateKeyboard() : RawOffset(0), Value(0), Timestamp(0), Sequence(0), Key((Key::type)0), IsPressed(0), IsReleased(0) {
  }

  virtual ~RuyiInputStateKeyboard() throw();
  int32_t RawOffset;
  int32_t Value;
  int32_t Timestamp;
  int32_t Sequence;
  Key::type Key;
  bool IsPressed;
  bool IsReleased;

  _RuyiInputStateKeyboard__isset __isset;

  void __set_RawOffset(const int32_t val);

  void __set_Value(const int32_t val);

  void __set_Timestamp(const int32_t val);

  void __set_Sequence(const int32_t val);

  void __set_Key(const Key::type val);

  void __set_IsPressed(const bool val);

  void __set_IsReleased(const bool val);

  bool operator == (const RuyiInputStateKeyboard & rhs) const
  {
    if (!(RawOffset == rhs.RawOffset))
      return false;
    if (!(Value == rhs.Value))
      return false;
    if (!(Timestamp == rhs.Timestamp))
      return false;
    if (!(Sequence == rhs.Sequence))
      return false;
    if (!(Key == rhs.Key))
      return false;
    if (!(IsPressed == rhs.IsPressed))
      return false;
    if (!(IsReleased == rhs.IsReleased))
      return false;
    return true;
  }
  bool operator != (const RuyiInputStateKeyboard &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RuyiInputStateKeyboard & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RuyiInputStateKeyboard &a, RuyiInputStateKeyboard &b);

inline std::ostream& operator<<(std::ostream& out, const RuyiInputStateKeyboard& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RuyiInputStateMouse__isset {
  _RuyiInputStateMouse__isset() : RawOffset(false), Value(false), Timestamp(false), Sequence(false), Offset(false), IsButton(false) {}
  bool RawOffset :1;
  bool Value :1;
  bool Timestamp :1;
  bool Sequence :1;
  bool Offset :1;
  bool IsButton :1;
} _RuyiInputStateMouse__isset;

class RuyiInputStateMouse : public virtual ::apache::thrift::TBase {
 public:

  RuyiInputStateMouse(const RuyiInputStateMouse&);
  RuyiInputStateMouse& operator=(const RuyiInputStateMouse&);
  RuyiInputStateMouse() : RawOffset(0), Value(0), Timestamp(0), Sequence(0), Offset((MouseOffset::type)0), IsButton(0) {
  }

  virtual ~RuyiInputStateMouse() throw();
  int32_t RawOffset;
  int32_t Value;
  int32_t Timestamp;
  int32_t Sequence;
  MouseOffset::type Offset;
  bool IsButton;

  _RuyiInputStateMouse__isset __isset;

  void __set_RawOffset(const int32_t val);

  void __set_Value(const int32_t val);

  void __set_Timestamp(const int32_t val);

  void __set_Sequence(const int32_t val);

  void __set_Offset(const MouseOffset::type val);

  void __set_IsButton(const bool val);

  bool operator == (const RuyiInputStateMouse & rhs) const
  {
    if (!(RawOffset == rhs.RawOffset))
      return false;
    if (!(Value == rhs.Value))
      return false;
    if (!(Timestamp == rhs.Timestamp))
      return false;
    if (!(Sequence == rhs.Sequence))
      return false;
    if (!(Offset == rhs.Offset))
      return false;
    if (!(IsButton == rhs.IsButton))
      return false;
    return true;
  }
  bool operator != (const RuyiInputStateMouse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RuyiInputStateMouse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RuyiInputStateMouse &a, RuyiInputStateMouse &b);

inline std::ostream& operator<<(std::ostream& out, const RuyiInputStateMouse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RuyiInputStateGamepad__isset {
  _RuyiInputStateGamepad__isset() : RawOffset(false), Value(false), Timestamp(false), Sequence(false), Offset(false) {}
  bool RawOffset :1;
  bool Value :1;
  bool Timestamp :1;
  bool Sequence :1;
  bool Offset :1;
} _RuyiInputStateGamepad__isset;

class RuyiInputStateGamepad : public virtual ::apache::thrift::TBase {
 public:

  RuyiInputStateGamepad(const RuyiInputStateGamepad&);
  RuyiInputStateGamepad& operator=(const RuyiInputStateGamepad&);
  RuyiInputStateGamepad() : RawOffset(0), Value(0), Timestamp(0), Sequence(0), Offset((JoystickOffset::type)0) {
  }

  virtual ~RuyiInputStateGamepad() throw();
  int32_t RawOffset;
  int32_t Value;
  int32_t Timestamp;
  int32_t Sequence;
  JoystickOffset::type Offset;

  _RuyiInputStateGamepad__isset __isset;

  void __set_RawOffset(const int32_t val);

  void __set_Value(const int32_t val);

  void __set_Timestamp(const int32_t val);

  void __set_Sequence(const int32_t val);

  void __set_Offset(const JoystickOffset::type val);

  bool operator == (const RuyiInputStateGamepad & rhs) const
  {
    if (!(RawOffset == rhs.RawOffset))
      return false;
    if (!(Value == rhs.Value))
      return false;
    if (!(Timestamp == rhs.Timestamp))
      return false;
    if (!(Sequence == rhs.Sequence))
      return false;
    if (!(Offset == rhs.Offset))
      return false;
    return true;
  }
  bool operator != (const RuyiInputStateGamepad &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RuyiInputStateGamepad & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RuyiInputStateGamepad &a, RuyiInputStateGamepad &b);

inline std::ostream& operator<<(std::ostream& out, const RuyiInputStateGamepad& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RuyiInputStateJoystick__isset {
  _RuyiInputStateJoystick__isset() : RawOffset(false), Value(false), Timestamp(false), Sequence(false), Offset(false) {}
  bool RawOffset :1;
  bool Value :1;
  bool Timestamp :1;
  bool Sequence :1;
  bool Offset :1;
} _RuyiInputStateJoystick__isset;

class RuyiInputStateJoystick : public virtual ::apache::thrift::TBase {
 public:

  RuyiInputStateJoystick(const RuyiInputStateJoystick&);
  RuyiInputStateJoystick& operator=(const RuyiInputStateJoystick&);
  RuyiInputStateJoystick() : RawOffset(0), Value(0), Timestamp(0), Sequence(0), Offset((JoystickOffset::type)0) {
  }

  virtual ~RuyiInputStateJoystick() throw();
  int32_t RawOffset;
  int32_t Value;
  int32_t Timestamp;
  int32_t Sequence;
  JoystickOffset::type Offset;

  _RuyiInputStateJoystick__isset __isset;

  void __set_RawOffset(const int32_t val);

  void __set_Value(const int32_t val);

  void __set_Timestamp(const int32_t val);

  void __set_Sequence(const int32_t val);

  void __set_Offset(const JoystickOffset::type val);

  bool operator == (const RuyiInputStateJoystick & rhs) const
  {
    if (!(RawOffset == rhs.RawOffset))
      return false;
    if (!(Value == rhs.Value))
      return false;
    if (!(Timestamp == rhs.Timestamp))
      return false;
    if (!(Sequence == rhs.Sequence))
      return false;
    if (!(Offset == rhs.Offset))
      return false;
    return true;
  }
  bool operator != (const RuyiInputStateJoystick &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RuyiInputStateJoystick & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RuyiInputStateJoystick &a, RuyiInputStateJoystick &b);

inline std::ostream& operator<<(std::ostream& out, const RuyiInputStateJoystick& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RuyiInputStateRuyiController__isset {
  _RuyiInputStateRuyiController__isset() : PacketId(false), ChannelId(false), DeviceId(false), KeyPress(false), AnalogL2(false), AnalogR2(false), AnalogLeftJoyX(false), AnalogLeftJoyY(false), AnalogRightJoyX(false), AnalogRightJoyY(false) {}
  bool PacketId :1;
  bool ChannelId :1;
  bool DeviceId :1;
  bool KeyPress :1;
  bool AnalogL2 :1;
  bool AnalogR2 :1;
  bool AnalogLeftJoyX :1;
  bool AnalogLeftJoyY :1;
  bool AnalogRightJoyX :1;
  bool AnalogRightJoyY :1;
} _RuyiInputStateRuyiController__isset;

class RuyiInputStateRuyiController : public virtual ::apache::thrift::TBase {
 public:

  RuyiInputStateRuyiController(const RuyiInputStateRuyiController&);
  RuyiInputStateRuyiController& operator=(const RuyiInputStateRuyiController&);
  RuyiInputStateRuyiController() : PacketId(0), ChannelId(0), DeviceId(), KeyPress(0), AnalogL2(0), AnalogR2(0), AnalogLeftJoyX(0), AnalogLeftJoyY(0), AnalogRightJoyX(0), AnalogRightJoyY(0) {
  }

  virtual ~RuyiInputStateRuyiController() throw();
  int64_t PacketId;
  int32_t ChannelId;
  std::string DeviceId;
  int32_t KeyPress;
  int8_t AnalogL2;
  int8_t AnalogR2;
  int8_t AnalogLeftJoyX;
  int8_t AnalogLeftJoyY;
  int8_t AnalogRightJoyX;
  int8_t AnalogRightJoyY;

  _RuyiInputStateRuyiController__isset __isset;

  void __set_PacketId(const int64_t val);

  void __set_ChannelId(const int32_t val);

  void __set_DeviceId(const std::string& val);

  void __set_KeyPress(const int32_t val);

  void __set_AnalogL2(const int8_t val);

  void __set_AnalogR2(const int8_t val);

  void __set_AnalogLeftJoyX(const int8_t val);

  void __set_AnalogLeftJoyY(const int8_t val);

  void __set_AnalogRightJoyX(const int8_t val);

  void __set_AnalogRightJoyY(const int8_t val);

  bool operator == (const RuyiInputStateRuyiController & rhs) const
  {
    if (!(PacketId == rhs.PacketId))
      return false;
    if (!(ChannelId == rhs.ChannelId))
      return false;
    if (!(DeviceId == rhs.DeviceId))
      return false;
    if (!(KeyPress == rhs.KeyPress))
      return false;
    if (!(AnalogL2 == rhs.AnalogL2))
      return false;
    if (!(AnalogR2 == rhs.AnalogR2))
      return false;
    if (!(AnalogLeftJoyX == rhs.AnalogLeftJoyX))
      return false;
    if (!(AnalogLeftJoyY == rhs.AnalogLeftJoyY))
      return false;
    if (!(AnalogRightJoyX == rhs.AnalogRightJoyX))
      return false;
    if (!(AnalogRightJoyY == rhs.AnalogRightJoyY))
      return false;
    return true;
  }
  bool operator != (const RuyiInputStateRuyiController &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RuyiInputStateRuyiController & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RuyiInputStateRuyiController &a, RuyiInputStateRuyiController &b);

inline std::ostream& operator<<(std::ostream& out, const RuyiInputStateRuyiController& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
