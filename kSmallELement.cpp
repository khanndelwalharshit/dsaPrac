#include<iostream>
#include<algorithm>
using namespace std;

void kElement(int *arr, int n, int k){
    sort(arr, arr + n);
    int i;
    
    for(i = 0; i < n; i++){
        while(i < n-1 && arr[i] == arr[i+1]){
            i++;
        }
        k--;
        if(k==0){
            break;
        }
    }
    cout<<arr[i];
}

int main(){
    int arr[] = {2,4,3,1,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    kElement(arr,len,k);
    return 0;
}