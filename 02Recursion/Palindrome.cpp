#include<bits/stdc++.h>
using namespace std;
int check(int i,string &s,int n){

    if(i>=n/2) return 1;
    if(s[i]!=s[n-i-1]) return 0;
    return check(i+1,s,n);

}

int main(){
    string s;

    cin >> s;
    int n = s.length();
    cout << check(0,s,n)<<endl;

    return 0;
}