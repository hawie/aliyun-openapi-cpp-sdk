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

#include <alibabacloud/ddoscoo/model/DescribeDomainViewSourceProvincesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainViewSourceProvincesResult::DescribeDomainViewSourceProvincesResult() :
	ServiceResult()
{}

DescribeDomainViewSourceProvincesResult::DescribeDomainViewSourceProvincesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainViewSourceProvincesResult::~DescribeDomainViewSourceProvincesResult()
{}

void DescribeDomainViewSourceProvincesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSourceProvincesNode = value["SourceProvinces"]["Province"];
	for (auto valueSourceProvincesProvince : allSourceProvincesNode)
	{
		Province sourceProvincesObject;
		if(!valueSourceProvincesProvince["Count"].isNull())
			sourceProvincesObject.count = std::stol(valueSourceProvincesProvince["Count"].asString());
		if(!valueSourceProvincesProvince["ProvinceId"].isNull())
			sourceProvincesObject.provinceId = valueSourceProvincesProvince["ProvinceId"].asString();
		sourceProvinces_.push_back(sourceProvincesObject);
	}

}

std::vector<DescribeDomainViewSourceProvincesResult::Province> DescribeDomainViewSourceProvincesResult::getSourceProvinces()const
{
	return sourceProvinces_;
}

