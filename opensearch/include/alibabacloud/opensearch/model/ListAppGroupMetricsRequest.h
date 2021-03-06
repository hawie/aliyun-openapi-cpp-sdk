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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_LISTAPPGROUPMETRICSREQUEST_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_LISTAPPGROUPMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/opensearch/OpenSearchExport.h>

namespace AlibabaCloud
{
	namespace OpenSearch
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENSEARCH_EXPORT ListAppGroupMetricsRequest : public RoaServiceRequest
			{

			public:
				ListAppGroupMetricsRequest();
				~ListAppGroupMetricsRequest();

				std::string getMetricType()const;
				void setMetricType(const std::string& metricType);
				std::string getIndexes()const;
				void setIndexes(const std::string& indexes);
				int getEndTime()const;
				void setEndTime(int endTime);
				int getStartTime()const;
				void setStartTime(int startTime);
				std::string getAppGroupIdentity()const;
				void setAppGroupIdentity(const std::string& appGroupIdentity);

            private:
				std::string metricType_;
				std::string indexes_;
				int endTime_;
				int startTime_;
				std::string appGroupIdentity_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_LISTAPPGROUPMETRICSREQUEST_H_