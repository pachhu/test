FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/bandit_test/msg"
  "../src/bandit_test/srv"
  "CMakeFiles/link.dir/src/link.cpp.o"
  "../bin/link.pdb"
  "../bin/link"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/link.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
