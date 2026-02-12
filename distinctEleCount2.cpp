#include<iostream>
using namespace std;

void countElement( int *array, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        int flag = 0;
        for(int j = i+1; j < n; j++){
            if(array[i] == array[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            count++;
        }
    }
    cout<<count;
}

int main(){
    int arr[] = {11,23,21,43,11,23,56,78,65};
    int len = sizeof(arr) / sizeof(arr[0]);
    countElement(arr, len);
    return 0;
}