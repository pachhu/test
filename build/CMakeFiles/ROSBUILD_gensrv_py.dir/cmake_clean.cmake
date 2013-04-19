FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/bandit_test/msg"
  "../src/bandit_test/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/bandit_test/srv/__init__.py"
  "../src/bandit_test/srv/_CalibrateJointAll.py"
  "../src/bandit_test/srv/_Params.py"
  "../src/bandit_test/srv/_CalibrateJoint.py"
  "../src/bandit_test/srv/_GetJointProperties.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
