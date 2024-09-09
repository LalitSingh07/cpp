#include<bits/stdc++.h>
using namespace std;

void rec(int i, int x){
    if(i > x) return;
    // cout  << i<< endl;
    
    rec(i+1,x);
    cout  << i<< endl;
}

int main(){

    int x,i=1;
    cout << "enter the number";
    cin >> x;
    rec(i,x);

    return 0;
}