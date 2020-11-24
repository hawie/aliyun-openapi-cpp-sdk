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

#include <alibabacloud/ddoscoo/model/DescribeHealthCheckStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeHealthCheckStatusRequest;

DescribeHealthCheckStatusRequest::DescribeHealthCheckStatusRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeHealthCheckStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeHealthCheckStatusRequest::~DescribeHealthCheckStatusRequest()
{}

std::string DescribeHealthCheckStatusRequest::getNetworkRules()const
{
	return networkRules_;
}

void DescribeHealthCheckStatusRequest::setNetworkRules(const std::string& networkRules)
{
	networkRules_ = networkRules;
	setParameter("NetworkRules", networkRules);
}

std::string DescribeHealthCheckStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeHealthCheckStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

