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

#include <alibabacloud/cusanalytic_sc_online/model/GetPersonInStore5MinRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetPersonInStore5MinRequest;

GetPersonInStore5MinRequest::GetPersonInStore5MinRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetPersonInStore5Min")
{}

GetPersonInStore5MinRequest::~GetPersonInStore5MinRequest()
{}

std::string GetPersonInStore5MinRequest::getDate()const
{
	return date_;
}

void GetPersonInStore5MinRequest::setDate(const std::string& date)
{
	date_ = date;
	setCoreParameter("Date", date);
}

long GetPersonInStore5MinRequest::getStoreId()const
{
	return storeId_;
}

void GetPersonInStore5MinRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setCoreParameter("StoreId", std::to_string(storeId));
}
