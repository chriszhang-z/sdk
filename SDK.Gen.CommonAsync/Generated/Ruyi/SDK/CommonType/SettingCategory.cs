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


namespace Ruyi.SDK.CommonType
{

  public partial class SettingCategory : TBase
  {
    private string _id;
    private string _display;
    private string _summary;
    private string _description;
    private int _sortingPriority;
    private bool _isSystemCategory;
    private Dictionary<string, int> _items;
    private bool _enable;
    private bool _showInUI;
    private string _script;

    public string Id
    {
      get
      {
        return _id;
      }
      set
      {
        __isset.id = true;
        this._id = value;
      }
    }

    public string Display
    {
      get
      {
        return _display;
      }
      set
      {
        __isset.display = true;
        this._display = value;
      }
    }

    public string Summary
    {
      get
      {
        return _summary;
      }
      set
      {
        __isset.summary = true;
        this._summary = value;
      }
    }

    public string Description
    {
      get
      {
        return _description;
      }
      set
      {
        __isset.description = true;
        this._description = value;
      }
    }

    public int SortingPriority
    {
      get
      {
        return _sortingPriority;
      }
      set
      {
        __isset.sortingPriority = true;
        this._sortingPriority = value;
      }
    }

    public bool IsSystemCategory
    {
      get
      {
        return _isSystemCategory;
      }
      set
      {
        __isset.isSystemCategory = true;
        this._isSystemCategory = value;
      }
    }

    public Dictionary<string, int> Items
    {
      get
      {
        return _items;
      }
      set
      {
        __isset.items = true;
        this._items = value;
      }
    }

    public bool Enable
    {
      get
      {
        return _enable;
      }
      set
      {
        __isset.enable = true;
        this._enable = value;
      }
    }

    public bool ShowInUI
    {
      get
      {
        return _showInUI;
      }
      set
      {
        __isset.showInUI = true;
        this._showInUI = value;
      }
    }

    public string Script
    {
      get
      {
        return _script;
      }
      set
      {
        __isset.script = true;
        this._script = value;
      }
    }


    public Isset __isset;
    public struct Isset
    {
      public bool id;
      public bool display;
      public bool summary;
      public bool description;
      public bool sortingPriority;
      public bool isSystemCategory;
      public bool items;
      public bool enable;
      public bool showInUI;
      public bool script;
    }

    public SettingCategory()
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
                Id = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.String)
              {
                Display = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 3:
              if (field.Type == TType.String)
              {
                Summary = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 4:
              if (field.Type == TType.String)
              {
                Description = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 5:
              if (field.Type == TType.I32)
              {
                SortingPriority = await iprot.ReadI32Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 6:
              if (field.Type == TType.Bool)
              {
                IsSystemCategory = await iprot.ReadBoolAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 7:
              if (field.Type == TType.Map)
              {
                {
                  Items = new Dictionary<string, int>();
                  TMap _map20 = await iprot.ReadMapBeginAsync(cancellationToken);
                  for(int _i21 = 0; _i21 < _map20.Count; ++_i21)
                  {
                    string _key22;
                    int _val23;
                    _key22 = await iprot.ReadStringAsync(cancellationToken);
                    _val23 = await iprot.ReadI32Async(cancellationToken);
                    Items[_key22] = _val23;
                  }
                  await iprot.ReadMapEndAsync(cancellationToken);
                }
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 8:
              if (field.Type == TType.Bool)
              {
                Enable = await iprot.ReadBoolAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 9:
              if (field.Type == TType.Bool)
              {
                ShowInUI = await iprot.ReadBoolAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 10:
              if (field.Type == TType.String)
              {
                Script = await iprot.ReadStringAsync(cancellationToken);
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
        var struc = new TStruct("SettingCategory");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if (Id != null && __isset.id)
        {
          field.Name = "id";
          field.Type = TType.String;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(Id, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (Display != null && __isset.display)
        {
          field.Name = "display";
          field.Type = TType.String;
          field.ID = 2;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(Display, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (Summary != null && __isset.summary)
        {
          field.Name = "summary";
          field.Type = TType.String;
          field.ID = 3;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(Summary, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (Description != null && __isset.description)
        {
          field.Name = "description";
          field.Type = TType.String;
          field.ID = 4;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(Description, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.sortingPriority)
        {
          field.Name = "sortingPriority";
          field.Type = TType.I32;
          field.ID = 5;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI32Async(SortingPriority, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.isSystemCategory)
        {
          field.Name = "isSystemCategory";
          field.Type = TType.Bool;
          field.ID = 6;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteBoolAsync(IsSystemCategory, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (Items != null && __isset.items)
        {
          field.Name = "items";
          field.Type = TType.Map;
          field.ID = 7;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          {
            await oprot.WriteMapBeginAsync(new TMap(TType.String, TType.I32, Items.Count), cancellationToken);
            foreach (string _iter24 in Items.Keys)
            {
              await oprot.WriteStringAsync(_iter24, cancellationToken);
              await oprot.WriteI32Async(Items[_iter24], cancellationToken);
            }
            await oprot.WriteMapEndAsync(cancellationToken);
          }
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.enable)
        {
          field.Name = "enable";
          field.Type = TType.Bool;
          field.ID = 8;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteBoolAsync(Enable, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.showInUI)
        {
          field.Name = "showInUI";
          field.Type = TType.Bool;
          field.ID = 9;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteBoolAsync(ShowInUI, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (Script != null && __isset.script)
        {
          field.Name = "script";
          field.Type = TType.String;
          field.ID = 10;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(Script, cancellationToken);
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
      var sb = new StringBuilder("SettingCategory(");
      bool __first = true;
      if (Id != null && __isset.id)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Id: ");
        sb.Append(Id);
      }
      if (Display != null && __isset.display)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Display: ");
        sb.Append(Display);
      }
      if (Summary != null && __isset.summary)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Summary: ");
        sb.Append(Summary);
      }
      if (Description != null && __isset.description)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Description: ");
        sb.Append(Description);
      }
      if (__isset.sortingPriority)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("SortingPriority: ");
        sb.Append(SortingPriority);
      }
      if (__isset.isSystemCategory)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("IsSystemCategory: ");
        sb.Append(IsSystemCategory);
      }
      if (Items != null && __isset.items)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Items: ");
        sb.Append(Items);
      }
      if (__isset.enable)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Enable: ");
        sb.Append(Enable);
      }
      if (__isset.showInUI)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("ShowInUI: ");
        sb.Append(ShowInUI);
      }
      if (Script != null && __isset.script)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Script: ");
        sb.Append(Script);
      }
      sb.Append(")");
      return sb.ToString();
    }
  }

}
