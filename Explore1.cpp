#include <iostream>
#include "Point.h"
using namespace std;


int main() {
    // First instance of Point, named a - starts at default 0.0, 0.0
    Point a;
    // Remove the comment below
    // a.x = b.x;
    // Why doesn't it work?
    // x and y are private variables 

    // First instance of Point, named a - starts at default 0.0, 0.0
  Point b(4.5, 7.8);

    cout << "Point a: ";
    a.print();
    cout << "Point b: ";
    b.print();

    //a.setX(53);
   // a.setY(51);
    cout << "Point a: "; 
    a.print();
  
    cout << "Point a:";
    a.print();
    cout << "Point b:";
    b.print(); 
    cout << a.calcDistance(b);
     //Look! the equal operator still works!
     a = b;
    cout << "Point a:";
    a.print();
  
    
    //a.setPoints(33.9, 1072.8);
    //cout << "Point a:";
    //a.print();

    return 0;
}


