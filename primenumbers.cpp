#include <iostream>
#include <cmath>
using namespace std;

bool isNotPrime(int n)
{
    if (n <= 1)
    {
        return true;
    }

    else if (n == 2)
    {
        return false;
    }

    else if (n % 2 == 0)
    {
        return true;
    }

    for (int i = 3; i <= n / 2; i += 2)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main(){
    int lowBound, upBound, k;
    cout<<"enter the lower limit";
    cin>>lowBound;
    cout<<"Enter the upper limit";
    cin>>upBound;

    for(k = lowBound; k <= upBound; k++){
        if(isNotPrime(k)){
            cout<<k<<endl;
        }
    }
    return 0;
}
