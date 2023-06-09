# Install script for directory: /home/point001/autoware.ai/src/autoware/messages/vector_map_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/point001/autoware.ai/install/vector_map_msgs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vector_map_msgs/msg" TYPE FILE FILES
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Area.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/AreaArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Box.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/BoxArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/CrossRoad.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/CrossRoadArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/CrossWalk.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/CrossWalkArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Curb.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/CurbArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/CurveMirror.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/CurveMirrorArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/DTLane.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/DTLaneArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/DriveOnPortion.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/DriveOnPortionArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Fence.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/FenceArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/GuardRail.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/GuardRailArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Gutter.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/GutterArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Lane.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/LaneArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Line.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/LineArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Node.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/NodeArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Point.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/PointArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Pole.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/PoleArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RailCrossing.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RailCrossingArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadEdge.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadEdgeArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadMark.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadMarkArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadPole.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadPoleArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadSign.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/RoadSignArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/SideStrip.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/SideStripArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/SideWalk.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/SideWalkArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Signal.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/SignalArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/StopLine.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/StopLineArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/StreetLight.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/StreetLightArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/UtilityPole.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/UtilityPoleArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Vector.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/VectorArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/Wall.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/WallArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/WayArea.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/WayAreaArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/WhiteLine.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/WhiteLineArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/ZebraZone.msg"
    "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/msg/ZebraZoneArray.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vector_map_msgs/cmake" TYPE FILE FILES "/home/point001/autoware.ai/build/vector_map_msgs/catkin_generated/installspace/vector_map_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/vector_map_msgs/devel/include/vector_map_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/vector_map_msgs/devel/share/roseus/ros/vector_map_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/vector_map_msgs/devel/share/common-lisp/ros/vector_map_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/vector_map_msgs/devel/share/gennodejs/ros/vector_map_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/point001/autoware.ai/build/vector_map_msgs/devel/lib/python2.7/dist-packages/vector_map_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/vector_map_msgs/devel/lib/python2.7/dist-packages/vector_map_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/point001/autoware.ai/build/vector_map_msgs/catkin_generated/installspace/vector_map_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vector_map_msgs/cmake" TYPE FILE FILES "/home/point001/autoware.ai/build/vector_map_msgs/catkin_generated/installspace/vector_map_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vector_map_msgs/cmake" TYPE FILE FILES
    "/home/point001/autoware.ai/build/vector_map_msgs/catkin_generated/installspace/vector_map_msgsConfig.cmake"
    "/home/point001/autoware.ai/build/vector_map_msgs/catkin_generated/installspace/vector_map_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vector_map_msgs" TYPE FILE FILES "/home/point001/autoware.ai/src/autoware/messages/vector_map_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/point001/autoware.ai/build/vector_map_msgs/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/point001/autoware.ai/build/vector_map_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
