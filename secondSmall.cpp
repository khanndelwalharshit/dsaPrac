#include <iostream>
using namespace std;
// void secondArr(int smallArr[], int leng)
// {
//     int min, sec_min;
//     if (smallArr[0] < smallArr[1])
//     {
//         min = smallArr[0];
//         sec_min = smallArr[1];
//     }
//     else
//     {
//         min = smallArr[1];
//         sec_min = smallArr[0];
//     }

//     for (int i = 0; i < leng; i++)
//     {
//         if (smallArr[i] < min)
//         {
//             sec_min = min;
//             min = smallArr[i];
//         }
//         else if (smallArr[i] < sec_min && smallArr[i] != min)
//         {
//             sec_min = smallArr[i];
//         }
//     }

//     cout << sec_min;
// }

// int main()
// {
//     int arr[] = {1, 32, 43, 1, 2};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     secondArr(arr, len);
//     return 0;
// }


void secSmall(int secSmallArr[], int leng ){
    int min = secSmallArr[0];
    for(int i = 0; i < leng; i++){
        if(min > secSmallArr[i]){
            min = secSmallArr[i];
        }
    }
    int sec_min = INT_MAX;
    for(int j = 0; j < leng; j++){
        if(secSmallArr[j] != min && secSmallArr[j] < sec_min){
            sec_min = secSmallArr[j];
        }
    }
    cout<<sec_min;

}

int main(){
    int arr[] = {11,23,1,4,5,2,0};
    int len = sizeof(arr)/ sizeof(arr[0]);

    secSmall(arr, len);
    return 0;

}