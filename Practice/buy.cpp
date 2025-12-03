#include<bits/stdc++.h>

using namespace std;


void sol(vector<int> num){
int max =INT_MIN,prev = INT_MIN;

for(auto it : num){
    if(it > max){
        prev = max;
        max = it;
    }
    else if(prev < it && it!=max){
        prev = it;
    }

  
}
cout << "second largest element is " << prev;

}
int main(){
    vector<int> nums = {1,9,2,3,4,5};
   
    // sort(nums.begin(),nums.end());
    // for(int i = nums.size()-1 ; i>=0;i--){
    //     if(nums[i]!= nums[nums.size()-1]){
    //         cout << nums[i];
    //         break;
    //     }
    // }

    sol(nums);
return 0;
}