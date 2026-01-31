// code using in built function
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int power = 0, num, temp;
    cout << "Number" << endl;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        power += 1;
        temp /= 10;
    }

    cout << power << endl;

    int k = num, rem, p;
    double x = 0;
    while (k != 0)
    {
        rem = k % 10;
        p = rem;
        for (int i = 1; i < power; i++)
        {
            rem = rem * p;
        }
        x = x + rem;
        k /= 10;
    }
    cout << x << endl;

    if (num == x)
    {
        cout << "It is an armstrong number";
    }
    else
    {
        cout << "not an armstrong";
    }

    return 0;
}