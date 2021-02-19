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

#include <folly/IPAddress.h>
#include "fboss/agent/if/gen-cpp2/ctrl_types.h"
#include "fboss/agent/rib/RoutingInformationBase.h"
#include "fboss/agent/state/RouteNextHopEntry.h"
#include "fboss/agent/types.h"

namespace facebook::fboss {
class SwitchState;

/*
 * Wrapper class to handle route updates and programming across both
 * stand alone RIB and legacy setups
 */
class RouteUpdateWrapper {
  struct AddDelRoutes {
    std::vector<UnicastRoute> toAdd;
    std::vector<IpPrefix> toDel;
  };

 public:
  virtual ~RouteUpdateWrapper() = default;
  using UpdateStatistics = rib::RoutingInformationBase::UpdateStatistics;
  using FibUpdateFunction = rib::RoutingInformationBase::FibUpdateFunction;
  void addRoute(
      RouterID id,
      const folly::IPAddress& network,
      uint8_t mask,
      ClientID clientId,
      RouteNextHopEntry entry);

  void delRoute(
      RouterID id,
      const folly::IPAddress& network,
      uint8_t mask,
      ClientID clientId);
  void program();
  void programMinAlpmState();

 private:
  virtual rib::RoutingInformationBase* getRib() = 0;
  virtual void programLegacyRib() = 0;
  void programStandAloneRib();
  virtual void updateStats(const UpdateStatistics& stats) = 0;
  virtual AdminDistance clientIdToAdminDistance(ClientID clientID) const = 0;

 protected:
  std::pair<std::shared_ptr<SwitchState>, UpdateStatistics>
  programLegacyRibHelper(const std::shared_ptr<SwitchState>& in) const;
  RouteUpdateWrapper(
      bool isStandaloneRibEnabled,
      std::optional<FibUpdateFunction> fibUpdateFn,
      void* fibUpdateCookie)
      : isStandaloneRibEnabled_(isStandaloneRibEnabled),
        fibUpdateFn_(fibUpdateFn),
        fibUpdateCookie_(fibUpdateCookie) {}

  std::unordered_map<std::pair<RouterID, ClientID>, AddDelRoutes>
      ribRoutesToAddDel_;
  bool isStandaloneRibEnabled_{false};
  std::optional<FibUpdateFunction> fibUpdateFn_;
  void* fibUpdateCookie_{nullptr};
};
} // namespace facebook::fboss
