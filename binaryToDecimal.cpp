#include <iostream>
using namespace std;
void binarytodecimal(long long n)
{
    long long temp;
    temp = n;
    int base = 1, decimal = 0;

    while (temp != 0)
    {
        int lastDigit = temp % 10; // extracting the last digit

        decimal = decimal + (lastDigit * base);

        base = base * 2;
        temp /= 10; // eliminating the last digit
    }

    cout << "Decimal conversion of the follwoing binary number is: " << decimal;
}

int main()
{
    long long binaryNum;
    cout << "Enter the binary number: ";
    cin >> binaryNum;
    binarytodecimal(binaryNum);
    return 0;
}