/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/privatelink/model/CreateVpcEndpointServiceRequest.h>

using AlibabaCloud::Privatelink::Model::CreateVpcEndpointServiceRequest;

CreateVpcEndpointServiceRequest::CreateVpcEndpointServiceRequest() :
	RpcServiceRequest("privatelink", "2020-04-15", "CreateVpcEndpointService")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVpcEndpointServiceRequest::~CreateVpcEndpointServiceRequest()
{}

bool CreateVpcEndpointServiceRequest::getAutoAcceptEnabled()const
{
	return autoAcceptEnabled_;
}

void CreateVpcEndpointServiceRequest::setAutoAcceptEnabled(bool autoAcceptEnabled)
{
	autoAcceptEnabled_ = autoAcceptEnabled;
	setParameter("AutoAcceptEnabled", autoAcceptEnabled ? "true" : "false");
}

std::string CreateVpcEndpointServiceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVpcEndpointServiceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateVpcEndpointServiceRequest::getPayer()const
{
	return payer_;
}

void CreateVpcEndpointServiceRequest::setPayer(const std::string& payer)
{
	payer_ = payer;
	setParameter("Payer", payer);
}

std::string CreateVpcEndpointServiceRequest::getRegionId()const
{
	return regionId_;
}

void CreateVpcEndpointServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateVpcEndpointServiceRequest::getDryRun()const
{
	return dryRun_;
}

void CreateVpcEndpointServiceRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::vector<CreateVpcEndpointServiceRequest::Resource> CreateVpcEndpointServiceRequest::getResource()const
{
	return resource_;
}

void CreateVpcEndpointServiceRequest::setResource(const std::vector<Resource>& resource)
{
	resource_ = resource;
	for(int dep1 = 0; dep1!= resource.size(); dep1++) {
		auto resourceObj = resource.at(dep1);
		std::string resourceObjStr = "Resource." + std::to_string(dep1 + 1);
		setParameter(resourceObjStr + ".ResourceId", resourceObj.resourceId);
		setParameter(resourceObjStr + ".ResourceType", resourceObj.resourceType);
	}
}

std::string CreateVpcEndpointServiceRequest::getServiceDescription()const
{
	return serviceDescription_;
}

void CreateVpcEndpointServiceRequest::setServiceDescription(const std::string& serviceDescription)
{
	serviceDescription_ = serviceDescription;
	setParameter("ServiceDescription", serviceDescription);
}

