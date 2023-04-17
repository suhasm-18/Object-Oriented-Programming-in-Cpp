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
    Employee(string name, string company , int age){  //constructor
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

class Developer :public Employee {
    public:
    string FavProgLang;
    Developer(string name, string company , int age, string favProgLang)
     :Employee(name, company ,age){
        FavProgLang = favProgLang;
     
    }
    void FixBug(){
        cout<< getName()<<"Fix bug using" <<FavProgLang<<endl;
    }
};
class Teacher:Employee{
    public:
    string Subject;
    void prepareLesson(){
        cout<<getName()<<"is preparing"<< Subject<<"lesson"<<endl;
    }
    Teacher(string name, string company , int age, string subject)
      :Employee(name , company, age)
      {
        Subject = subject;
      }
    

};

int main(){
    Developer d= Developer("Suhas" , "CEO" , 50, "C++");
    d.FixBug();
    d.Askforpromotion();
    Teacher t = Teacher("jack", "BMW",88,"english");
    t.prepareLesson();
    }
