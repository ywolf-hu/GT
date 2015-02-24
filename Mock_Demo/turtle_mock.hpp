#include "gmock/gmock.h"
#include "turtle.hpp"

class MockTurtle : public Turtle {
 public:
  MOCK_METHOD1(SetX, int(int));
};
