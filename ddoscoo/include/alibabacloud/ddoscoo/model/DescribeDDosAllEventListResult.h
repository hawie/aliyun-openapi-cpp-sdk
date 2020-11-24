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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDDOSALLEVENTLISTRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDDOSALLEVENTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDDosAllEventListResult : public ServiceResult
			{
			public:
				struct AttackEvent
				{
					long pps;
					long endTime;
					std::string eventType;
					std::string port;
					std::string ip;
					long startTime;
					long mbps;
				};


				DescribeDDosAllEventListResult();
				explicit DescribeDDosAllEventListResult(const std::string &payload);
				~DescribeDDosAllEventListResult();
				long getTotal()const;
				std::vector<AttackEvent> getAttackEvents()const;

			protected:
				void parse(const std::string &payload);
			private:
				long total_;
				std::vector<AttackEvent> attackEvents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDDOSALLEVENTLISTRESULT_H_