//#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "turtle_mock.hpp"
#include "Painter.hpp"

using ::testing::Return;

TEST(Paintertest, anytest) {
  MockTurtle turtle;
  EXPECT_CALL(turtle, SetX(1))
  .WillOnce(Return(2));

  Painter painter(&turtle);
  EXPECT_EQ(0, painter.draw());
}
