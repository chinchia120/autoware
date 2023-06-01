# Install script for directory: /home/point001/autoware.ai/src/autoware/messages/autoware_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/point001/autoware.ai/install/autoware_msgs")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_msgs/msg" TYPE FILE FILES
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/AccelCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/AdjustXY.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/BrakeCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/Centroids.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/CloudCluster.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/CloudClusterArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ColorSet.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ControlCommand.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ControlCommandStamped.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/DTLane.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/DetectedObject.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/DetectedObjectArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ExtractedPosition.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/Gear.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/GeometricRectangle.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ICPStat.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ImageLaneObjects.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ImageObj.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ImageObjRanged.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ImageObjTracked.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ImageObjects.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ImageRect.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ImageRectRanged.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/IndicatorCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/LampCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/Lane.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/LaneArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/NDTStat.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ObjLabel.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ObjPose.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/PointsImage.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ProjectionMatrix.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/RemoteCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ScanImage.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/Signals.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/State.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/StateCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/SteerCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/SyncTimeDiff.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/SyncTimeMonitor.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/TrafficLight.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/TrafficLightResult.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/TrafficLightResultArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/TunedResult.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/ValueSet.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/VehicleCmd.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/VehicleLocation.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/VehicleStatus.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/VscanTracked.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/VscanTrackedArray.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/Waypoint.msg"
    "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/msg/WaypointState.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_msgs/srv" TYPE FILE FILES "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/srv/RecognizeLightState.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_msgs/cmake" TYPE FILE FILES "/home/point001/autoware.ai/build/autoware_msgs/catkin_generated/installspace/autoware_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/autoware_msgs/devel/include/autoware_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/autoware_msgs/devel/share/roseus/ros/autoware_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/autoware_msgs/devel/share/common-lisp/ros/autoware_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/autoware_msgs/devel/share/gennodejs/ros/autoware_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/point001/autoware.ai/build/autoware_msgs/devel/lib/python2.7/dist-packages/autoware_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/point001/autoware.ai/build/autoware_msgs/devel/lib/python2.7/dist-packages/autoware_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/point001/autoware.ai/build/autoware_msgs/catkin_generated/installspace/autoware_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_msgs/cmake" TYPE FILE FILES "/home/point001/autoware.ai/build/autoware_msgs/catkin_generated/installspace/autoware_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_msgs/cmake" TYPE FILE FILES
    "/home/point001/autoware.ai/build/autoware_msgs/catkin_generated/installspace/autoware_msgsConfig.cmake"
    "/home/point001/autoware.ai/build/autoware_msgs/catkin_generated/installspace/autoware_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_msgs" TYPE FILE FILES "/home/point001/autoware.ai/src/autoware/messages/autoware_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/point001/autoware.ai/build/autoware_msgs/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/point001/autoware.ai/build/autoware_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
