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

#include <alibabacloud/ledgerdb/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ledgerdb;
using namespace AlibabaCloud::Ledgerdb::Model;

DescribeRegionsResult::DescribeRegionsResult() :
	ServiceResult()
{}

DescribeRegionsResult::DescribeRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionsResult::~DescribeRegionsResult()
{}

void DescribeRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["Result"];
	for (auto valueRegionsResult : allRegionsNode)
	{
		Result regionsObject;
		if(!valueRegionsResult["LocalName"].isNull())
			regionsObject.localName = valueRegionsResult["LocalName"].asString();
		if(!valueRegionsResult["RegionEndpoint"].isNull())
			regionsObject.regionEndpoint = valueRegionsResult["RegionEndpoint"].asString();
		if(!valueRegionsResult["RegionId"].isNull())
			regionsObject.regionId = valueRegionsResult["RegionId"].asString();
		regions_.push_back(regionsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRegionsResult::Result> DescribeRegionsResult::getRegions()const
{
	return regions_;
}

int DescribeRegionsResult::getErrorCode()const
{
	return errorCode_;
}

bool DescribeRegionsResult::getSuccess()const
{
	return success_;
}

