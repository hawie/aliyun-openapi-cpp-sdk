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

#include <alibabacloud/r-kvstore/model/DescribeTasksRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeTasksRequest;

DescribeTasksRequest::DescribeTasksRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeTasks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTasksRequest::~DescribeTasksRequest()
{}

long DescribeTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeTasksRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTasksRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int DescribeTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTasksRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTasksRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeTasksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeTasksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeTasksRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTasksRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTasksRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeTasksRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeTasksRequest::getStatus()const
{
	return status_;
}

void DescribeTasksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

