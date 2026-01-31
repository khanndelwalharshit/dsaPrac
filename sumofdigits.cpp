#include<iostream>
using namespace std;

int main(){
    int number, sum = 0;
    cout<<"Enter the number";
    cin>>number;
    
    while(number != 0){
        sum += number % 10; //get the last digit and perform sum = sum + last digit of the number

        number /= 10; //eliminates the last digit as result

    }

    cout<<sum;
}