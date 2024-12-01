#include<bits/stdc++.h>
using namespace std;

      void getPairs(vector<int> arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> s;
        
        map<int,int> mpp;
      for(auto it : arr){
         mpp[abs(it)]++;
      }
      for(auto it : mpp){
        cout << it.first << " : "<< it.second <<endl;
      }
      }
   


int main(){

    vector<int> v = {-1,0,1,2,-1,-4};
    


    getPairs(v);

    return 0;
}
