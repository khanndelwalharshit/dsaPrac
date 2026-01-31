#include <iostream>
using namespace std;
void toDecimal(int n)
{
    long long base = 1, decimalNum = 0;
    int temp = n;
    while (temp != 0)
    {
        int rem = temp % 10;
        if (rem <= 7)
        {
            decimalNum = decimalNum + (rem * base);
            base = base * 8;
            temp /= 10;
        }
    }

    cout << "Decimal conversion of the given octal number is: " << decimalNum;
}

int main()
{
    int octalNum;
    cout << "Enter the number: ";
    cin >> octalNum;
    toDecimal(octalNum);
    return 0;
}