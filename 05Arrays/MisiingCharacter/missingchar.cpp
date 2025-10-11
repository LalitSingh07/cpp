#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "apxple";
    string b = "apple";
    int ans = 0;
    for(char ch:a){
        ans ^=(int)ch;
    }
    
    for(char ch:b){ 
        ans ^=(int)ch;
    }
    cout << "answer is : " << (char)ans<< endl;
    
    return 0;
}