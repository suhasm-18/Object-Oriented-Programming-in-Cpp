#include<iostream>
using namespace std;
class Employee{
    private:
    string Name ;
    string Company = "CEO";
    int Age;

    public:
    void setName(string _name){
        Name = _name;
    }
    string getName(){
        return Name;
    }
    void setCpmpany(string _Cname){
        Company = _Cname;
    }
    string getCpmpany(){
        return Company;
    }
    void setAge(int _age){
        if(_age>18){
        Age = _age;
        }
        else{
            "you are under age";
        }
    }
    int getAge(){
        return Age;
    }
 
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
    Employee employee1 = Employee("Suhas" , "CEO" , 11);
    employee1.Intro();

    Employee employee2 = Employee("jhon" , "MD" , 85);
    employee2.Intro();

    employee1.setAge(11);
    employee1.setName("qwe");
    cout<<employee1.getName() << "is" <<employee1.getAge() <<"year";
    // Employee employee2;
    // employee2.Name = "ram";
    // employee2.Company = "TATA";
    // employee2.Age= 88;
    // employee2.Intro()
    

    }
