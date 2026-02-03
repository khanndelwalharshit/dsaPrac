#include <iostream>
#include <string>
using namespace std;

int toDecimal(string n)
{
    int len = n.size();
    int decimal = 0;
    int base = 1;

    for (int i = len - 1; i >= 0; i--)
    {

        if (n[i] >= '0' && n[i] <= '9')
        {
            int digit = int(n[i]) - 48;
            decimal = decimal + (digit * base);
        }

        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            int newdigit = int(n[i]) - 55;
            decimal = decimal + (newdigit * base);
        }
        base = base * 16;
    }
    return decimal;
}

int main()
{
    string hex;
    cout << "Enter the number";
    cin >> hex;
    cout << (toDecimal(hex));
    return 0;
}
