# include <iostream>
# include <string>

using namespace std;

class Abstractemplay{       ///pure abstract class
  virtual void Askforpromotion()=0;   //virtual function
} ;

class Employee:Abstractemplay {
private:
    string Company;
    int Age;

protected:
    string Name ;
public :
    void SetName(string name){   //Encapsulation
        Name = name;
    }
    string GetName() {
        return Name;
    }
     void SetCompany(string company){   //Encapsulation
        Company = company;
    }
    string GetCompany() {
        return Company;
    }
     void SetAge(int age){   //Encapsulation
        Age=age;
    }
    int GetAge() {
        return Age;
    }
    void introduceyourself(){
        cout << "Name :" << Name << endl;
        cout << "Company :" << Company << endl;
        cout << "Age :" << Age << endl;
    }

    Employee(string name, string company, int age ){    // Constructor 3 imp --> 1. Classname= Construcor name 
        Name = name; Company = company; Age = age;     //                       2 . Always public access
    }
    void Askforpromotion(){  //abstraction
     if(Age > 30){
        cout<<Name << "got promoted"<<endl;
     }else{
         cout<<Name << "not promoted"<<endl;
     }
    }
    virtual void work(){
        cout<<Name <<"mail"<<endl;
    }
};                                                        //                     3. not have Written type as Function(()) have

class developer:public Employee {           //Polymorphism
    public:
    string FavProLang;

    developer(string name, string company, int age , string Fav ):Employee(name, company, age){  //constructor
        FavProLang = Fav;
    };
    void Fixbug(){
        cout<<Name <<"fix bug using"<< FavProLang<<endl;
    }
      void work(){
        cout<<Name <<"writeing code"<<endl;
    }
};
int main() {
    Employee employee = Employee("Suhas" , "Tata" , 21);
    //employee.introduceyourself();

    Employee employee2 = Employee("john" , "TCS" , 35);

    // employee.Askforpromotion();
    // employee2.Askforpromotion();
    // employee2.introduceyourself();

    //  employee.SetName("Ravan");
    //  employee.SetAge(15);
    //  cout << employee.GetName() << "  is  " << employee.GetAge() <<endl;
  
