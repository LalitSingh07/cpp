#include<bits/stdc++.h>
using namespace std;
 int main(){
    string s;
    cout << "enter string ";
    cin >> s;
    int hashh[26] ={0};
    // precompute
    for (int i=0 ; i<s.size();i++){
        hashh[s[i]-'a']++;
    }
    cout << "enter a character";
    char ch;
    cin >> ch;

    cout << "frequency of " << ch <<" is "<<hashh[ch-'a']<<endl;
    return 0;
 }