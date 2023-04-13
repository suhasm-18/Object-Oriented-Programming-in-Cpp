#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two variables";
    cin>> a >>b;
    try
    {
        if( b!=0){
            cout<<"res :"<< a / b <<endl;
        }
         else {
            throw b;
        }
    }
    catch(int x)
    {
        cout <<"caught"<< "b:" << x <<endl;
    }
    
}
