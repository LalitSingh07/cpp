#include<bits/stdc++.h>

using namespace std;

void merge(vector <int> &a, int low , int mid, int high){
    vector<int> temp(high - low + 1);
    int left = low;
    int right = mid + 1;
    int k = 0;
    while(left <= mid && right <= high){
        if(a[left] < a[right]){
            temp[k++] = a[left++];
        }else{
            temp[k++] = a[right++];
        }
    }
    while(left <= mid){
        temp[k++] = a[left++];
    }
    while(right <= high){
        temp[k++] = a[right++];
    }
    for(int i = low; i <= high; i++){
        a[i] = temp[i - low];
    }
    

}

void merge_sort(vector<int> &a, int low, int high){
    if (low >= high) return;
    int mid = low + (high -low)/2;
    merge_sort(a, low, mid);
    merge_sort(a, mid+1, high);
    merge(a, low, mid, high);

}

int main(){
    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    merge_sort(a, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}