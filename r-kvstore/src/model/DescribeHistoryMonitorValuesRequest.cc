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

#include <alibabacloud/r-kvstore/model/DescribeHistoryMonitorValuesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeHistoryMonitorValuesRequest;

DescribeHistoryMonitorValuesRequest::DescribeHistoryMonitorValuesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeHistoryMonitorValues")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeHistoryMonitorValuesRequest::~DescribeHistoryMonitorValuesRequest()
{}

long DescribeHistoryMonitorValuesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHistoryMonitorValuesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeHistoryMonitorValuesRequest::getStartTime()const
{
	return startTime_;
}

void DescribeHistoryMonitorValuesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeHistoryMonitorValuesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHistoryMonitorValuesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeHistoryMonitorValuesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeHistoryMonitorValuesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeHistoryMonitorValuesRequest::getIntervalForHistory()const
{
	return intervalForHistory_;
}

void DescribeHistoryMonitorValuesRequest::setIntervalForHistory(const std::string& intervalForHistory)
{
	intervalForHistory_ = intervalForHistory;
	setParameter("IntervalForHistory", intervalForHistory);
}

std::string DescribeHistoryMonitorValuesRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeHistoryMonitorValuesRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string DescribeHistoryMonitorValuesRequest::getAccessType()const
{
	return accessType_;
}

void DescribeHistoryMonitorValuesRequest::setAccessType(const std::string& accessType)
{
	accessType_ = accessType;
	setParameter("AccessType", accessType);
}

std::string DescribeHistoryMonitorValuesRequest::getProduct()const
{
	return product_;
}

void DescribeHistoryMonitorValuesRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeHistoryMonitorValuesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHistoryMonitorValuesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeHistoryMonitorValuesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeHistoryMonitorValuesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeHistoryMonitorValuesRequest::getEndTime()const
{
	return endTime_;
}

void DescribeHistoryMonitorValuesRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeHistoryMonitorValuesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHistoryMonitorValuesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeHistoryMonitorValuesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeHistoryMonitorValuesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeHistoryMonitorValuesRequest::getCategory()const
{
	return category_;
}

void DescribeHistoryMonitorValuesRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string DescribeHistoryMonitorValuesRequest::getMonitorKeys()const
{
	return monitorKeys_;
}

void DescribeHistoryMonitorValuesRequest::setMonitorKeys(const std::string& monitorKeys)
{
	monitorKeys_ = monitorKeys;
	setParameter("MonitorKeys", monitorKeys);
}

