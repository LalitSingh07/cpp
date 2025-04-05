#include<bits/stdc++.h>

using namespace std;

bool ls(vector<int> arr, int key){

    for(auto it : arr){
        if(it == key) return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // ------------------------------bruete force linear search-------------------------
   int longest =1;
   for(int i=0; i<n;i++){
   int num = arr[i];
   int cnt =1;
   while(ls(arr,num+1)==true){
    cnt++;
    num++;
   }
   longest = max(longest,cnt);
   }

   cout<< "\n longest is"<< longest;

    // ----------------------------better------ sorting & prev pointer approch----------------
   sort(arr.begin(),arr.end());
   int longest2=0;
   int counter =1;
   int prev = INT_MIN;

   for(int i=0;i<)


    return 0;

}