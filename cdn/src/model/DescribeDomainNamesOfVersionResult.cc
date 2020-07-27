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

#include <alibabacloud/cdn/model/DescribeDomainNamesOfVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainNamesOfVersionResult::DescribeDomainNamesOfVersionResult() :
	ServiceResult()
{}

DescribeDomainNamesOfVersionResult::DescribeDomainNamesOfVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainNamesOfVersionResult::~DescribeDomainNamesOfVersionResult()
{}

void DescribeDomainNamesOfVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentsNode = value["Contents"]["content"];
	for (auto valueContentscontent : allContentsNode)
	{
		Content contentsObject;
		if(!valueContentscontent["DomainId"].isNull())
			contentsObject.domainId = valueContentscontent["DomainId"].asString();
		if(!valueContentscontent["DomainName"].isNull())
			contentsObject.domainName = valueContentscontent["DomainName"].asString();
		contents_.push_back(contentsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDomainNamesOfVersionResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDomainNamesOfVersionResult::Content> DescribeDomainNamesOfVersionResult::getContents()const
{
	return contents_;
}

