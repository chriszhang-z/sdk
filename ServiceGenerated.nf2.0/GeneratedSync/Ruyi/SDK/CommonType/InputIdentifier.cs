/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Thrift;
using Thrift.Collections;
using System.Runtime.Serialization;
using Thrift.Protocol;
using Thrift.Transport;

namespace Ruyi.SDK.CommonType
{

  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class InputIdentifier : TBase
  {
    private string _Device;
    private string _Value;
    private string _ActivateEvent;
    private InputModifier _Modifier;

    public string Device
    {
      get
      {
        return _Device;
      }
      set
      {
        __isset.Device = true;
        this._Device = value;
      }
    }

    public string Value
    {
      get
      {
        return _Value;
      }
      set
      {
        __isset.@Value = true;
        this._Value = value;
      }
    }

    public string ActivateEvent
    {
      get
      {
        return _ActivateEvent;
      }
      set
      {
        __isset.ActivateEvent = true;
        this._ActivateEvent = value;
      }
    }

    public InputModifier Modifier
    {
      get
      {
        return _Modifier;
      }
      set
      {
        __isset.Modifier = true;
        this._Modifier = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool Device;
      public bool @Value;
      public bool ActivateEvent;
      public bool Modifier;
    }

    public InputIdentifier() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.String) {
                Device = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                Value = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 3:
              if (field.Type == TType.String) {
                ActivateEvent = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 4:
              if (field.Type == TType.Struct) {
                Modifier = new InputModifier();
                Modifier.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("InputIdentifier");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Device != null && __isset.Device) {
          field.Name = "Device";
          field.Type = TType.String;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Device);
          oprot.WriteFieldEnd();
        }
        if (Value != null && __isset.@Value) {
          field.Name = "Value";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Value);
          oprot.WriteFieldEnd();
        }
        if (ActivateEvent != null && __isset.ActivateEvent) {
          field.Name = "ActivateEvent";
          field.Type = TType.String;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(ActivateEvent);
          oprot.WriteFieldEnd();
        }
        if (Modifier != null && __isset.Modifier) {
          field.Name = "Modifier";
          field.Type = TType.Struct;
          field.ID = 4;
          oprot.WriteFieldBegin(field);
          Modifier.Write(oprot);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("InputIdentifier(");
      bool __first = true;
      if (Device != null && __isset.Device) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Device: ");
        __sb.Append(Device);
      }
      if (Value != null && __isset.@Value) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Value: ");
        __sb.Append(Value);
      }
      if (ActivateEvent != null && __isset.ActivateEvent) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ActivateEvent: ");
        __sb.Append(ActivateEvent);
      }
      if (Modifier != null && __isset.Modifier) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Modifier: ");
        __sb.Append(Modifier== null ? "<null>" : Modifier.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
