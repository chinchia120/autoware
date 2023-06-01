# CMake generated Testfile for 
# Source directory: /home/point001/autoware.ai/src/autoware/common/gnss
# Build directory: /home/point001/autoware.ai/build/gnss
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_gnss_roslint_package "/home/point001/autoware.ai/build/gnss/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/point001/autoware.ai/build/gnss/test_results/gnss/roslint-gnss.xml" "--working-dir" "/home/point001/autoware.ai/build/gnss" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/point001/autoware.ai/build/gnss/test_results/gnss/roslint-gnss.xml make roslint_gnss")
add_test(_ctest_gnss_rostest_test_test_gnss.test "/home/point001/autoware.ai/build/gnss/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/point001/autoware.ai/build/gnss/test_results/gnss/rostest-test_test_gnss.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/point001/autoware.ai/src/autoware/common/gnss --package=gnss --results-filename test_test_gnss.xml --results-base-dir \"/home/point001/autoware.ai/build/gnss/test_results\" /home/point001/autoware.ai/src/autoware/common/gnss/test/test_gnss.test ")
subdirs("gtest")
