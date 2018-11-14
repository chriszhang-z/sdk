/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Thrift;
using Thrift.Collections;

using Thrift.Protocols;
using Thrift.Protocols.Entities;
using Thrift.Protocols.Utilities;
using Thrift.Transports;
using Thrift.Transports.Client;
using Thrift.Transports.Server;


namespace Ruyi.SDK.InputManager
{

  public partial class RuyiGamePadInput : TBase
  {
    private string _DeviceId;
    private string _UserId;
    private int _ButtonFlags;
    private sbyte _LeftTrigger;
    private sbyte _RightTrigger;
    private short _LeftThumbX;
    private short _LeftThumbY;
    private short _RightThumbX;
    private short _RightThumbY;

    public string DeviceId
    {
      get
      {
        return _DeviceId;
      }
      set
      {
        __isset.DeviceId = true;
        this._DeviceId = value;
      }
    }

    public string UserId
    {
      get
      {
        return _UserId;
      }
      set
      {
        __isset.UserId = true;
        this._UserId = value;
      }
    }

    /// <summary>
    /// Combination of RuyiGamePadButtonFlags
    /// </summary>
    public int ButtonFlags
    {
      get
      {
        return _ButtonFlags;
      }
      set
      {
        __isset.ButtonFlags = true;
        this._ButtonFlags = value;
      }
    }

    public sbyte LeftTrigger
    {
      get
      {
        return _LeftTrigger;
      }
      set
      {
        __isset.LeftTrigger = true;
        this._LeftTrigger = value;
      }
    }

    public sbyte RightTrigger
    {
      get
      {
        return _RightTrigger;
      }
      set
      {
        __isset.RightTrigger = true;
        this._RightTrigger = value;
      }
    }

    public short LeftThumbX
    {
      get
      {
        return _LeftThumbX;
      }
      set
      {
        __isset.LeftThumbX = true;
        this._LeftThumbX = value;
      }
    }

    public short LeftThumbY
    {
      get
      {
        return _LeftThumbY;
      }
      set
      {
        __isset.LeftThumbY = true;
        this._LeftThumbY = value;
      }
    }

    public short RightThumbX
    {
      get
      {
        return _RightThumbX;
      }
      set
      {
        __isset.RightThumbX = true;
        this._RightThumbX = value;
      }
    }

    public short RightThumbY
    {
      get
      {
        return _RightThumbY;
      }
      set
      {
        __isset.RightThumbY = true;
        this._RightThumbY = value;
      }
    }


    public Isset __isset;
    public struct Isset
    {
      public bool DeviceId;
      public bool UserId;
      public bool ButtonFlags;
      public bool LeftTrigger;
      public bool RightTrigger;
      public bool LeftThumbX;
      public bool LeftThumbY;
      public bool RightThumbX;
      public bool RightThumbY;
    }

    public RuyiGamePadInput()
    {
    }

    public async Task ReadAsync(TProtocol iprot, CancellationToken cancellationToken)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        await iprot.ReadStructBeginAsync(cancellationToken);
        while (true)
        {
          field = await iprot.ReadFieldBeginAsync(cancellationToken);
          if (field.Type == TType.Stop)
          {
            break;
          }

          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.String)
              {
                DeviceId = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.String)
              {
                UserId = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 3:
              if (field.Type == TType.I32)
              {
                ButtonFlags = await iprot.ReadI32Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 4:
              if (field.Type == TType.Byte)
              {
                LeftTrigger = await iprot.ReadByteAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 5:
              if (field.Type == TType.Byte)
              {
                RightTrigger = await iprot.ReadByteAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 6:
              if (field.Type == TType.I16)
              {
                LeftThumbX = await iprot.ReadI16Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 7:
              if (field.Type == TType.I16)
              {
                LeftThumbY = await iprot.ReadI16Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 8:
              if (field.Type == TType.I16)
              {
                RightThumbX = await iprot.ReadI16Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 9:
              if (field.Type == TType.I16)
              {
                RightThumbY = await iprot.ReadI16Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            default: 
              await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              break;
          }

          await iprot.ReadFieldEndAsync(cancellationToken);
        }

        await iprot.ReadStructEndAsync(cancellationToken);
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public async Task WriteAsync(TProtocol oprot, CancellationToken cancellationToken)
    {
      oprot.IncrementRecursionDepth();
      try
      {
        var struc = new TStruct("RuyiGamePadInput");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if (DeviceId != null && __isset.DeviceId)
        {
          field.Name = "DeviceId";
          field.Type = TType.String;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(DeviceId, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (UserId != null && __isset.UserId)
        {
          field.Name = "UserId";
          field.Type = TType.String;
          field.ID = 2;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(UserId, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.ButtonFlags)
        {
          field.Name = "ButtonFlags";
          field.Type = TType.I32;
          field.ID = 3;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI32Async(ButtonFlags, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.LeftTrigger)
        {
          field.Name = "LeftTrigger";
          field.Type = TType.Byte;
          field.ID = 4;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteByteAsync(LeftTrigger, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.RightTrigger)
        {
          field.Name = "RightTrigger";
          field.Type = TType.Byte;
          field.ID = 5;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteByteAsync(RightTrigger, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.LeftThumbX)
        {
          field.Name = "LeftThumbX";
          field.Type = TType.I16;
          field.ID = 6;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI16Async(LeftThumbX, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.LeftThumbY)
        {
          field.Name = "LeftThumbY";
          field.Type = TType.I16;
          field.ID = 7;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI16Async(LeftThumbY, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.RightThumbX)
        {
          field.Name = "RightThumbX";
          field.Type = TType.I16;
          field.ID = 8;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI16Async(RightThumbX, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.RightThumbY)
        {
          field.Name = "RightThumbY";
          field.Type = TType.I16;
          field.ID = 9;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI16Async(RightThumbY, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        await oprot.WriteFieldStopAsync(cancellationToken);
        await oprot.WriteStructEndAsync(cancellationToken);
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString()
    {
      var sb = new StringBuilder("RuyiGamePadInput(");
      bool __first = true;
      if (DeviceId != null && __isset.DeviceId)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("DeviceId: ");
        sb.Append(DeviceId);
      }
      if (UserId != null && __isset.UserId)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("UserId: ");
        sb.Append(UserId);
      }
      if (__isset.ButtonFlags)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("ButtonFlags: ");
        sb.Append(ButtonFlags);
      }
      if (__isset.LeftTrigger)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("LeftTrigger: ");
        sb.Append(LeftTrigger);
      }
      if (__isset.RightTrigger)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("RightTrigger: ");
        sb.Append(RightTrigger);
      }
      if (__isset.LeftThumbX)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("LeftThumbX: ");
        sb.Append(LeftThumbX);
      }
      if (__isset.LeftThumbY)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("LeftThumbY: ");
        sb.Append(LeftThumbY);
      }
      if (__isset.RightThumbX)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("RightThumbX: ");
        sb.Append(RightThumbX);
      }
      if (__isset.RightThumbY)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("RightThumbY: ");
        sb.Append(RightThumbY);
      }
      sb.Append(")");
      return sb.ToString();
    }
  }

}