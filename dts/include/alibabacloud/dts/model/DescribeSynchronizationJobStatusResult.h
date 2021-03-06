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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBSTATUSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeSynchronizationJobStatusResult : public ServiceResult
			{
			public:
				struct DataInitializationStatus
				{
					std::string status;
					std::string progress;
					std::string percent;
					std::string errorMessage;
				};
				struct DataSynchronizationStatus
				{
					std::string status;
					std::string checkpoint;
					long delayMillis;
					std::string percent;
					std::string errorMessage;
					std::string delay;
				};
				struct DestinationEndpoint
				{
					std::string userName;
					std::string instanceId;
					std::string iP;
					std::string port;
					std::string instanceType;
					std::string engineName;
				};
				struct Performance
				{
					std::string rPS;
					std::string fLOW;
				};
				struct PrecheckStatus
				{
					struct CheckItem
					{
						std::string repairMethod;
						std::string checkStatus;
						std::string itemName;
						std::string errorMessage;
					};
					std::string status;
					std::string percent;
					std::vector<CheckItem> detail;
				};
				struct SourceEndpoint
				{
					std::string userName;
					std::string instanceId;
					std::string iP;
					std::string port;
					std::string instanceType;
					std::string engineName;
				};
				struct StructureInitializationStatus
				{
					std::string status;
					std::string progress;
					std::string percent;
					std::string errorMessage;
				};
				struct SynchronizationObject
				{
					struct TableExclude
					{
						std::string tableName;
					};
					struct TableInclude
					{
						std::string tableName;
					};
					std::vector<SynchronizationObject::TableInclude> tableIncludes;
					std::vector<SynchronizationObject::TableExclude> tableExcludes;
					std::string schemaName;
					std::string newSchemaName;
				};


				DescribeSynchronizationJobStatusResult();
				explicit DescribeSynchronizationJobStatusResult(const std::string &payload);
				~DescribeSynchronizationJobStatusResult();
				std::string getStatus()const;
				DataInitializationStatus getDataInitializationStatus()const;
				std::vector<SynchronizationObject> getSynchronizationObjects()const;
				std::string getSynchronizationJobName()const;
				std::string getPayType()const;
				std::string getErrMessage()const;
				std::string getDelay()const;
				std::string getSuccess()const;
				std::string getErrCode()const;
				PrecheckStatus getPrecheckStatus()const;
				std::string getCheckpoint()const;
				long getDelayMillis()const;
				std::string getSynchronizationJobId()const;
				std::string getDataInitialization()const;
				DestinationEndpoint getDestinationEndpoint()const;
				SourceEndpoint getSourceEndpoint()const;
				std::string getStructureInitialization()const;
				Performance getPerformance()const;
				std::string getErrorMessage()const;
				std::string getExpireTime()const;
				std::string getSynchronizationJobClass()const;
				std::string getSynchronizationDirection()const;
				DataSynchronizationStatus getDataSynchronizationStatus()const;
				StructureInitializationStatus getStructureInitializationStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				DataInitializationStatus dataInitializationStatus_;
				std::vector<SynchronizationObject> synchronizationObjects_;
				std::string synchronizationJobName_;
				std::string payType_;
				std::string errMessage_;
				std::string delay_;
				std::string success_;
				std::string errCode_;
				PrecheckStatus precheckStatus_;
				std::string checkpoint_;
				long delayMillis_;
				std::string synchronizationJobId_;
				std::string dataInitialization_;
				DestinationEndpoint destinationEndpoint_;
				SourceEndpoint sourceEndpoint_;
				std::string structureInitialization_;
				Performance performance_;
				std::string errorMessage_;
				std::string expireTime_;
				std::string synchronizationJobClass_;
				std::string synchronizationDirection_;
				DataSynchronizationStatus dataSynchronizationStatus_;
				StructureInitializationStatus structureInitializationStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBSTATUSRESULT_H_