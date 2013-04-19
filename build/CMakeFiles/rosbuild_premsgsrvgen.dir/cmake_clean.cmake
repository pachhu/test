FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/bandit_test/msg"
  "../src/bandit_test/srv"
  "CMakeFiles/rosbuild_premsgsrvgen"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/rosbuild_premsgsrvgen.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
