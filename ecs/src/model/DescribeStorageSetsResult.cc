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

#include <alibabacloud/ecs/model/DescribeStorageSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeStorageSetsResult::DescribeStorageSetsResult() :
	ServiceResult()
{}

DescribeStorageSetsResult::DescribeStorageSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageSetsResult::~DescribeStorageSetsResult()
{}

void DescribeStorageSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorageSets = value["StorageSets"]["StorageSet"];
	for (auto value : allStorageSets)
	{
		StorageSet storageSetsObject;
		if(!value["StorageSetId"].isNull())
			storageSetsObject.storageSetId = value["StorageSetId"].asString();
		if(!value["CreationTime"].isNull())
			storageSetsObject.creationTime = value["CreationTime"].asString();
		if(!value["StorageSetName"].isNull())
			storageSetsObject.storageSetName = value["StorageSetName"].asString();
		if(!value["Description"].isNull())
			storageSetsObject.description = value["Description"].asString();
		if(!value["StorageSetPartitionNumber"].isNull())
			storageSetsObject.storageSetPartitionNumber = std::stoi(value["StorageSetPartitionNumber"].asString());
		if(!value["RegionId"].isNull())
			storageSetsObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			storageSetsObject.zoneId = value["ZoneId"].asString();
		storageSets_.push_back(storageSetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeStorageSetsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeStorageSetsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStorageSetsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeStorageSetsResult::StorageSet> DescribeStorageSetsResult::getStorageSets()const
{
	return storageSets_;
}

