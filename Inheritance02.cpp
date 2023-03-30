#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// base class
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0) {
         width = a;
         height = b;
      }
      virtual int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

// derived class
class Rectangle: public Shape {
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area () {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};

// derived class
class Triangle: public Shape {
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area () {
         cout << "Triangle class area :" <<endl;
         return (width * height / 2);
      }
};

int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;

   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;

   // call triangle area.
   shape->area();

   return 0;
}


