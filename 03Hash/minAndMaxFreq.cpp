#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the num of elements";
    cin >>  n;
    int arr[n];
    map <int,int> mpp;
    for (int i =0;i<n;i++)
    {
        cin >> arr[n];
        mpp[arr[n]]++;
    }

    int min = 0;
    int max = 0;
    int min_freq =n;
    int max_freq =0;

    for(auto it : mpp){
        if(it.second > max_freq){
            max_freq =  it.second;
            max = it.first;
        }
        if(it.second < min_freq){
            min_freq =  it.second;
            min = it.first;
        }

    }
    cout  << "min frequency of " << min << " is "<<  min_freq <<" And " <<  "max frequency of " << max << " is " << max_freq;









    return 0;

}