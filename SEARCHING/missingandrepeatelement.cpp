#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void missrepeat(int arr[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto a : m){
        if(a.second==2){
            cout<<a.first;
        }
        if(a.second==0){
            cout<<a.first;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    missrepeat(arr,n);
    return 0;
}