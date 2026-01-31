#include <iostream>
using namespace std;
void toOctal(int n)
{
    int octalArr[32];
    int i = 0, temp = n;
    while (temp != 0)
    {
        octalArr[i] = temp % 8;
        temp /= 8;
        i++;
    }

    // size of arr:
    int size_arr = sizeof(octalArr) / sizeof(octalArr[0]);
    cout << "size of arr is: " << size_arr << endl;

    for (int j = i - 1; j >= 0; j--)
    {
        cout << octalArr[j];
    }
}

int main()
{
    int decimalNum;
    cout << "Enter num: ";
    cin >> decimalNum;
    toOctal(decimalNum);
    return 0;
}
