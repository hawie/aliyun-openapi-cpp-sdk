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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmAccessStrategyAvailableConfigResult : public ServiceResult
			{
			public:
				struct Ipv4AddrPool
				{
					std::string id;
					std::string name;
					int addrCount;
				};
				struct Line
				{
					std::string groupName;
					std::string groupCode;
					std::string fatherCode;
					std::string lineCode;
					std::string lineName;
				};
				struct Ipv6AddrPool
				{
					std::string id;
					std::string name;
					int addrCount;
				};
				struct DomainAddrPool
				{
					std::string id;
					std::string name;
					int addrCount;
				};


				DescribeDnsGtmAccessStrategyAvailableConfigResult();
				explicit DescribeDnsGtmAccessStrategyAvailableConfigResult(const std::string &payload);
				~DescribeDnsGtmAccessStrategyAvailableConfigResult();
				std::vector<Ipv4AddrPool> getIpv4AddrPools()const;
				std::vector<DomainAddrPool> getDomainAddrPools()const;
				std::vector<Ipv6AddrPool> getIpv6AddrPools()const;
				std::vector<Line> getLines()const;
				bool getSuggestSetDefaultLine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Ipv4AddrPool> ipv4AddrPools_;
				std::vector<DomainAddrPool> domainAddrPools_;
				std::vector<Ipv6AddrPool> ipv6AddrPools_;
				std::vector<Line> lines_;
				bool suggestSetDefaultLine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESULT_H_