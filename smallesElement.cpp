#include <iostream>
using namespace std;
void findSmall(int smallArr[], int leng)
{
    int i, min = smallArr[0];
    for (i = 0; i <= leng - 1; i++)
    {
        if (smallArr[i] < min)
        {
            min = smallArr[i];
        }
    }
    cout << "smallest element is:" << min;
}
int main()
{
    int arr[] = {2, 4, 3, 5, 6, 1, -20};
    int len = sizeof(arr) / sizeof(arr[0]);
    findSmall(arr, len);
    return 0;
}