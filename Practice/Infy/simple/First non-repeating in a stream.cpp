#include<bits/stdc++.h>
using namespace std;
class solution{
public:
     string FirstNonRepeating(string &s) {
        // ----------------- bruete force -------------------------
    //  unordered_map<char,int> mpp;
    //   int i = 1;
    //     string ans ="";                 
    //   for(char ch : s){
    //       int flag =1;
    //      mpp[ch]++;
    //      for(int j =0 ; j<i ;j++){
    //          char c = s[j];
    //          if(mpp[c] == 1){
    //              ans +=  s[j];
    //              flag = 0;
    //              break;
    //          }
    //      }
    //      if(flag==1) {ans +="#";}
    //       i++;     
    //   }
    //   return ans;
    // ------------------------------------optimal---------------------------

    unordered_map<char, int> freq;   
    queue<char> q;                 
    string ans = "";               

    for (char ch : s) {
        freq[ch]++;             
        q.push(ch);              
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }
        if (q.empty()) {
            ans += '#';
        } else {
            ans += q.front();
        }
    }

    return ans;
  }
};

int main(){
    solution obj;
    // string A = "geeksforgeeksandgeeksquizfor";
    string A = "aabc";
   cout << obj.FirstNonRepeating(A);
    return 0;

}