/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include "fboss/agent/platforms/sai/SaiPlatform.h"
namespace facebook {
namespace fboss {

class SaiBcmPlatform : public SaiPlatform {
 public:
  explicit SaiBcmPlatform(std::unique_ptr<PlatformProductInfo> productInfo)
      : SaiPlatform(std::move(productInfo)) {}
  sai_service_method_table_t* getServiceMethodTable() const override;
  std::vector<PortID> masterLogicalPortIds() const override {
    // TODO
    return {};
  }
};

} // namespace fboss
} // namespace facebook
