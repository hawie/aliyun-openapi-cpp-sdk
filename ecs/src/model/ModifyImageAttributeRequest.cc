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

#include <alibabacloud/ecs/model/ModifyImageAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyImageAttributeRequest;

ModifyImageAttributeRequest::ModifyImageAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyImageAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyImageAttributeRequest::~ModifyImageAttributeRequest()
{}

long ModifyImageAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyImageAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyImageAttributeRequest::getImageId()const
{
	return imageId_;
}

void ModifyImageAttributeRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string ModifyImageAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyImageAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyImageAttributeRequest::getBootMode()const
{
	return bootMode_;
}

void ModifyImageAttributeRequest::setBootMode(const std::string& bootMode)
{
	bootMode_ = bootMode;
	setParameter("BootMode", bootMode);
}

std::string ModifyImageAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyImageAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyImageAttributeRequest::getImageName()const
{
	return imageName_;
}

void ModifyImageAttributeRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

std::string ModifyImageAttributeRequest::getLicenseType()const
{
	return licenseType_;
}

void ModifyImageAttributeRequest::setLicenseType(const std::string& licenseType)
{
	licenseType_ = licenseType;
	setParameter("LicenseType", licenseType);
}

std::string ModifyImageAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyImageAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyImageAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyImageAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyImageAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyImageAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyImageAttributeRequest::getImageFamily()const
{
	return imageFamily_;
}

void ModifyImageAttributeRequest::setImageFamily(const std::string& imageFamily)
{
	imageFamily_ = imageFamily;
	setParameter("ImageFamily", imageFamily);
}

std::string ModifyImageAttributeRequest::getStatus()const
{
	return status_;
}

void ModifyImageAttributeRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

