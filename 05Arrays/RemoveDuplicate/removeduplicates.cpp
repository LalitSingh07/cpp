#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,num;
    cout << "enter the length of array";
    cin >> n;
    vector<int> v ;
    for(int i =0;i<n;i++){
        cout << "arr["<<i<<"]: ";
        cin >> num;
        v.emplace_back(num);
    }
    //Sort the Array
    sort(v.begin(),v.end());
    cout << "sorted array is ";
      for(int i =0;i<n;i++){
       cout << v[i] << " ";

    }
    //------------------------------------------method 1------------------------------------------

    //---------------------------------------NlogN complexity-------------------------------------

    // set<int> s;
    // for(int i =0;i<n;i++){
    //     s.emplace(v[i]);
    // }
    // cout << "unique values are : " << s.size();
    
    //------------------------------------------method 2------------------------------------------

    //----------------------------------------O(n) complexity-------------------------------------

    int j =0;
    for(int i = 0 ;i < n-1;i++){
        if(v[i]!=v[i+1]){
            v[j++] = v[i];
        }
    }
    cout << "unique values are : " << j+1;

    return 0;
}