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

#include <alibabacloud/crm/model/GetAliyunPkByAliyunIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Crm;
using namespace AlibabaCloud::Crm::Model;

GetAliyunPkByAliyunIdResult::GetAliyunPkByAliyunIdResult() :
	ServiceResult()
{}

GetAliyunPkByAliyunIdResult::GetAliyunPkByAliyunIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAliyunPkByAliyunIdResult::~GetAliyunPkByAliyunIdResult()
{}

void GetAliyunPkByAliyunIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AliyunPk"].isNull())
		aliyunPk_ = value["AliyunPk"].asString();

}

std::string GetAliyunPkByAliyunIdResult::getAliyunPk()const
{
	return aliyunPk_;
}

