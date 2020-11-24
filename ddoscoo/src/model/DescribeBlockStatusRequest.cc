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

#include <alibabacloud/ddoscoo/model/DescribeBlockStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeBlockStatusRequest;

DescribeBlockStatusRequest::DescribeBlockStatusRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeBlockStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBlockStatusRequest::~DescribeBlockStatusRequest()
{}

std::string DescribeBlockStatusRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeBlockStatusRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeBlockStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeBlockStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::vector<std::string> DescribeBlockStatusRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeBlockStatusRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int dep1 = 0; dep1!= instanceIds.size(); dep1++) {
		setParameter("InstanceIds."+ std::to_string(dep1), instanceIds.at(dep1));
	}
}

std::string DescribeBlockStatusRequest::getLang()const
{
	return lang_;
}

void DescribeBlockStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

