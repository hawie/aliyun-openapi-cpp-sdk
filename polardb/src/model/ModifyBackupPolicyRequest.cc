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

#include <alibabacloud/polardb/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::Polardb::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyBackupPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest()
{}

long ModifyBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyBackupPolicyRequest::getDataLevel2BackupRetentionPeriod()const
{
	return dataLevel2BackupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setDataLevel2BackupRetentionPeriod(const std::string& dataLevel2BackupRetentionPeriod)
{
	dataLevel2BackupRetentionPeriod_ = dataLevel2BackupRetentionPeriod;
	setParameter("DataLevel2BackupRetentionPeriod", dataLevel2BackupRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

void ModifyBackupPolicyRequest::setPreferredBackupPeriod(const std::string& preferredBackupPeriod)
{
	preferredBackupPeriod_ = preferredBackupPeriod;
	setParameter("PreferredBackupPeriod", preferredBackupPeriod);
}

std::string ModifyBackupPolicyRequest::getDataLevel1BackupRetentionPeriod()const
{
	return dataLevel1BackupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setDataLevel1BackupRetentionPeriod(const std::string& dataLevel1BackupRetentionPeriod)
{
	dataLevel1BackupRetentionPeriod_ = dataLevel1BackupRetentionPeriod;
	setParameter("DataLevel1BackupRetentionPeriod", dataLevel1BackupRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getBackupRetentionPolicyOnClusterDeletion()const
{
	return backupRetentionPolicyOnClusterDeletion_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPolicyOnClusterDeletion(const std::string& backupRetentionPolicyOnClusterDeletion)
{
	backupRetentionPolicyOnClusterDeletion_ = backupRetentionPolicyOnClusterDeletion;
	setParameter("BackupRetentionPolicyOnClusterDeletion", backupRetentionPolicyOnClusterDeletion);
}

std::string ModifyBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyBackupPolicyRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyBackupPolicyRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyBackupPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyBackupPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyBackupPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBackupPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
	setParameter("PreferredBackupTime", preferredBackupTime);
}

std::string ModifyBackupPolicyRequest::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPeriod(const std::string& backupRetentionPeriod)
{
	backupRetentionPeriod_ = backupRetentionPeriod;
	setParameter("BackupRetentionPeriod", backupRetentionPeriod);
}

