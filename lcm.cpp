#include <iostream>
using namespace std;
void LCM(int n, int m)
{
    for (int i = n; i <= n * m; i = i + n)
    {
        if (i % n == 0 && i % m == 0)
        {
            cout << "LCM is " << i;
            break;
        }
    }
}

int main()
{
    int num1, num2;
    cout << "Enter the num1: ";
    cin >> num1;
    cout << "Enter the num2: ";
    cin >> num2;
    LCM(num1, num2);
    return 0;
}