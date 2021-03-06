/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
// Copyright 2004-present Facebook.  All rights reserved.
#include "Route.h"

#include "fboss/agent/Constants.h"
#include "fboss/agent/state/RouteTypes.h"

namespace facebook::fboss {

template <typename AddrT>
bool RibRoute<AddrT>::operator==(const RibRoute& rf) const {
  return fields_ == rf.fields_;
}

template <typename AddrT>
RibRoute<AddrT> RibRoute<AddrT>::fromFollyDynamic(
    const folly::dynamic& routeJson) {
  RibRoute route(Prefix::fromFollyDynamic(routeJson[kPrefix]));
  route.fields_ = RouteFields<AddrT>::fromFollyDynamic(routeJson);
  CHECK(!route.hasNoEntry());
  return route;
}

template <typename AddrT>
bool RibRoute<AddrT>::isSame(const RibRoute<AddrT>* rt) const {
  return *this == *rt;
}

template class RibRoute<folly::IPAddressV4>;
template class RibRoute<folly::IPAddressV6>;

} // namespace facebook::fboss
