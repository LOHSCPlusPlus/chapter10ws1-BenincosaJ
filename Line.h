#include "Point.h"
class Line{
    public:
      Line();
      Line(Point start, Point end);
      void printLine();
      double lineLength();

    private:
      Point start;
      Point end;
};

