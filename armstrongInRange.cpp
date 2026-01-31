#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int lowBound, upBound, temp, rem, k, p;
    cout << "Enter the Lower Bound: ";
    cin >> lowBound;
    cout << "Enter the Upper Bound: ";
    cin >> upBound;

    for (int i = lowBound; i <= upBound; i++)
    {
        int len = 0;
        double x = 0;
        temp = i;
        while (temp != 0)
        { // order
            len++;
            temp /= 10;
        }

        k = i;
        while (k != 0)
        {

            rem = k % 10;
            p = rem;
            for (int j = 1; j < len; j++)
            {
                rem = rem * p;
            }
            x = x + rem;
            k /= 10;
        }

        if (x == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}