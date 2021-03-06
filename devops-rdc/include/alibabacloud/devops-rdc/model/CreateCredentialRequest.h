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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATECREDENTIALREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATECREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT CreateCredentialRequest : public RpcServiceRequest
			{

			public:
				CreateCredentialRequest();
				~CreateCredentialRequest();

				std::string getType()const;
				void setType(const std::string& type);
				std::string getUserPk()const;
				void setUserPk(const std::string& userPk);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string type_;
				std::string userPk_;
				std::string orgId_;
				std::string password_;
				std::string name_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATECREDENTIALREQUEST_H_