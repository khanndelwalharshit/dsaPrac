#include <iostream>
using namespace std;
void toBinary(int n)
{
    int binaryArr[32];
    int i = 0;
    int temp = n;
    while (temp > 0)
    {
        binaryArr[i] = temp % 2;
        temp /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryArr[j];
    }

    cout << endl;

    int size_arr = sizeof(binaryArr) / sizeof(binaryArr[0]);
    cout << size_arr;
}

int main()
{
    int decimalNum;
    cout << "Enter the number:";
    cin >> decimalNum;
    toBinary(decimalNum);
    return 0;
}
