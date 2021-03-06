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

#include <alibabacloud/vcs/model/BindUserRequest.h>

using AlibabaCloud::Vcs::Model::BindUserRequest;

BindUserRequest::BindUserRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "BindUser")
{
	setMethod(HttpRequest::Method::Post);
}

BindUserRequest::~BindUserRequest()
{}

std::string BindUserRequest::getIsvSubId()const
{
	return isvSubId_;
}

void BindUserRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string BindUserRequest::getCorpId()const
{
	return corpId_;
}

void BindUserRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long BindUserRequest::getUserId()const
{
	return userId_;
}

void BindUserRequest::setUserId(long userId)
{
	userId_ = userId;
	setBodyParameter("UserId", std::to_string(userId));
}

std::string BindUserRequest::getMatchingRate()const
{
	return matchingRate_;
}

void BindUserRequest::setMatchingRate(const std::string& matchingRate)
{
	matchingRate_ = matchingRate;
	setBodyParameter("MatchingRate", matchingRate);
}

std::string BindUserRequest::getPersonId()const
{
	return personId_;
}

void BindUserRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

