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
};

int main(){
    Employee employee1 = Employee("Suhas" , "CEO" , 55);
    employee1.Intro();

    Employee employee2 = Employee("jhon" , "MD" , 85);
    employee2.Intro();
    // Employee employee2;
    // employee2.Name = "ram";
    // employee2.Company = "TATA";
    // employee2.Age= 88;
    // employee2.Intro()
    

    }
