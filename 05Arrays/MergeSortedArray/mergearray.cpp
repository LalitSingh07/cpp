#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr1 = {1,4,7,9,22};
    vector<int> arr2 = {2,3,8,0,29,62};

    int n = arr1.size();
    int m = arr2.size();
    int len = n+m;

    int left,right,gap;
    gap = len/2+len%2;
    while(gap >0){
        left = 0;
        right = left+gap;
        while(right<len){
            // both in diff array
             if(left < n && right>=n){
                if(arr1[left]>arr2[right-n])
                swap(arr1[left],arr2[right-n]);
             }
             else if (left < n && right <n)// both array 1
             {
                if(arr1[left]>arr1[right])
               swap(arr1[left],arr1[right]);
             }else{
                if(arr2[left-n]>arr2[right-n])
                swap(arr2[left-n],arr2[right-n]);//both array 2
             }
            left++;
            right++;
        }
        if(gap == 1) break;
        gap = gap/2+gap%2;

    }

 for(auto it : arr1){
                cout << it << " ";
            }
            for(auto it : arr2){
                cout << it << " ";
            }
  
    


    return 0;

}