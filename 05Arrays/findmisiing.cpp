#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =5;
    vector<int> ve ={1,2,3,5};
    int xo1=1,xo2=0;
   
    for(int i=0; i<n-1;i++){
        xo1 ^= (i+1);
        xo2 ^= ve[i];
    }
    xo1 ^= (n-1);
    int ans = xo1 ^ xo2;
    cout <<"missing value is "<< ans << endl;

   // finding missing value by xor can be done in O(n) time complexity
   // step 1: find xor of all elements from 1 to n
    // step 2: find xor of all elements in array
    // step 3: xor of step 1 and step 2 will give the missing value
    

    return 0;
}