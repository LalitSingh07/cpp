#include<bits/stdc++.h>
#include <cctype>
using namespace std;

string tolowercase(string s){
    for(int i = 0;i<s.length();i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
string s = "hello my name is lalit Name";
int n = s.length();
stringstream ss(s);
string word;
map <string,int> m;
while(ss >> word){
    string sword = tolowercase(word);
    m[sword]++;
  
}
for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;
}
return 0;



}