#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // -----------------------Brute force---------------------------------
    // ------------------------O(n^2)-------------------------------------
    // -------------------------------------------------------------------
    int maxpr(vector<int> v){
        int res =0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                res = max(res,v[j]-v[i]);

            }
        }
        return res;
    } 
    // ------------------------optimal sol---------------------------------
    //---------------------------O(n)-------------------------------------
    // ------------------------------------------------------------------
    int maxoptimal(vector<int> v){
        int res =0;
        int mins = v[0];
        for(int i=0;i<v.size();i++){
         mins = min(mins,v[i]);
         res = max(res, v[i]-mins);
            }
                return res;
        }
};

int main(){

    vector<int> v = {7,10,1,3,6,9,2};
    Solution obj;
    cout << obj.maxpr(v)<<endl;
    cout << obj.maxoptimal(v);

    return 0;
}
