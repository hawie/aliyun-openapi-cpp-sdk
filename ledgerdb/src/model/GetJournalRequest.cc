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

#include <alibabacloud/ledgerdb/model/GetJournalRequest.h>

using AlibabaCloud::Ledgerdb::Model::GetJournalRequest;

GetJournalRequest::GetJournalRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "GetJournal")
{
	setMethod(HttpRequest::Method::Get);
}

GetJournalRequest::~GetJournalRequest()
{}

long GetJournalRequest::getJournalId()const
{
	return journalId_;
}

void GetJournalRequest::setJournalId(long journalId)
{
	journalId_ = journalId;
	setParameter("JournalId", std::to_string(journalId));
}

std::string GetJournalRequest::getLedgerId()const
{
	return ledgerId_;
}

void GetJournalRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setParameter("LedgerId", ledgerId);
}

