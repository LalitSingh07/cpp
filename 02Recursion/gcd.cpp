#include <bits/stdc++.h>
using namespace std;
int recurr(int a, int b){
    if(b==0) return a;

    return recurr(b, a%b);

}
int main(){
    int a,b,ans;
    cin>>a>>b;

    if (a > b) {

       ans = recurr(a, b);
    }
    else{
       ans =  recurr(b, a);
    }
 
  cout << ans << endl;

    return 0;
}
