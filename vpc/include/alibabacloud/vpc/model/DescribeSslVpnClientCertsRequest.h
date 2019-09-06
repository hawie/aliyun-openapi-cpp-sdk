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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTSREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeSslVpnClientCertsRequest : public RpcServiceRequest
			{

			public:
				DescribeSslVpnClientCertsRequest();
				~DescribeSslVpnClientCertsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getSslVpnServerId()const;
				void setSslVpnServerId(const std::string& sslVpnServerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSslVpnClientCertId()const;
				void setSslVpnClientCertId(const std::string& sslVpnClientCertId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				int pageNumber_;
				std::string sslVpnServerId_;
				std::string regionId_;
				int pageSize_;
				std::string sslVpnClientCertId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTSREQUEST_H_