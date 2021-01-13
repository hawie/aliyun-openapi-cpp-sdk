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

#ifndef ALIBABACLOUD_IOT_MODEL_LISTTASKBYPAGERESULT_H_
#define ALIBABACLOUD_IOT_MODEL_LISTTASKBYPAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT ListTaskByPageResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string status;
					std::string iotId;
					int progress;
					std::string taskId;
					std::string productName;
					std::string statusDetail;
					std::string jobName;
					std::string utcModified;
					std::string utcQueueTime;
					std::string jobId;
					std::string productKey;
					std::string deviceName;
				};


				ListTaskByPageResult();
				explicit ListTaskByPageResult(const std::string &payload);
				~ListTaskByPageResult();
				int getPageSize()const;
				int getPageCount()const;
				int getTotal()const;
				std::vector<DataItem> getData()const;
				int getPage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageCount_;
				int total_;
				std::vector<DataItem> data_;
				int page_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_LISTTASKBYPAGERESULT_H_