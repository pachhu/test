FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/bandit_test/msg"
  "../src/bandit_test/srv"
  "CMakeFiles/ROSBUILD_gensrv_cpp"
  "../srv_gen/cpp/include/bandit_test/CalibrateJointAll.h"
  "../srv_gen/cpp/include/bandit_test/Params.h"
  "../srv_gen/cpp/include/bandit_test/CalibrateJoint.h"
  "../srv_gen/cpp/include/bandit_test/GetJointProperties.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
