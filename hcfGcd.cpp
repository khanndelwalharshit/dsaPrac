#include <iostream>
using namespace std;
void hcf(int n, int m)
{
    int gcd = 1;
    for (int i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
            // cout<<"Highest Common factor is: "<<gcd;
            // cout<<endl;
        }
        // cout<<"Highest Common factor is: "<<gcd;
    }
    cout << "Highest Common factor is: " << gcd;
}

int main()
{
    int num1, num2;
    cout << "Enter the number 1: ";
    cin >> num1;
    cout << "Enter the number 2: ";
    cin >> num2;
    hcf(num1, num2);

    return 0;
}
