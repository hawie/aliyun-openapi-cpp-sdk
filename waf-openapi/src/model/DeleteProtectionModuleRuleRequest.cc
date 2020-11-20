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

#include <alibabacloud/waf-openapi/model/DeleteProtectionModuleRuleRequest.h>

using AlibabaCloud::Waf_openapi::Model::DeleteProtectionModuleRuleRequest;

DeleteProtectionModuleRuleRequest::DeleteProtectionModuleRuleRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "DeleteProtectionModuleRule")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteProtectionModuleRuleRequest::~DeleteProtectionModuleRuleRequest()
{}

std::string DeleteProtectionModuleRuleRequest::getDefenseType()const
{
	return defenseType_;
}

void DeleteProtectionModuleRuleRequest::setDefenseType(const std::string& defenseType)
{
	defenseType_ = defenseType;
	setParameter("DefenseType", defenseType);
}

std::string DeleteProtectionModuleRuleRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteProtectionModuleRuleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteProtectionModuleRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteProtectionModuleRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteProtectionModuleRuleRequest::getDomain()const
{
	return domain_;
}

void DeleteProtectionModuleRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DeleteProtectionModuleRuleRequest::getLang()const
{
	return lang_;
}

void DeleteProtectionModuleRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

long DeleteProtectionModuleRuleRequest::getRuleId()const
{
	return ruleId_;
}

void DeleteProtectionModuleRuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", std::to_string(ruleId));
}

