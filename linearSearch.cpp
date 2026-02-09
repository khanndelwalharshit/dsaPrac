#include<iostream>
using namespace std;
void linSearch(int linarr[], int elefin, int leng){
    for(int i = 0; i <= leng - 1; i++){
        if(linarr[i] == elefin){
            cout<<"element found at index "<<i;
            return;
        }
    }
    cout<<"element not found";
}
int main(){
    int arr[] = {1,3,5,32,45,65,332,45,3,2};
    int elementfind = 45;
    int len = sizeof(arr) / sizeof(arr[0]);
    linSearch(arr, elementfind, len);
    return 0;

}
