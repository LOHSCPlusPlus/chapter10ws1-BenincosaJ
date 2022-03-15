#include "Rectangle.h"
#include <iostream>
#include <math.h>
using namespace std;

Rectangle::Rectangle() { 
}

Rectangle::Rectangle(Line l, Line h) {
  length = l;
  height = h;
}

void Rectangle::printRectangle() {
  length.printLine();
  height.printLine();
}

double Rectangle::calcArea(){
  
  double area = height.lineLength() * length.lineLength();
  return area;
  
}

