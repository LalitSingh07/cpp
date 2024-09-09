#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter a num";
    cin >> n;
    vector <int> ls;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.emplace_back(i);
             if(n/i != i){
            ls.emplace_back(n/i);
        }
        }
      
    }

    sort (ls.begin(),ls.end());

    // for(auto it =ls.begin();it != ls.end();it++){
    //     cout << *(it);
    // }

    for(auto it :ls){
        cout << it << " ";
    }
      

    return 0;
}