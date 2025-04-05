#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void sortarr(vector<int> v){
        int low =0 ,mid =0,high = v.size()-1;
        while(mid < high){
            if(v[mid]==1) mid++;
            if(v[mid]==0){
                swap(v[mid],v[low]);
                mid++;
                low++;
            }

            if(v[mid]== 2){
                swap(v[high],v[mid]);
                high--;
            }
        }
             
        for(auto it: v){
            cout<<it << endl;
        }

    }
};
int main(){
    vector<int> v ={2,0,1};
    Solution obj;
    obj.sortarr(v);
    return 0;
}