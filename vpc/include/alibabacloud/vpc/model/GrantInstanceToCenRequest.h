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

#ifndef ALIBABACLOUD_VPC_MODEL_GRANTINSTANCETOCENREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_GRANTINSTANCETOCENREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT GrantInstanceToCenRequest : public RpcServiceRequest
			{

			public:
				GrantInstanceToCenRequest();
				~GrantInstanceToCenRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCenId()const;
				void setCenId(const std::string& cenId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				long getCenOwnerId()const;
				void setCenOwnerId(long cenOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				long resourceOwnerId_;
				std::string cenId_;
				std::string clientToken_;
				long cenOwnerId_;
				std::string regionId_;
				std::string instanceType_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_GRANTINSTANCETOCENREQUEST_H_