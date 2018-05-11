#include "RuyiNetService.h"

namespace Ruyi
{
	RuyiNetService::RuyiNetService(RuyiNetClient * client)
		: mClient(client)
	{
	}

	std::string RuyiNetService::RunParentScript(int index, const std::string & scriptName, nlohmann::json payload)
	{
		std::string response = "";
		std::string jsonScriptData = payload.dump();	
		mClient->GetBCService()->Script_RunParentScript(response, scriptName, jsonScriptData, "RUYI", index);	
		return response;
	}
}