#include <iostream>
using namespace std;
void toOctal(int n)
{
    int temp = n, base = 1, octalNum = 0;
    while (temp != 0)
    {
        int digit = temp % 8;
        octalNum = octalNum + (digit * base);
        base = base * 10;
        temp /= 8;
    }

    cout << octalNum;
}

int main()
{
    int decimalNum;
    cout << "Enter num: ";
    cin >> decimalNum;
    toOctal(decimalNum);
    return 0;
}