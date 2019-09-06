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

#include <alibabacloud/ecs/model/DeleteHpcClusterRequest.h>

using AlibabaCloud::Ecs::Model::DeleteHpcClusterRequest;

DeleteHpcClusterRequest::DeleteHpcClusterRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteHpcCluster")
{}

DeleteHpcClusterRequest::~DeleteHpcClusterRequest()
{}

long DeleteHpcClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteHpcClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteHpcClusterRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void DeleteHpcClusterRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", hpcClusterId);
}

std::string DeleteHpcClusterRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteHpcClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteHpcClusterRequest::getRegionId()const
{
	return regionId_;
}

void DeleteHpcClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteHpcClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteHpcClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteHpcClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteHpcClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteHpcClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteHpcClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

