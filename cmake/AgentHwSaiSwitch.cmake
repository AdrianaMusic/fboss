# CMake to build libraries and binaries in fboss/agent/hw/sai/switch

# In general, libraries and binaries in fboss/foo/bar are built by
# cmake/FooBar.cmake

set(SAI_SWITCH_SRC
  fboss/agent/hw/sai/switch/ConcurrentIndices.cpp
  fboss/agent/hw/sai/switch/SaiAclTableGroupManager.cpp
  fboss/agent/hw/sai/switch/SaiAclTableManager.cpp
  fboss/agent/hw/sai/switch/SaiBridgeManager.cpp
  fboss/agent/hw/sai/switch/SaiBufferManager.cpp
  fboss/agent/hw/sai/switch/SaiDebugCounterManager.cpp
  fboss/agent/hw/sai/switch/SaiFdbManager.cpp
  fboss/agent/hw/sai/switch/SaiHashManager.cpp
  fboss/agent/hw/sai/switch/SaiHostifManager.cpp
  fboss/agent/hw/sai/switch/SaiInSegEntryManager.cpp
  fboss/agent/hw/sai/switch/SaiManagerTable.cpp
  fboss/agent/hw/sai/switch/SaiMirrorManager.cpp
  fboss/agent/hw/sai/switch/SaiNeighborManager.cpp
  fboss/agent/hw/sai/switch/SaiNextHopManager.cpp
  fboss/agent/hw/sai/switch/SaiNextHopGroupManager.cpp
  fboss/agent/hw/sai/switch/SaiPortManager.cpp
  fboss/agent/hw/sai/switch/SaiPortUtils.cpp
  fboss/agent/hw/sai/switch/SaiQosMapManager.cpp
  fboss/agent/hw/sai/switch/SaiQueueManager.cpp
  fboss/agent/hw/sai/switch/SaiRouteManager.cpp
  fboss/agent/hw/sai/switch/SaiRouterInterfaceManager.cpp
  fboss/agent/hw/sai/switch/SaiRxPacket.cpp
  fboss/agent/hw/sai/switch/SaiSamplePacketManager.cpp
  fboss/agent/hw/sai/switch/SaiSchedulerManager.cpp
  fboss/agent/hw/sai/switch/SaiSwitch.cpp
  fboss/agent/hw/sai/switch/SaiSwitchManager.cpp
  fboss/agent/hw/sai/switch/SaiVlanManager.cpp
  fboss/agent/hw/sai/switch/SaiVirtualRouterManager.cpp
  fboss/agent/hw/sai/switch/SaiWredManager.cpp
)

if (SAI_TAJO_IMPL)
  list(APPEND SAI_SWITCH_SRC
    fboss/agent/hw/sai/switch/oss/SaiBufferManager.cpp
    fboss/agent/hw/sai/switch/tajo/SaiSwitch.cpp
    fboss/agent/hw/sai/switch/tajo/SaiTamManager.cpp
    fboss/agent/hw/sai/switch/oss/SaiPortManager.cpp
  )
else()
  list(APPEND SAI_SWITCH_SRC
    fboss/agent/hw/sai/switch/oss/SaiBufferManager.cpp
    fboss/agent/hw/sai/switch/oss/SaiSwitch.cpp
    fboss/agent/hw/sai/switch/oss/SaiTamManager.cpp
    fboss/agent/hw/sai/switch/oss/SaiPortManager.cpp
  )
endif()

add_library(sai_switch
  "${SAI_SWITCH_SRC}"
)

target_link_libraries(sai_switch
  # implementation for sai_api would be provided by lib that links later. Thus,
  # allow unresolved-symbols here.
  -Wl,--unresolved-symbols=ignore-all
  core
  hw_switch_stats
  hw_fb303_stats
  hw_cpu_fb303_stats
  hw_port_fb303_stats
  hw_resource_stats_publisher
  hw_switch_warmboot_helper
  sai_api
  sai_store
  ref_map
  Folly::folly
  -Wl,--unresolved-symbols=report-all
)

set_target_properties(sai_switch PROPERTIES COMPILE_FLAGS
  "-DSAI_VER_MAJOR=${SAI_VER_MAJOR} \
  -DSAI_VER_MINOR=${SAI_VER_MINOR}  \
  -DSAI_VER_RELEASE=${SAI_VER_RELEASE}"
)

add_library(thrift_handler
  fboss/agent/hw/sai/switch/SaiHandler.cpp
)

target_link_libraries(thrift_handler
  diag_shell
  handler
  sai_ctrl_cpp2
)

set_target_properties(thrift_handler PROPERTIES COMPILE_FLAGS
  "-DSAI_VER_MAJOR=${SAI_VER_MAJOR} \
  -DSAI_VER_MINOR=${SAI_VER_MINOR}  \
  -DSAI_VER_RELEASE=${SAI_VER_RELEASE}"
)
