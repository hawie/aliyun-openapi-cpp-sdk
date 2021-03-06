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

#include <alibabacloud/sgw/model/DescribeGatewayLoggingRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayLoggingRequest;

DescribeGatewayLoggingRequest::DescribeGatewayLoggingRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayLogging")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayLoggingRequest::~DescribeGatewayLoggingRequest()
{}

std::string DescribeGatewayLoggingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayLoggingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayLoggingRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayLoggingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayLoggingRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeGatewayLoggingRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

