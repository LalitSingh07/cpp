#include<bits/stdc++.h>
using namespace std;

void recc(int i,int x){
    if (i>x) return;

    cout << "hello"<< endl;
    recc(i+1,x);


}

int main(){
    int x,i=1;
    cout << "enter the number of times  to print name";
    cin >> x;

    recc(i,x);

    return 0;
}