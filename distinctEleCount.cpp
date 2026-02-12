#include <iostream>
using namespace std;
void counElement(int cntArr[], int n)
{
    int visited[n] = {0};
    int count_dis = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (cntArr[i] == cntArr[j])
                {
                    visited[j] = 1;
                }
            }
            count_dis++;
        }
    }
    cout << count_dis;
}
int main()
{
    int arr[] = {30, 45, 78, 89, 56, 30, 45, 99, 20};
    int len = sizeof(arr) / sizeof(arr[0]);
    counElement(arr, len);
    return 0;
}




