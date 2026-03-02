// Copyright 2025 Viam Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <cstdint>
#include <string>

namespace orbbec {

const std::string kColorSourceName = "color";
const std::string kColorMimeTypeJPEG = "image/jpeg";
const std::string kColorMimeTypePNG = "image/png";
const std::string kDepthSourceName = "depth";
const std::string kDepthMimeTypeViamDep = "image/vnd.viam.dep";
const std::string kPcdMimeType = "pointcloud/pcd";

// If the firmwareUrl is changed to a new version, also change the minFirmwareVer const.
constexpr char service_name[] = "viam_orbbec";

const float mmToMeterMultiple = 0.001;

// Time until a frame is considered stale, in microseconds (equal to 1 sec)
const uint64_t maxFrameAgeUs = 1e6;

// Log at warning level at most every 5 minutes
const uint64_t timestampWarningLogIntervalUs = 300e6;

// Max time difference between frames in a frameset to be considered simultaneous,
// in microseconds (equal to 2 ms)
const uint64_t maxFrameSetTimeDiffUs = 2000;

}  // namespace orbbec
