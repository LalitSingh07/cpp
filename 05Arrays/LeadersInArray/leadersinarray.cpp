#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "enter the num of ele";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> leaders;

    // ----------------------------bruete force O(N)2-------------------------------
    for(int i = 0; i < n; i++){
       bool isleader = true;
       for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            isleader = false;
            break;
        }
       }
       if(isleader) leaders.push_back(arr[i]);
    }
cout << "leaders are as follows:";
    for(auto it : leaders){
        cout << it<<endl;
    }
    // --------------------------------
    vector<int> leaders2;
    int mx = INT_MIN;
    for(int i =n-1 ; i>=0;i--){
        mx = max(arr[i],mx);
        if(arr[i]>=mx){
            leaders2.push_back(arr[i]);
        }
    }
    cout << "leaders are as follows: ";
    for(auto its : leaders2){
        cout << its<<endl;
    }

   

    return 0;
}