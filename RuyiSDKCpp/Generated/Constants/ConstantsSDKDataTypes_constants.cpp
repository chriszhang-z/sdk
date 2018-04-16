/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "ConstantsSDKDataTypes_constants.h"

namespace Ruyi { namespace SDK { namespace Constants {

const ConstantsSDKDataTypesConstants g_ConstantsSDKDataTypes_constants;

ConstantsSDKDataTypesConstants::ConstantsSDKDataTypesConstants() {
  low_latency_socket_port = 11290;

  high_latency_socket_port = 11390;

  layer0_broker_address = "inproc://{addr}:5555";

  layer0_publisher_in_uri = "tcp://{addr}:5567";

  layer0_publisher_out_uri = "tcp://{addr}:5568";

  setting_config_folder = "/ruyilocalroot/resources/configs/";

  setting_system_config = "/ruyilocalroot/resources/configs/systemsetting";

  setting_system_user_config = "/ruyilocalroot/resources/configs/usersetting";

  system_setting_version = "1.0.0.1";

  layer0_debugger_channel = "layer0_debugger_channel";

  trc_test_channel = "trc_test_channel";

  debugger_publisher_in_uri = "tcp://{addr}:8867";

  debugger_publisher_out_uri = "tcp://{addr}:8868";

  broker_playback_message = "mmi.developer.playback";

  broker_power_message = "mmi.power.operation";

  BraincloudServerInfo tmp2;
  tmp2.secretKey = "5f73bb67-2b82-444a-8801-e2bb8b09e917";
  tmp2.__isset.secretKey = true;
  tmp2.appVersion = "1.0.0";
  tmp2.__isset.appVersion = true;
  tmp2.urlRoot = "";
  tmp2.__isset.urlRoot = true;
  tmp2.dispatcher = "";
  tmp2.__isset.dispatcher = true;
  tmp2.appId = "11498";
  tmp2.__isset.appId = true;
  tmp2.name = "external";
  tmp2.__isset.name = true;

  BraincloudServerList.push_back(tmp2);
  BraincloudServerInfo tmp3;
  tmp3.dispatcher = "dispatcherv2";
  tmp3.__isset.dispatcher = true;
  tmp3.urlRoot = "https://braincloud:4443/";
  tmp3.__isset.urlRoot = true;
  tmp3.secretKey = "1b057efd-4ce5-4245-b076-caba21972e5c";
  tmp3.__isset.secretKey = true;
  tmp3.name = "braincloudunittestuse";
  tmp3.__isset.name = true;
  tmp3.appId = "30002";
  tmp3.__isset.appId = true;
  tmp3.appVersion = "1.0.0";
  tmp3.__isset.appVersion = true;

  BraincloudServerList.push_back(tmp3);
  BraincloudServerInfo tmp4;
  tmp4.dispatcher = "";
  tmp4.__isset.dispatcher = true;
  tmp4.urlRoot = "";
  tmp4.__isset.urlRoot = true;
  tmp4.appId = "11782";
  tmp4.__isset.appId = true;
  tmp4.secretKey = "f75514d5-10bf-4e10-8701-2b9e16356d3f";
  tmp4.__isset.secretKey = true;
  tmp4.name = "internalray";
  tmp4.__isset.name = true;
  tmp4.appVersion = "1.0.0";
  tmp4.__isset.appVersion = true;

  BraincloudServerList.push_back(tmp4);
  BraincloudServerInfo tmp5;
  tmp5.dispatcher = "dispatcherv2";
  tmp5.__isset.dispatcher = true;
  tmp5.name = "localhost";
  tmp5.__isset.name = true;
  tmp5.urlRoot = "https://localhost:8443/";
  tmp5.__isset.urlRoot = true;
  tmp5.appVersion = "1.0.0";
  tmp5.__isset.appVersion = true;
  tmp5.secretKey = "655a2914-be71-495b-868f-68f6b4f6dfb1";
  tmp5.__isset.secretKey = true;
  tmp5.appId = "30001";
  tmp5.__isset.appId = true;

  BraincloudServerList.push_back(tmp5);

}

}}} // namespace

