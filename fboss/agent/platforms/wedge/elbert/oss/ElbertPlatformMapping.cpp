/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/wedge/elbert/ElbertPlatformMapping.h"

#include "fboss/agent/platforms/wedge/elbert/Elbert16QPimPlatformMapping.h"

namespace facebook::fboss {
ElbertPlatformMapping::ElbertPlatformMapping() {
  // current Elbert platform only supports 16Q pims
  auto Elbert16Q = std::make_unique<Elbert16QPimPlatformMapping>();
  for (uint8_t pimID = 2; pimID < 10; pimID++) {
    this->merge(Elbert16Q->getPimPlatformMapping(pimID));
  }
}
} // namespace facebook::fboss
