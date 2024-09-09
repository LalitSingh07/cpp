#include<bits/stdc++.h>
using namespace std;

//basic method that uses 10^6 numbers appx of hasj array

int main(){

    int n ;
    cout << "enter the number of elements";
    cin >> n;
    int arr[n];
    cout << "enter the elements";
    for (int i =0; i <n;i++){
        cin >> arr[i];

    }

    // defining hash array
    int hash[12]={0};

      for (int i =0; i <n;i++){
        hash[arr[i]] =  hash[arr[i]] +1;

    }

  cout << "enter a number to know frequency";
  
  int num;
  cin >> num;
  cout << hash[num];


      





    return 0;

}