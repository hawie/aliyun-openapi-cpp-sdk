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

#include <alibabacloud/ddoscoo/model/ModifyWebPreciseAccessRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebPreciseAccessRuleRequest;

ModifyWebPreciseAccessRuleRequest::ModifyWebPreciseAccessRuleRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebPreciseAccessRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyWebPreciseAccessRuleRequest::~ModifyWebPreciseAccessRuleRequest()
{}

int ModifyWebPreciseAccessRuleRequest::getExpires()const
{
	return expires_;
}

void ModifyWebPreciseAccessRuleRequest::setExpires(int expires)
{
	expires_ = expires;
	setParameter("Expires", std::to_string(expires));
}

std::string ModifyWebPreciseAccessRuleRequest::getRules()const
{
	return rules_;
}

void ModifyWebPreciseAccessRuleRequest::setRules(const std::string& rules)
{
	rules_ = rules;
	setParameter("Rules", rules);
}

std::string ModifyWebPreciseAccessRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyWebPreciseAccessRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyWebPreciseAccessRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebPreciseAccessRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyWebPreciseAccessRuleRequest::getDomain()const
{
	return domain_;
}

void ModifyWebPreciseAccessRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

