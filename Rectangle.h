#include "Line.h"
class Rectangle{
    public:
      Rectangle();
      Rectangle(Line length, Line meheight);
      void printRectangle();
      double calcArea();

    private:
      Line length;
      Line height;
};
