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

#include <alibabacloud/sae/model/DescribeApplicationInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationInstancesResult::DescribeApplicationInstancesResult() :
	ServiceResult()
{}

DescribeApplicationInstancesResult::DescribeApplicationInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationInstancesResult::~DescribeApplicationInstancesResult()
{}

void DescribeApplicationInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	auto allInstancesNode = dataNode["Instances"]["Instance"];
	for (auto dataNodeInstancesInstance : allInstancesNode)
	{
		Data::Instance instanceObject;
		if(!dataNodeInstancesInstance["GroupId"].isNull())
			instanceObject.groupId = dataNodeInstancesInstance["GroupId"].asString();
		if(!dataNodeInstancesInstance["InstanceId"].isNull())
			instanceObject.instanceId = dataNodeInstancesInstance["InstanceId"].asString();
		if(!dataNodeInstancesInstance["InstanceContainerStatus"].isNull())
			instanceObject.instanceContainerStatus = dataNodeInstancesInstance["InstanceContainerStatus"].asString();
		if(!dataNodeInstancesInstance["InstanceContainerIp"].isNull())
			instanceObject.instanceContainerIp = dataNodeInstancesInstance["InstanceContainerIp"].asString();
		if(!dataNodeInstancesInstance["CreateTimeStamp"].isNull())
			instanceObject.createTimeStamp = std::stol(dataNodeInstancesInstance["CreateTimeStamp"].asString());
		if(!dataNodeInstancesInstance["GroupId"].isNull())
			instanceObject.groupId1 = dataNodeInstancesInstance["GroupId"].asString();
		if(!dataNodeInstancesInstance["VSwitchId"].isNull())
			instanceObject.vSwitchId = dataNodeInstancesInstance["VSwitchId"].asString();
		if(!dataNodeInstancesInstance["InstanceContainerRestarts"].isNull())
			instanceObject.instanceContainerRestarts = std::stol(dataNodeInstancesInstance["InstanceContainerRestarts"].asString());
		data_.instances.push_back(instanceObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string DescribeApplicationInstancesResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationInstancesResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationInstancesResult::Data DescribeApplicationInstancesResult::getData()const
{
	return data_;
}

std::string DescribeApplicationInstancesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationInstancesResult::getCode()const
{
	return code_;
}

bool DescribeApplicationInstancesResult::getSuccess()const
{
	return success_;
}

