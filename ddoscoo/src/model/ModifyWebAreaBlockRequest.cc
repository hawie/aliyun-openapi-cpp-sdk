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

#include <alibabacloud/ddoscoo/model/ModifyWebAreaBlockRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebAreaBlockRequest;

ModifyWebAreaBlockRequest::ModifyWebAreaBlockRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebAreaBlock")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyWebAreaBlockRequest::~ModifyWebAreaBlockRequest()
{}

std::vector<std::string> ModifyWebAreaBlockRequest::getRegions()const
{
	return regions_;
}

void ModifyWebAreaBlockRequest::setRegions(const std::vector<std::string>& regions)
{
	regions_ = regions;
	for(int dep1 = 0; dep1!= regions.size(); dep1++) {
		setParameter("Regions."+ std::to_string(dep1), regions.at(dep1));
	}
}

std::string ModifyWebAreaBlockRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyWebAreaBlockRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyWebAreaBlockRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebAreaBlockRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyWebAreaBlockRequest::getDomain()const
{
	return domain_;
}

void ModifyWebAreaBlockRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

