#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    cin >> n;

    // int mat[n][n];
    vector<vector<int>> mat(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> mat[i][j];
        }
    }
    cout <<"input mat"<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< mat[i][j]<< "\t";
        }
        cout << endl;
    }
    cout<< "transpose of matrix"<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { // Only above the diagonal
            swap(mat[i][j], mat[j][i]);
        }
    }
    cout <<"transpose mat"<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< mat[i][j]<< "\t";
        }
        cout << endl;
    }
    cout <<  "reverse the matrix";
    for(int i =0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    cout <<"reverse mat"<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< mat[i][j]<< "\t";
        }
        cout << endl;
    }
    return 0;
}