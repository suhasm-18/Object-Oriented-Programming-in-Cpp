#include<iostream>
using namespace std;

class base{
    public:
    int x;
    int show(){
        cout<< x;
    }
};

    class derived : public base {
        public:
        int y;
        void display(){
        cout <<x <<" "<< y;
    }
};

int main(){
    base b;
    b.x = 10;
    b.show();

    derived d;
    d.x=15;
    d.show();
    d.y = 45;
    d.display();
    return 0;
}
