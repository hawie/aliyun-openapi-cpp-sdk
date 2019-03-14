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

#include <alibabacloud/emr/model/KillExecutionPlanInstanceRequest.h>

using AlibabaCloud::Emr::Model::KillExecutionPlanInstanceRequest;

KillExecutionPlanInstanceRequest::KillExecutionPlanInstanceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "KillExecutionPlanInstance")
{}

KillExecutionPlanInstanceRequest::~KillExecutionPlanInstanceRequest()
{}

long KillExecutionPlanInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void KillExecutionPlanInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string KillExecutionPlanInstanceRequest::getRegionId()const
{
	return regionId_;
}

void KillExecutionPlanInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string KillExecutionPlanInstanceRequest::getId()const
{
	return id_;
}

void KillExecutionPlanInstanceRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string KillExecutionPlanInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void KillExecutionPlanInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

