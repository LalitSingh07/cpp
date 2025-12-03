#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysum(vector<int>&nums, int target){
        unordered_map<int, int> mp;
        int sum =0;
        int max_len = 0;
        int len = 0,rem=0;
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            if(sum == target){
                max_len = max(len, i+1);
            }

            rem = sum - target;
            if(mp.find(rem) != mp.end()){
                len = i - mp[rem];
                max_len = max(max_len, len);
            }
            else{
                mp[sum] = i;
            }

        }

        return max_len;
    }

    
};

int main(){
    Solution obj;
    vector<int> nums = {2,2,1,1,1,0,0,0,0,0,1,2,2,1,1};
    cout << obj.subarraysum(nums, 4);

   
    return 0;
}           