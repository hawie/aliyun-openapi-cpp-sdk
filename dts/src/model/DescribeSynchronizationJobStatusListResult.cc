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

#include <alibabacloud/dts/model/DescribeSynchronizationJobStatusListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSynchronizationJobStatusListResult::DescribeSynchronizationJobStatusListResult() :
	ServiceResult()
{}

DescribeSynchronizationJobStatusListResult::DescribeSynchronizationJobStatusListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSynchronizationJobStatusListResult::~DescribeSynchronizationJobStatusListResult()
{}

void DescribeSynchronizationJobStatusListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSynchronizationJobListStatusListNode = value["SynchronizationJobListStatusList"]["SynchronizationJobStatusInfo"];
	for (auto valueSynchronizationJobListStatusListSynchronizationJobStatusInfo : allSynchronizationJobListStatusListNode)
	{
		SynchronizationJobStatusInfo synchronizationJobListStatusListObject;
		if(!valueSynchronizationJobListStatusListSynchronizationJobStatusInfo["SynchronizationJobId"].isNull())
			synchronizationJobListStatusListObject.synchronizationJobId = valueSynchronizationJobListStatusListSynchronizationJobStatusInfo["SynchronizationJobId"].asString();
		auto allSynchronizationDirectionInfoListNode = valueSynchronizationJobListStatusListSynchronizationJobStatusInfo["SynchronizationDirectionInfoList"]["SynchronizationDirectionInfo"];
		for (auto valueSynchronizationJobListStatusListSynchronizationJobStatusInfoSynchronizationDirectionInfoListSynchronizationDirectionInfo : allSynchronizationDirectionInfoListNode)
		{
			SynchronizationJobStatusInfo::SynchronizationDirectionInfo synchronizationDirectionInfoListObject;
			if(!valueSynchronizationJobListStatusListSynchronizationJobStatusInfoSynchronizationDirectionInfoListSynchronizationDirectionInfo["Checkpoint"].isNull())
				synchronizationDirectionInfoListObject.checkpoint = valueSynchronizationJobListStatusListSynchronizationJobStatusInfoSynchronizationDirectionInfoListSynchronizationDirectionInfo["Checkpoint"].asString();
			if(!valueSynchronizationJobListStatusListSynchronizationJobStatusInfoSynchronizationDirectionInfoListSynchronizationDirectionInfo["Status"].isNull())
				synchronizationDirectionInfoListObject.status = valueSynchronizationJobListStatusListSynchronizationJobStatusInfoSynchronizationDirectionInfoListSynchronizationDirectionInfo["Status"].asString();
			if(!valueSynchronizationJobListStatusListSynchronizationJobStatusInfoSynchronizationDirectionInfoListSynchronizationDirectionInfo["SynchronizationDirection"].isNull())
				synchronizationDirectionInfoListObject.synchronizationDirection = valueSynchronizationJobListStatusListSynchronizationJobStatusInfoSynchronizationDirectionInfoListSynchronizationDirectionInfo["SynchronizationDirection"].asString();
			synchronizationJobListStatusListObject.synchronizationDirectionInfoList.push_back(synchronizationDirectionInfoListObject);
		}
		synchronizationJobListStatusList_.push_back(synchronizationJobListStatusListObject);
	}
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribeSynchronizationJobStatusListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSynchronizationJobStatusListResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSynchronizationJobStatusListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSynchronizationJobStatusListResult::SynchronizationJobStatusInfo> DescribeSynchronizationJobStatusListResult::getSynchronizationJobListStatusList()const
{
	return synchronizationJobListStatusList_;
}

std::string DescribeSynchronizationJobStatusListResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeSynchronizationJobStatusListResult::getSuccess()const
{
	return success_;
}

std::string DescribeSynchronizationJobStatusListResult::getErrCode()const
{
	return errCode_;
}

