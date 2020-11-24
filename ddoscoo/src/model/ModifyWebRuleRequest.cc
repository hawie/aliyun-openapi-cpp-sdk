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

#include <alibabacloud/ddoscoo/model/ModifyWebRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebRuleRequest;

ModifyWebRuleRequest::ModifyWebRuleRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyWebRuleRequest::~ModifyWebRuleRequest()
{}

std::string ModifyWebRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyWebRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyWebRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ModifyWebRuleRequest::getRsType()const
{
	return rsType_;
}

void ModifyWebRuleRequest::setRsType(int rsType)
{
	rsType_ = rsType;
	setParameter("RsType", std::to_string(rsType));
}

std::vector<std::string> ModifyWebRuleRequest::getRealServers()const
{
	return realServers_;
}

void ModifyWebRuleRequest::setRealServers(const std::vector<std::string>& realServers)
{
	realServers_ = realServers;
	for(int dep1 = 0; dep1!= realServers.size(); dep1++) {
		setParameter("RealServers."+ std::to_string(dep1), realServers.at(dep1));
	}
}

std::string ModifyWebRuleRequest::getProxyTypes()const
{
	return proxyTypes_;
}

void ModifyWebRuleRequest::setProxyTypes(const std::string& proxyTypes)
{
	proxyTypes_ = proxyTypes;
	setParameter("ProxyTypes", proxyTypes);
}

std::vector<std::string> ModifyWebRuleRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ModifyWebRuleRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int dep1 = 0; dep1!= instanceIds.size(); dep1++) {
		setParameter("InstanceIds."+ std::to_string(dep1), instanceIds.at(dep1));
	}
}

std::string ModifyWebRuleRequest::getDomain()const
{
	return domain_;
}

void ModifyWebRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

