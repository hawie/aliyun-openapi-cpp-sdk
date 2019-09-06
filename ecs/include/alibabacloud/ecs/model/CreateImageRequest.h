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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEIMAGEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CreateImageRequest : public RpcServiceRequest
			{
				struct DiskDeviceMapping
				{
					std::string snapshotId;
					int size;
					std::string diskType;
					std::string device;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				CreateImageRequest();
				~CreateImageRequest();

				std::vector<DiskDeviceMapping> getDiskDeviceMapping()const;
				void setDiskDeviceMapping(const std::vector<DiskDeviceMapping>& diskDeviceMapping);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getArchitecture()const;
				void setArchitecture(const std::string& architecture);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getImageVersion()const;
				void setImageVersion(const std::string& imageVersion);

            private:
				std::vector<DiskDeviceMapping> diskDeviceMapping_;
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string clientToken_;
				std::string description_;
				std::string platform_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string imageName_;
				std::vector<Tag> tag_;
				std::string architecture_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string instanceId_;
				std::string imageVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEIMAGEREQUEST_H_