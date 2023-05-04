#include<iostream>
using namespace std;
class Employee{
    public:
    string Name = "suhas";
    string Company = "CEO";
    int Age= 55;
 
    void Intro() {
        cout<<"Name - "<<Name <<endl;
        cout<<"Company - "<<Company <<endl;
        cout<<"Age - "<<Age <<endl; 
    }
    Employee(string name, string company , int age){
        Name = name;
        Company = company;
        Age = age;
    }

