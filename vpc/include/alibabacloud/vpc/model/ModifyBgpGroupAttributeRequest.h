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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYBGPGROUPATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYBGPGROUPATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT ModifyBgpGroupAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyBgpGroupAttributeRequest();
				~ModifyBgpGroupAttributeRequest();

				std::string getAuthKey()const;
				void setAuthKey(const std::string& authKey);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getBgpGroupId()const;
				void setBgpGroupId(const std::string& bgpGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getPeerAsn()const;
				void setPeerAsn(long peerAsn);
				bool getIsFakeAsn()const;
				void setIsFakeAsn(bool isFakeAsn);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);
				long getLocalAsn()const;
				void setLocalAsn(long localAsn);

            private:
				std::string authKey_;
				long resourceOwnerId_;
				std::string clientToken_;
				std::string bgpGroupId_;
				std::string description_;
				long peerAsn_;
				bool isFakeAsn_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string name_;
				long localAsn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYBGPGROUPATTRIBUTEREQUEST_H_