#include <iostream>
using namespace std;
int main()
{
    int rem, rev = 0, num, temp;
    cout << "num: ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (num == rev)
    {
        cout << "palindrome"<<endl;
    }
    else
    {
        cout <<"not a palindrome"<<endl;;
    }

    // cout<<rev;
    return 0;
}