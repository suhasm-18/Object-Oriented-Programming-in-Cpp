#include<iostream>
using namespace std;

class Your;
class My
{
private:int a;
protected: int b;
public: int c;
 friend Your;
};

class Shape{
    public:
    virtual void draw(){
        cout<<"Draw a shape" << endl;
    }
};
class Circle : public Shape{
    public:
    void draw(){
        cout<<"Draw circle"<< endl;
    }
};
class Square : public Shape{
    public:
    void draw(){
        cout<<"Draw square"<< endl;
    }
};

int main(){
    Shape *shaPtr;
    Circle circle;
    Square square;
    
    shaPtr = &circle;      
    shaPtr->draw();
    

    shaPtr = &square;
    shaPtr->draw();
    
    return 0;
}
