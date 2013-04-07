#!/usr/bin/env sh
# generated from catkin/cmake/templates/env.sh.in

if [ $# -eq 0 ] ; then
  /bin/echo "Entering environment at '/home/prashanth/groovy_workspace/sandbox/bandit_test/build/devel', type 'exit' to leave"
  . "/home/prashanth/groovy_workspace/sandbox/bandit_test/build/devel/setup.sh"
  "$SHELL" -i
  /bin/echo "Exiting environment at '/home/prashanth/groovy_workspace/sandbox/bandit_test/build/devel'"
else
  . "/home/prashanth/groovy_workspace/sandbox/bandit_test/build/devel/setup.sh"
  exec "$@"
fi
