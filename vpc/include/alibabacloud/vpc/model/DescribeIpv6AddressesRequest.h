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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeIpv6AddressesRequest : public RpcServiceRequest
			{

			public:
				DescribeIpv6AddressesRequest();
				~DescribeIpv6AddressesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getIpv6InternetBandwidthId()const;
				void setIpv6InternetBandwidthId(const std::string& ipv6InternetBandwidthId);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAssociatedInstanceType()const;
				void setAssociatedInstanceType(const std::string& associatedInstanceType);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getIpv6AddressId()const;
				void setIpv6AddressId(const std::string& ipv6AddressId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getIpv6Address()const;
				void setIpv6Address(const std::string& ipv6Address);
				std::string getAssociatedInstanceId()const;
				void setAssociatedInstanceId(const std::string& associatedInstanceId);

            private:
				long resourceOwnerId_;
				std::string ipv6InternetBandwidthId_;
				std::string networkType_;
				int pageNumber_;
				std::string regionId_;
				std::string associatedInstanceType_;
				int pageSize_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string vSwitchId_;
				std::string ipv6AddressId_;
				std::string vpcId_;
				std::string name_;
				std::string ipv6Address_;
				std::string associatedInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_