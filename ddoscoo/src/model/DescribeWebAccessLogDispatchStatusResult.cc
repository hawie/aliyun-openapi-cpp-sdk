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

#include <alibabacloud/ddoscoo/model/DescribeWebAccessLogDispatchStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebAccessLogDispatchStatusResult::DescribeWebAccessLogDispatchStatusResult() :
	ServiceResult()
{}

DescribeWebAccessLogDispatchStatusResult::DescribeWebAccessLogDispatchStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebAccessLogDispatchStatusResult::~DescribeWebAccessLogDispatchStatusResult()
{}

void DescribeWebAccessLogDispatchStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlsConfigStatusNode = value["SlsConfigStatus"]["SlsConfigStatusItem"];
	for (auto valueSlsConfigStatusSlsConfigStatusItem : allSlsConfigStatusNode)
	{
		SlsConfigStatusItem slsConfigStatusObject;
		if(!valueSlsConfigStatusSlsConfigStatusItem["Enable"].isNull())
			slsConfigStatusObject.enable = valueSlsConfigStatusSlsConfigStatusItem["Enable"].asString() == "true";
		if(!valueSlsConfigStatusSlsConfigStatusItem["Domain"].isNull())
			slsConfigStatusObject.domain = valueSlsConfigStatusSlsConfigStatusItem["Domain"].asString();
		slsConfigStatus_.push_back(slsConfigStatusObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebAccessLogDispatchStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeWebAccessLogDispatchStatusResult::SlsConfigStatusItem> DescribeWebAccessLogDispatchStatusResult::getSlsConfigStatus()const
{
	return slsConfigStatus_;
}

