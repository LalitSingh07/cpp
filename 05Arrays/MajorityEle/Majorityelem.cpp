#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void major(vector<int> vv){
        int count =0,ele =0 ;
        for(int i =0;i<vv.size();i++){
            if(count == 0){
                ele= vv[i];
                count ++;
            }
            else if(vv[i] == ele) count++;
            else count--;

        }
        cout << ele << endl;
    }
};
// second solution
class Solution2{
public:
    void major(vector<int> vv){
        unordered_map<int,int> mp;
        for(int i =0;i<vv.size();i++){
            mp[vv[i]]++; // time complexity O(n)
        } // time complexity O(n)
        for(auto x:mp){
            if(x.second > vv.size()/2){
                cout << x.first << endl;
                break;
            } // time complexity O(n)
        }
    }
};

int main(){
    vector<int> vv = {1,2,23,3,3,9,9,9,3,3};
    Solution obj;
    obj.major(vv);
    return 0;
}