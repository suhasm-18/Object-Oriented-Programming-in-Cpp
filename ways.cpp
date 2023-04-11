#include <iostream>
using namespace std;

class Parent
{
private: int a;
protected: int b;
public: int c;
 
 void funParent()
 {
 a=10;
 b=5;
 c=15;
 }
};
class Child: private Parent
{
private:
 
protected:
 
public:
 
 void funChild()
 {
 //a=10;
 b=5;
 c=15;
 }
};
