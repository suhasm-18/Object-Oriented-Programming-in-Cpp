#include<iostream>
using namespace std;

int main(){
    int A[2][3] ={{1,2,3},{6,5,9}};
    for(int i ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<A[i][j];
        }
    }
}
