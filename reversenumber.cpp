#include <iostream>
using namespace std;
int main()
{
    int rem, rev = 0, num;
    cout << "num:";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    cout << rev;
    return 0;
}