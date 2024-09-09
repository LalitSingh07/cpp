#include<bits/stdc++.h>
using namespace std;

// int main(){
//      int n1,n2;
//      int gcd =1;
//       cout << "enter two number";
//       cin >>n1>>n2;
//       for (int i =1;i<=min(n1,n2);i++){
//         if(n1%i==0 & n2 %i ==0){
//             if(gcd < i){
//                 gcd = i;
//             }
//         }
//       }
//       cout << "gcd of "<< n1 <<" " << n2 << " is "<<  gcd;
//     return 0 ;
// }

int main(){
    int n1,n2;
     int gcd =1;
      cout << "enter two number";
      cin >>n1>>n2;

      while (n1 >0 && n2 > 0){
        if(n1 > n2) n1 = n1%n2;
        else n2 = n2 %n1;
      }
      if(n1 ==0 ) cout << n2;
      else cout << n1;



    


    return 0;
}