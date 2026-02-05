#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void linearArr(int linarr[], int len, int findElem){
    bool foundElem = false;
    int i;
    for(i = 0; i <= len - 1; i++){
        if(linarr[i] == findElem){
            foundElem = true;
            break;
        }
    }
    if(foundElem){
        cout<<"Element found at index: "<<i;
    }
    else{
        cout<<"Element not found";
    }
}

int main(){
    int arr[] = {3,4,5,6,21,90,-90,-20};

    int arrlen = sizeof(arr) / sizeof(arr[0]);
    int element;

    cout<<"Enter the element: ";
    cin>>element;
    linearArr(arr, arrlen, element);
    return 0;

}
