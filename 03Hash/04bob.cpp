#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    map <int,int> mpp;
    for (int i =0;i<n;i++)
    {
        cin >> arr[n];
        mpp[arr[n]]++;
    }
    int max_freq =0;
    int max = 0;
    int count = 1;
    for(auto it : mpp){
        if(it.second > max_freq){
            max_freq =  it.second;
            max = it.first;
        }}

    for(auto it : mpp){
        if(it.second ==  max_freq){
           if(it.first!= max){
            count ++;
           }
        }}

    cout << "fav singers : "<< count << endl;
   


    return 0;
}