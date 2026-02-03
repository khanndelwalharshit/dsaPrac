#include <iostream>
#include <string>
using namespace std;
void toHexa(int num)
{
    char hexa[100];
    int i = 0;
    int temp = num;
    while (temp != 0)
    {
        int rem = temp % 16;
        if (rem <= 9)
        {
            hexa[i] = rem + 48;
        }

        else
        {
            hexa[i] = rem + 55;
        }
        i++;
        temp /= 16;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexa[j];
    }
}

int main()
{
    int decimal;
    cout << "Enter the decimal: ";
    cin >> decimal;
    toHexa(decimal);
    return 0;
}