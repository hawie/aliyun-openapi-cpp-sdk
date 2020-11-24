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

#include <alibabacloud/ddoscoo/model/CreateWebRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateWebRuleRequest;

CreateWebRuleRequest::CreateWebRuleRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "CreateWebRule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateWebRuleRequest::~CreateWebRuleRequest()
{}

std::string CreateWebRuleRequest::getRules()const
{
	return rules_;
}

void CreateWebRuleRequest::setRules(const std::string& rules)
{
	rules_ = rules;
	setParameter("Rules", rules);
}

std::string CreateWebRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateWebRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateWebRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateWebRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int CreateWebRuleRequest::getRsType()const
{
	return rsType_;
}

void CreateWebRuleRequest::setRsType(int rsType)
{
	rsType_ = rsType;
	setParameter("RsType", std::to_string(rsType));
}

std::vector<std::string> CreateWebRuleRequest::getInstanceIds()const
{
	return instanceIds_;
}

void CreateWebRuleRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int dep1 = 0; dep1!= instanceIds.size(); dep1++) {
		setParameter("InstanceIds."+ std::to_string(dep1), instanceIds.at(dep1));
	}
}

std::string CreateWebRuleRequest::getDomain()const
{
	return domain_;
}

void CreateWebRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

