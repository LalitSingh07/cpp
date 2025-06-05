#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> que = {1,1,0,0,-1,2,-2};
    sort(que.begin(),que.end());
    set<vector<int>> ans;
    int n = que.size();
    for(int i=0;i<n;i++)
    {
        if(i>0 && que[i]==que[i-1]) continue;
        for (int j = i+1; j<n; j++)
        {
            if(j>i+1&& que[j]==que[j+1])continue;
            int k = j+1;
            int l = n-1;
            while(k<l){
                int sum = que[i]+que[j]+que[k]+que[l];
                if(sum==0){
                    vector<int> temp = {que[i],que[j],que[k],que[l]};
                    ans.insert(temp);
                    k++;
                    l--;
                    while(k<l&&que[k]==que[k-1])k++;
                    while(k<l&&que[l]==que[l+1])l--;
                }
                else if(sum>0){
                    l--;
                }
                else k++;
 `           }
        }
        
    }

    for(auto it : ans){
        for(auto ti : it){
            cout << ti<< " ";
        }
        cout << "\n";
    }


    return 0;
}