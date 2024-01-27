#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void onceappear(int arr[],int n){
    unordered_map<int,int> s;
    for(int i=0;i<n;i++){
       s[arr[i]]++;
    }
    for(auto it : s){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }
}

int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    onceappear(arr,n);
    
    
    return 0;
}