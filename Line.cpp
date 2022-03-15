#include "Line.h"
#include <iostream>
#include <math.h>
using namespace std;

Line::Line() {
    
}
Line::Line(Point s, Point e) {
  start = s;
  end = e;
}

void Line::printLine() {
  cout << " Start";
  start.printPoint();
  cout << " End";
  end.printPoint();
  cout << endl;
}

double Line::lineLength(){
  double length = start.calcDistance(end);
  return length;
}


