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

#ifndef ALIBABACLOUD_DTS_MODEL_CREATESYNCHRONIZATIONJOBREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CREATESYNCHRONIZATIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT CreateSynchronizationJobRequest : public RpcServiceRequest
			{

			public:
				CreateSynchronizationJobRequest();
				~CreateSynchronizationJobRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getSourceEndpointInstanceType()const;
				void setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				std::string getSynchronizationJobClass()const;
				void setSynchronizationJobClass(const std::string& synchronizationJobClass);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getDestRegion()const;
				void setDestRegion(const std::string& destRegion);
				std::string getTopology()const;
				void setTopology(const std::string& topology);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				int getUsedTime()const;
				void setUsedTime(int usedTime);
				int getDBInstanceCount()const;
				void setDBInstanceCount(int dBInstanceCount);
				std::string getSourceRegion()const;
				void setSourceRegion(const std::string& sourceRegion);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getDestinationEndpointInstanceType()const;
				void setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType);

            private:
				std::string clientToken_;
				std::string networkType_;
				std::string sourceEndpointInstanceType_;
				std::string accessKeyId_;
				std::string accountId_;
				std::string synchronizationJobClass_;
				std::string period_;
				std::string destRegion_;
				std::string topology_;
				std::string ownerId_;
				int usedTime_;
				int dBInstanceCount_;
				std::string sourceRegion_;
				std::string payType_;
				std::string destinationEndpointInstanceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_CREATESYNCHRONIZATIONJOBREQUEST_H_