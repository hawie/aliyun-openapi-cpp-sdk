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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYVIDEOPOSEJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYVIDEOPOSEJOBLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT QueryVideoPoseJobListResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string roleArn;
						std::string location;
					};
					struct OutputConfig
					{
						struct VideoFile
						{
							std::string bucket;
							std::string object;
							std::string roleArn;
							std::string location;
						};
						struct DataFile
						{
							std::string bucket;
							std::string object;
							std::string roleArn;
							std::string location;
						};
						DataFile dataFile;
						VideoFile videoFile;
					};
					struct Properties
					{
						struct Streams
						{
							struct VideoStream
							{
								struct NetworkCost
								{
									std::string avgBitrate;
									std::string preloadTime;
									std::string costBandwidth;
								};
								std::string codecTag;
								std::string codecTimeBase;
								std::string rotate;
								std::string sar;
								std::string fps;
								std::string startTime;
								std::string index;
								std::string duration;
								std::string lang;
								std::string pixFmt;
								NetworkCost networkCost;
								std::string codecName;
								std::string bitrate;
								std::string profile;
								std::string avgFPS;
								std::string timebase;
								std::string codecTagString;
								std::string hasBFrames;
								std::string dar;
								std::string codecLongName;
								std::string height;
								std::string level;
								std::string width;
								std::string numFrames;
							};
							struct AudioStream
							{
								std::string codecTag;
								std::string codecTimeBase;
								std::string channelLayout;
								std::string startTime;
								std::string index;
								std::string duration;
								std::string lang;
								std::string sampleFmt;
								std::string codecName;
								std::string samplerate;
								std::string bitrate;
								std::string channels;
								std::string timebase;
								std::string codecTagString;
								std::string codecLongName;
								std::string numFrames;
							};
							struct SubtitleStream
							{
								std::string codecTag;
								std::string timebase;
								std::string codecTagString;
								std::string codecTimeBase;
								std::string codecLongName;
								std::string startTime;
								std::string index;
								std::string duration;
								std::string lang;
								std::string codecName;
							};
							std::vector<VideoStream> videoStreamList;
							std::vector<SubtitleStream> subtitleStreamList;
							std::vector<AudioStream> audioStreamList;
						};
						struct Format
						{
							std::string numPrograms;
							std::string size;
							std::string formatLongName;
							std::string startTime;
							std::string numStreams;
							std::string formatName;
							std::string duration;
							std::string bitrate;
						};
						Format format;
						std::string fps;
						std::string height;
						std::string duration;
						std::string fileFormat;
						std::string width;
						std::string bitrate;
						Streams streams;
						std::string fileSize;
					};
					struct MNSMessageResult
					{
						std::string errorCode;
						std::string errorMessage;
						std::string messageId;
					};
					Input input;
					OutputConfig outputConfig;
					std::string userData;
					std::string state;
					MNSMessageResult mNSMessageResult;
					std::string pipelineId;
					Properties properties;
					std::string jobId;
				};


				QueryVideoPoseJobListResult();
				explicit QueryVideoPoseJobListResult(const std::string &payload);
				~QueryVideoPoseJobListResult();
				std::vector<std::string> getNonExistJobIds()const;
				std::vector<Job> getJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistJobIds_;
				std::vector<Job> jobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYVIDEOPOSEJOBLISTRESULT_H_