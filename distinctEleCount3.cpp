#include<iostream>
#include<algorithm>
using namespace std;
int countElement(int *arr, int n){
    int count = 0;
    sort(arr, arr + n);
    for(int i = 0; i < n; i++){
        while(i < n-1 && arr[i] == arr[i + 1]){
            i++;
        }
        count++;
    }
    return count;
}

int main(){
    int arr[] = {4,6,3,4,3,5,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<countElement(arr , len);
    return 0;
}