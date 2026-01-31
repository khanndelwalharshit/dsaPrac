#include <iostream>
using namespace std;
// bool isPrime(int n){
//     if(n == 2){
//         return true;
//     }
//     if(n % 2 == 0){
//         return false;
//     }

//     for( int j = 3; j <= n/2; j+=2){
//         if(n % j == 0){
//             return false;
//         }

//     }
//     return true;
// }
// int main(){
//     int inpNum;
//     cout<<"Enter the number: ";
//     cin>>inpNum;
//     for(int i = 2; i <= inpNum; i++){
//        if (inpNum % i == 0){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//        }
//     }
//     return 0;
// }

void isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
    {
        cout << n << "";
    }
}

int main()
{
    int num = 1716;
    isPrime(num);
    return 0;
}