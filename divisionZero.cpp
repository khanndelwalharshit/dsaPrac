#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>> a;
    cin>> b;
    if( b == 0){
        cout<<"Cannot be divided";
        return 42;
    }
    cout<<"The result is:"<< a / b;
    return 0;
}