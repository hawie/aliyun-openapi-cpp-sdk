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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_ALTERDATABASEREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_ALTERDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT AlterDatabaseRequest : public RpcServiceRequest
			{

			public:
				AlterDatabaseRequest();
				~AlterDatabaseRequest();

				std::string getOldDbName()const;
				void setOldDbName(const std::string& oldDbName);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getLocationUri()const;
				void setLocationUri(const std::string& locationUri);
				std::string getParameters()const;
				void setParameters(const std::string& parameters);

            private:
				std::string oldDbName_;
				std::string name_;
				std::string description_;
				std::string locationUri_;
				std::string parameters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_ALTERDATABASEREQUEST_H_