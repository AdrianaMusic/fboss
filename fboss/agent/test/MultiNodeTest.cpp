/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include <folly/String.h>
#include <gflags/gflags.h>

#include "common/network/NetworkUtil.h"
#include "fboss/agent/AgentConfig.h"
#include "fboss/agent/SwSwitch.h"
#include "fboss/agent/hw/test/ConfigFactory.h"
#include "fboss/agent/platforms/wedge/WedgePlatformInit.h"
#include "fboss/agent/state/Port.h"
#include "fboss/agent/state/SwitchState.h"
#include "fboss/agent/test/MultiNodeTest.h"

using namespace facebook::fboss;
using namespace apache::thrift;

DEFINE_string(
    multiNodeTestRemoteSwitchName,
    "",
    "multinode test remote switch name");

namespace {
int argCount{0};
char** argVec{nullptr};
} // unnamed namespace

namespace facebook::fboss {

void MultiNodeTest::TearDown() {
  // TODO - handle both warmboot and non warmboot exits
  stopAgent();
}

// Construct a config file by combining the hw config passed
// and sw configs from test utility and set config flag to
// point to the test config
void MultiNodeTest::setupConfigFlag() {
  cfg::AgentConfig testConfig;
  *testConfig.sw_ref() = initialConfig();
  const auto& baseConfig = platform()->config();
  *testConfig.platform_ref() = *baseConfig->thrift.platform_ref();
  auto newcfg = AgentConfig(
      testConfig,
      apache::thrift::SimpleJSONSerializer::serialize<std::string>(testConfig));
  auto testConfigDir = platform()->getPersistentStateDir() + "/multinode_test/";
  auto newCfgFile = testConfigDir + "/agent_multinode_test.conf";
  utilCreateDir(testConfigDir);
  newcfg.dumpConfig(newCfgFile);
  FLAGS_config = newCfgFile;
  // reload config so that test config is loaded
  platform()->reloadConfig();
}

void MultiNodeTest::SetUp() {
  AgentInitializer::createSwitch(
      argCount,
      argVec,
      (HwSwitch::FeaturesDesired::PACKET_RX_DESIRED |
       HwSwitch::FeaturesDesired::LINKSCAN_DESIRED),
      initWedgePlatform);
  setupConfigFlag();
  asyncInitThread_.reset(
      new std::thread([this] { AgentInitializer::initAgent(); }));
  asyncInitThread_->detach();
  initializer()->waitForInitDone();
  XLOG(DBG0) << "Multinode setup ready";
}

std::unique_ptr<FbossCtrlAsyncClient> MultiNodeTest::getRemoteThriftClient() {
  folly::EventBase* eb = folly::EventBaseManager::get()->getEventBase();
  auto remoteSwitchIp = facebook::network::NetworkUtil::getHostByName(
      FLAGS_multiNodeTestRemoteSwitchName);
  folly::SocketAddress agent(remoteSwitchIp, 5909);
  auto socket = folly::AsyncSocket::newSocket(eb, agent);
  auto chan = HeaderClientChannel::newChannel(std::move(socket));
  return std::make_unique<FbossCtrlAsyncClient>(std::move(chan));
}

void MultiNodeTest::setPortStatus(PortID portId, bool up) {
  auto configFnLinkDown = [=](const std::shared_ptr<SwitchState>& state) {
    auto newState = state->clone();
    auto ports = newState->getPorts()->clone();
    auto port = ports->getPort(portId)->clone();
    port->setAdminState(
        up ? cfg::PortState::ENABLED : cfg::PortState::DISABLED);
    ports->updateNode(port);
    newState->resetPorts(ports);
    return newState;
  };
  sw()->updateStateBlocking("set port state", configFnLinkDown);
}

} // namespace facebook::fboss

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  argCount = argc;
  argVec = argv;
  return RUN_ALL_TESTS();
}
