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

#include <alibabacloud/drds/model/CancleDDLTaskRequest.h>

using AlibabaCloud::Drds::Model::CancleDDLTaskRequest;

CancleDDLTaskRequest::CancleDDLTaskRequest() :
	RpcServiceRequest("drds", "2015-04-13", "CancleDDLTask")
{
	setMethod(HttpRequest::Method::Post);
}

CancleDDLTaskRequest::~CancleDDLTaskRequest()
{}

std::string CancleDDLTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CancleDDLTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string CancleDDLTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancleDDLTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CancleDDLTaskRequest::getDbName()const
{
	return dbName_;
}

void CancleDDLTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string CancleDDLTaskRequest::getTaskId()const
{
	return taskId_;
}

void CancleDDLTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

