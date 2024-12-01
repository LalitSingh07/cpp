#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &a, int low, int high){
    int pivot = a[low];
    int i = low;
    int j = high;
    while(i < j){
        while(a[i] <= pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i < j){
            swap(a[i], a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;                           
}

void Quick_sort(vector<int> &a, int low, int high){
   if(low <=high){
    int part = partition(a, low, high);
    Quick_sort(a, low, part-1);
    Quick_sort(a, part+1, high);

   }
   return;
}

int main(){
    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    Quick_sort(a, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}