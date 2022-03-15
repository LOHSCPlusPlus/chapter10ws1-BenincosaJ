#include "Line.h"
#include <iostream>
using namespace std;

int main() {
  Point a(0, 3);
  Point b(3, 5);
  Line line1(a, b);
  line1.printLine();
  double length = line1.lineLength();
  cout << length;
    return 0;
}
