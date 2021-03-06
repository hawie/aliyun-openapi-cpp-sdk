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

#include <alibabacloud/cdrs/model/ListPersonTraceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListPersonTraceResult::ListPersonTraceResult() :
	ServiceResult()
{}

ListPersonTraceResult::ListPersonTraceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonTraceResult::~ListPersonTraceResult()
{}

void ListPersonTraceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Date"].isNull())
			dataObject.date = valueDataDataItem["Date"].asString();
		if(!valueDataDataItem["LastTime"].isNull())
			dataObject.lastTime = valueDataDataItem["LastTime"].asString();
		if(!valueDataDataItem["StartTime"].isNull())
			dataObject.startTime = valueDataDataItem["StartTime"].asString();
		if(!valueDataDataItem["EndSourceImage"].isNull())
			dataObject.endSourceImage = valueDataDataItem["EndSourceImage"].asString();
		if(!valueDataDataItem["DeviceId"].isNull())
			dataObject.deviceId = valueDataDataItem["DeviceId"].asString();
		if(!valueDataDataItem["StartTargetImage"].isNull())
			dataObject.startTargetImage = valueDataDataItem["StartTargetImage"].asString();
		if(!valueDataDataItem["GroupId"].isNull())
			dataObject.groupId = valueDataDataItem["GroupId"].asString();
		if(!valueDataDataItem["PersonId"].isNull())
			dataObject.personId = valueDataDataItem["PersonId"].asString();
		if(!valueDataDataItem["StartSourceImage"].isNull())
			dataObject.startSourceImage = valueDataDataItem["StartSourceImage"].asString();
		if(!valueDataDataItem["CorpId"].isNull())
			dataObject.corpId = valueDataDataItem["CorpId"].asString();
		if(!valueDataDataItem["EndTargetImage"].isNull())
			dataObject.endTargetImage = valueDataDataItem["EndTargetImage"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListPersonTraceResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPersonTraceResult::getMessage()const
{
	return message_;
}

int ListPersonTraceResult::getPageSize()const
{
	return pageSize_;
}

int ListPersonTraceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPersonTraceResult::DataItem> ListPersonTraceResult::getData()const
{
	return data_;
}

std::string ListPersonTraceResult::getCode()const
{
	return code_;
}

std::string ListPersonTraceResult::getSuccess()const
{
	return success_;
}

