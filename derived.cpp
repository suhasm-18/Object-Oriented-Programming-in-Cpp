#include<iostream>
using namespace std;

class  Shape{
    public:
    int width, height;

    Shape(int a=0, int b=0){
        width = a;
        height = b;
    }

    virtual int area(){
        cout<<"parent class"<<"endl";
        return 0;
    }
};

//derived class

class Rectangle: public Shape{
    public:
    Rectangle(int a=0 ,int b=0): Shape( a,b){}
    int area(){
        cout<<"derived class";
        return width*height;
    }
};
class Triangle: public Shape{
    public:
    Triangle(int a=0 ,int b=0): Shape( a,b){}
    int area(){
        cout<<"derived class";
        return (width*height)/2;
    }
};

int main(){
    Shape *shape;
    Rectangle rec(10,5);
    Triangle tri(10,5);

    shape = &rec;
    cout << shape->area();
    shape = &tri;
    cout << shape->area();
    return 0;
}
