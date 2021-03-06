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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListCallDetailRecordsRequest : public RpcServiceRequest
			{

			public:
				ListCallDetailRecordsRequest();
				~ListCallDetailRecordsRequest();

				std::string getContactId()const;
				void setContactId(const std::string& contactId);
				std::string getOrderByField()const;
				void setOrderByField(const std::string& orderByField);
				long getStartTime()const;
				void setStartTime(long startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSortOrder()const;
				void setSortOrder(const std::string& sortOrder);
				bool getWithRecording()const;
				void setWithRecording(bool withRecording);
				std::string getAgentId()const;
				void setAgentId(const std::string& agentId);
				std::string getContactType()const;
				void setContactType(const std::string& contactType);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getCallingNumber()const;
				void setCallingNumber(const std::string& callingNumber);
				std::string getContactDisposition()const;
				void setContactDisposition(const std::string& contactDisposition);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSkillGroupId()const;
				void setSkillGroupId(const std::string& skillGroupId);

            private:
				std::string contactId_;
				std::string orderByField_;
				long startTime_;
				int pageNumber_;
				std::string calledNumber_;
				int pageSize_;
				std::string sortOrder_;
				bool withRecording_;
				std::string agentId_;
				std::string contactType_;
				long endTime_;
				std::string callingNumber_;
				std::string contactDisposition_;
				std::string instanceId_;
				std::string skillGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSREQUEST_H_