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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONOCCUPANCYORDERREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONOCCUPANCYORDERREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreatePhysicalConnectionOccupancyOrderRequest : public RpcServiceRequest
			{

			public:
				CreatePhysicalConnectionOccupancyOrderRequest();
				~CreatePhysicalConnectionOccupancyOrderRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				int getPeriod()const;
				void setPeriod(int period);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPhysicalConnectionId()const;
				void setPhysicalConnectionId(const std::string& physicalConnectionId);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string regionId_;
				std::string instanceChargeType_;
				int period_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string physicalConnectionId_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONOCCUPANCYORDERREQUEST_H_