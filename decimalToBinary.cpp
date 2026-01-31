#include <iostream>
using namespace std;

void toBinary(int n)
{
    long long binaryNum = 0;
    int temp = n;
    long long base = 1;
    while (temp > 0)
    {
        int Digit = temp % 2;
        binaryNum = binaryNum + (Digit * base);
        base = base * 10;
        temp /= 2;
    }
    cout << "Binary conversion of the given number is: " << binaryNum;
}

int main()
{
    int decimalNum;
    cout << "Enter the number: ";
    cin >> decimalNum;
    toBinary(decimalNum);
    return 0;
}
