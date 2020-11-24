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

#include <alibabacloud/ddoscoo/model/SwitchSchedulerRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::SwitchSchedulerRuleRequest;

SwitchSchedulerRuleRequest::SwitchSchedulerRuleRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "SwitchSchedulerRule")
{
	setMethod(HttpRequest::Method::Post);
}

SwitchSchedulerRuleRequest::~SwitchSchedulerRuleRequest()
{}

int SwitchSchedulerRuleRequest::getRuleType()const
{
	return ruleType_;
}

void SwitchSchedulerRuleRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", std::to_string(ruleType));
}

std::string SwitchSchedulerRuleRequest::getRuleName()const
{
	return ruleName_;
}

void SwitchSchedulerRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string SwitchSchedulerRuleRequest::getSwitchData()const
{
	return switchData_;
}

void SwitchSchedulerRuleRequest::setSwitchData(const std::string& switchData)
{
	switchData_ = switchData;
	setParameter("SwitchData", switchData);
}

std::string SwitchSchedulerRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void SwitchSchedulerRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

