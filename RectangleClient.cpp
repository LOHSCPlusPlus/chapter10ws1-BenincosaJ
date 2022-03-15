#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
  Point a(0, 3);
  Point b(3, 5);
  Point c(2, 1);
  Point d(4,3);
  Line line1(a, b);
  Line line2(c, d);
  Rectangle rectangle1(line1, line2);
  rectangle1.printRectangle();
  double area = rectangle1.calcArea();
  cout << area;
  return 0;
}
