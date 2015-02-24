#include "turtle.hpp"

class Painter{
public:
  Painter(Turtle* turtle);
  ~Painter(){}
  int draw();
private:
  Turtle* m_turtle;
};
