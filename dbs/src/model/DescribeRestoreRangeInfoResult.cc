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

#include <alibabacloud/dbs/model/DescribeRestoreRangeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeRestoreRangeInfoResult::DescribeRestoreRangeInfoResult() :
	ServiceResult()
{}

DescribeRestoreRangeInfoResult::DescribeRestoreRangeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreRangeInfoResult::~DescribeRestoreRangeInfoResult()
{}

void DescribeRestoreRangeInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBSRecoverRange"];
	for (auto valueItemsDBSRecoverRange : allItemsNode)
	{
		DBSRecoverRange itemsObject;
		if(!valueItemsDBSRecoverRange["SourceEndpointInstanceType"].isNull())
			itemsObject.sourceEndpointInstanceType = valueItemsDBSRecoverRange["SourceEndpointInstanceType"].asString();
		if(!valueItemsDBSRecoverRange["SourceEndpointInstanceID"].isNull())
			itemsObject.sourceEndpointInstanceID = valueItemsDBSRecoverRange["SourceEndpointInstanceID"].asString();
		if(!valueItemsDBSRecoverRange["BeginTimestampForRestore"].isNull())
			itemsObject.beginTimestampForRestore = std::stol(valueItemsDBSRecoverRange["BeginTimestampForRestore"].asString());
		if(!valueItemsDBSRecoverRange["EndTimestampForRestore"].isNull())
			itemsObject.endTimestampForRestore = std::stol(valueItemsDBSRecoverRange["EndTimestampForRestore"].asString());
		if(!valueItemsDBSRecoverRange["RangeType"].isNull())
			itemsObject.rangeType = valueItemsDBSRecoverRange["RangeType"].asString();
		auto allFullBackupListNode = allItemsNode["FullBackupList"]["FullBackupDetail"];
		for (auto allItemsNodeFullBackupListFullBackupDetail : allFullBackupListNode)
		{
			DBSRecoverRange::FullBackupDetail fullBackupListObject;
			if(!allItemsNodeFullBackupListFullBackupDetail["BackupSetId"].isNull())
				fullBackupListObject.backupSetId = allItemsNodeFullBackupListFullBackupDetail["BackupSetId"].asString();
			if(!allItemsNodeFullBackupListFullBackupDetail["StartTime"].isNull())
				fullBackupListObject.startTime = std::stol(allItemsNodeFullBackupListFullBackupDetail["StartTime"].asString());
			if(!allItemsNodeFullBackupListFullBackupDetail["EndTime"].isNull())
				fullBackupListObject.endTime = std::stol(allItemsNodeFullBackupListFullBackupDetail["EndTime"].asString());
			itemsObject.fullBackupList.push_back(fullBackupListObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int DescribeRestoreRangeInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeRestoreRangeInfoResult::DBSRecoverRange> DescribeRestoreRangeInfoResult::getItems()const
{
	return items_;
}

std::string DescribeRestoreRangeInfoResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeRestoreRangeInfoResult::getSuccess()const
{
	return success_;
}

std::string DescribeRestoreRangeInfoResult::getErrCode()const
{
	return errCode_;
}
