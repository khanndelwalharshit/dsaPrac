#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 }

  void swap(int *var1, int *var2){
    int temp = *var1;
    *var1 = * var2;
    *var2 = temp;
 }

  void bubbleSort(int arr[], int n){
    int i,j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    for(int k = 0; k < n; k++){
        cout<<arr[k]<<" ";
    }
 }

 int main(){
    int arr[] = {28, 6, 4, 2, 24};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    display(arr, len);
    cout<<endl;

    cout<<"After bubble sort:"<<endl;
    bubbleSort(arr, len);
    return 0;
 }

 





 