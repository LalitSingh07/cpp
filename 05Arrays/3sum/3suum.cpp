#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> arr;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    set<vector<int>> st;  // to store unique triplets

    for(int i = 0; i < n; i++){
        set<int> mpp;
        for(int j = i + 1; j < n; j++){
            int key = -(arr[i] + arr[j]);
            if(mpp.find(key) != mpp.end()){
                vector<int> temp = {arr[i], arr[j], key};
                sort(temp.begin(), temp.end());  // sort to avoid different orders
                st.insert(temp);  // insert into set
            }
            mpp.insert(arr[j]);
        }
    }

    cout << "Triplets are: \n";
    for(auto it : st){
        for(auto num : it){
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


















