#include <iostream>
using namespace std;

class car{
    public:
   virtual void start(){
        cout<<"Car started"<<endl;
    }

   virtual void stop(){
        cout<<"Car stoped"<<endl;
    }
};

class tata:public car{
    public:
     void start(){
        cout<<"tata started"<<endl;
    }

    void stop(){
        cout<<" tata Car stoped"<<endl;
    }
};
class maruthi:public car{
    public:
     void start(){
        cout<<"maruthi Car started"<<endl;
    }

    void stop(){
        cout<<"maruthi  Car stoped"<<endl;
    }
};

int main(){
    car *c=new tata;
    c->start();
    c->stop();
  
    c = new maruthi;
    c->start();
    c->stop();  

}
