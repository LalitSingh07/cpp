#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    cout << "enter the number of element";
    cin >> n;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }

    // pre compute

    map<int,int> mpp;
    for(int i=0; i < n;i++){
        mpp[arr[i]]++;
    }

    for (auto it : mpp){
        cout << it.first << " : " << it.second<< endl;
    }
    int x;

    cout << "enter the element to finf frequency";
    cin >> x;
    cout<<"frequency of "<< x <<" is " << mpp[x];


    return 0;
 }