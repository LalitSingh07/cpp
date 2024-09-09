#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    int sum =0;
    int temp = n;

    while(temp!=0){
        int rem = temp %10;
        sum += pow(rem,3);
        temp = temp/10;
    }
    if(sum == n){
        cout <<"Armstrong number\n";
    }
    else{
        cout << "Not an Armstrong number\n";
    }
    return 0;
}