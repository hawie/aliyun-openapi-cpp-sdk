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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTCONNSCOUNTREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTCONNSCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribePortConnsCountRequest : public RpcServiceRequest
			{

			public:
				DescribePortConnsCountRequest();
				~DescribePortConnsCountRequest();

				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::vector<std::string> getInstanceIds()const;
				void setInstanceIds(const std::vector<std::string>& instanceIds);
				std::string getPort()const;
				void setPort(const std::string& port);

            private:
				long startTime_;
				std::string resourceGroupId_;
				std::string sourceIp_;
				long endTime_;
				std::vector<std::string> instanceIds_;
				std::string port_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTCONNSCOUNTREQUEST_H_