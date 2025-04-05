#include<bits/stdc++.h>
using namespace std;

int findsecond(vector<int> v,int n){
 int max = INT_MIN;int prevMax = INT_MIN;
   for(int i =0;i<n;i++){
     if(v[i]>max){
        prevMax = max;
        max = v[i];
     }
     else if(v[i]>prevMax && v[i]!= max){
        prevMax =v[i];
     }
    }
    if(prevMax == INT_MIN) return -1;
    return prevMax;
}
 
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
    cout << "second largest is" << findsecond(v,n);

    return 0;
}