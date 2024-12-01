#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i =0 ; i < n-1;i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    int arr[] = {56,34,23,12,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}