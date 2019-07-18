#include <gtest/gtest.h>

#  Locates and runs all unit tests associated with the project.
int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
