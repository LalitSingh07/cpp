#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,count =0;
    cout << "enter a number : ";
    cin >> n;

    for(int i = 1 ; i <= sqrt(n) ; i++){

        if(n%i ==0){
            count ++; 
            if(n/i != i){
                count ++;
            }

        }
    }

    if(count <= 2){
        cout << "prime number" << endl;
    }
    else{
        cout << "non prime " << endl;
    }



    return 0;
}