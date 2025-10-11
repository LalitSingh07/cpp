#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<vector<int>> vect = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
   vector<vector<int>> ans;
   int n = vect.size();
   cout << "Sorted elements are as follows: \n";
   sort(vect.begin(),vect.end());

   for(auto its: vect){
    cout <<"{"<< *(its.begin())<< ",";
    cout << *(its.end()-1)<<"}";
    cout <<"\n";
   }

   for(int i=0;i<n;i++){
    if(ans.empty()|| vect[i][0] > ans.back()[1]){
        ans.push_back(vect[i]);
    }
    else{
            ans.back()[1] = max(ans.back()[1],vect[i][1]);
    }
   }
cout << "intervals are";
   for(auto it : ans){
    cout << "{";
    cout << it[0] << ","<< it[1] << "}\n";

   }


   return 0;
}