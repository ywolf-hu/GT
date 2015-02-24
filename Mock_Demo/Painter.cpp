#include "Painter.hpp"

Painter::Painter(Turtle* turtle)
{
  m_turtle = turtle;
}

int Painter::draw()
{
  if(1 == m_turtle->SetX(1)){
    return 1;
  }
  else {
    return 0;
  }
}
