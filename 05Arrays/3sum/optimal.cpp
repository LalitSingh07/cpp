#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> que = {1,1,0,0,-1,2,-2};
    sort(que.begin(),que.end());
    set<vector<int>> ans;
    int n = que.size();
    for(int i=0;i<n;i++){
        if(i>0 && que[i]== que[i-1]) continue;
        int left = i+1;
        int right = n-1;
        while(left< right){
            int sum = que[i]+que[left]+que[right];
            if(sum == 0){
                vector<int> temp = {que[i],que[left],que[right]};
                sort(temp.begin(),temp.end());
                ans.insert(temp);
                left++;
                right--;
                while(left< right && que[left]==que[left-1])left++;
                while(left< right && que[right]==que[right+1])right--;
            }
            else if(sum >0) right--;

            else left++;
        }
        
    }

    cout << "answer :"<< "\n";
    for(auto it : ans){
        for(auto ti : it){
            cout << ti << " ";
        }
        cout << endl;
    }
    return 0;
}