#include <bits/stdc++.h>
using namespace std;
void insertsort(int arr[],int n){
    for(int i =0; i<=n-1;i++){
        int j = i;
         while(j>0 && arr[j-1]>arr[j] ){
                swap(arr[j],arr[j-1]);
                j--;
         }
    }
    }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    insertsort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}