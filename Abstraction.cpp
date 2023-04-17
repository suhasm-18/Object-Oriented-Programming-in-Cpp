#include<iostream>
using namespace std;

class Abstract{
    virtual void Askforpromotion() = 0;
};
class Employee : Abstract{
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
    void Askforpromotion() {
            if(Age>30)
            cout<<Name<<"got promoted"<<endl;
            else 
             cout<<Name<<"got no promoted"<<endl;
            }
};

int main(){
    Employee employee1 = Employee("Suhas" , "CEO" , 11);
    Employee employee2 = Employee("jhon" , "MD" , 85);
    employee1.Askforpromotion();
    employee2.Askforpromotion();

   
    

    }
