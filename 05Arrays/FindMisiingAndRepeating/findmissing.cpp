#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr1= {1,3,2,2,4};
    int n = arr1.size();
    int hash[n+1] = {0};
    for(int i =0; i<n;i++){
        hash[arr1[i]]++;
    }
    int repeat = -1, missing =-1;

    for(int i =1; i <n+1;i++){
       
        if(hash[i] >1) repeat = i;
       else if(hash[i] ==0 ) missing = i;
    }

    cout << repeat;
    cout << "\n " << missing;

    return 0;
}