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

#include <alibabacloud/ddoscoo/model/EnableWebCCRequest.h>

using AlibabaCloud::Ddoscoo::Model::EnableWebCCRequest;

EnableWebCCRequest::EnableWebCCRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "EnableWebCC")
{
	setMethod(HttpRequest::Method::Post);
}

EnableWebCCRequest::~EnableWebCCRequest()
{}

std::string EnableWebCCRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void EnableWebCCRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string EnableWebCCRequest::getSourceIp()const
{
	return sourceIp_;
}

void EnableWebCCRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string EnableWebCCRequest::getDomain()const
{
	return domain_;
}

void EnableWebCCRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

