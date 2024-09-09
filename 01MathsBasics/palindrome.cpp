#include<bits/stdc++.h>
using namespace std;

void palin(int n){
    int temp =n;
    int rev =0;
    while (temp !=0){
        int rem = temp %10;
        rev = rev *10 + rem;
        temp = temp /10;

    }
}

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    palin(n);
    return 0;
}