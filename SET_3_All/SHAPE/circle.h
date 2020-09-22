#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"

class Circle : public IShape {
  double m_radius;

public:
  const double PI = 22.0/7.0;
  Circle(int r);
  double area();
  double circumference();
};

#endif
