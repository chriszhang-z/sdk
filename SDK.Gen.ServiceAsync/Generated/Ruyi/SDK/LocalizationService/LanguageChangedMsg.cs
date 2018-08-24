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


namespace Ruyi.SDK.LocalizationService
{

  public partial class LanguageChangedMsg : TBase
  {
    private string _newLanguage;
    private string _oldLanguage;

    public string NewLanguage
    {
      get
      {
        return _newLanguage;
      }
      set
      {
        __isset.newLanguage = true;
        this._newLanguage = value;
      }
    }

    public string OldLanguage
    {
      get
      {
        return _oldLanguage;
      }
      set
      {
        __isset.oldLanguage = true;
        this._oldLanguage = value;
      }
    }


    public Isset __isset;
    public struct Isset
    {
      public bool newLanguage;
      public bool oldLanguage;
    }

    public LanguageChangedMsg()
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
                NewLanguage = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.String)
              {
                OldLanguage = await iprot.ReadStringAsync(cancellationToken);
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
        var struc = new TStruct("LanguageChangedMsg");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if (NewLanguage != null && __isset.newLanguage)
        {
          field.Name = "newLanguage";
          field.Type = TType.String;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(NewLanguage, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (OldLanguage != null && __isset.oldLanguage)
        {
          field.Name = "oldLanguage";
          field.Type = TType.String;
          field.ID = 2;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(OldLanguage, cancellationToken);
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
      var sb = new StringBuilder("LanguageChangedMsg(");
      bool __first = true;
      if (NewLanguage != null && __isset.newLanguage)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("NewLanguage: ");
        sb.Append(NewLanguage);
      }
      if (OldLanguage != null && __isset.oldLanguage)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("OldLanguage: ");
        sb.Append(OldLanguage);
      }
      sb.Append(")");
      return sb.ToString();
    }
  }

}