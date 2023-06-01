# -*- coding: utf-8 -*-
from __future__ import print_function

import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/melodic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/melodic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in '/home/point001/autoware.ai/install/lanelet2_extension;/home/point001/autoware.ai/install/lanelet2_validation;/home/point001/autoware.ai/install/lanelet2_routing;/home/point001/autoware.ai/install/lanelet2_projection;/home/point001/autoware.ai/install/lanelet2_traffic_rules;/home/point001/autoware.ai/install/lanelet2_maps;/home/point001/autoware.ai/install/lanelet2_io;/home/point001/autoware.ai/install/vector_map;/home/point001/autoware.ai/install/lanelet2_core;/home/point001/autoware.ai/install/amathutils_lib;/home/point001/autoware.ai/install/vector_map_msgs;/home/point001/autoware.ai/install/autoware_msgs;/home/point001/autoware.ai/install/autoware_lanelet2_msgs;/home/point001/autoware.ai/install/autoware_build_flags;/opt/ros/melodic'.split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/point001/autoware.ai/build/map_file/devel/env.sh')

output_filename = '/home/point001/autoware.ai/build/map_file/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    # print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
