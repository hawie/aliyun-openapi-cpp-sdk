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

#include <alibabacloud/vod/model/SubmitAIVideoPornRecogJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIVideoPornRecogJobRequest;

SubmitAIVideoPornRecogJobRequest::SubmitAIVideoPornRecogJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitAIVideoPornRecogJob")
{}

SubmitAIVideoPornRecogJobRequest::~SubmitAIVideoPornRecogJobRequest()
{}

std::string SubmitAIVideoPornRecogJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAIVideoPornRecogJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitAIVideoPornRecogJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAIVideoPornRecogJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAIVideoPornRecogJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAIVideoPornRecogJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAIVideoPornRecogJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAIVideoPornRecogJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAIVideoPornRecogJobRequest::getAIVideoPornRecogConfig()const
{
	return aIVideoPornRecogConfig_;
}

void SubmitAIVideoPornRecogJobRequest::setAIVideoPornRecogConfig(const std::string& aIVideoPornRecogConfig)
{
	aIVideoPornRecogConfig_ = aIVideoPornRecogConfig;
	setParameter("AIVideoPornRecogConfig", aIVideoPornRecogConfig);
}

std::string SubmitAIVideoPornRecogJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAIVideoPornRecogJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string SubmitAIVideoPornRecogJobRequest::getMediaId()const
{
	return mediaId_;
}

void SubmitAIVideoPornRecogJobRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string SubmitAIVideoPornRecogJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAIVideoPornRecogJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}
