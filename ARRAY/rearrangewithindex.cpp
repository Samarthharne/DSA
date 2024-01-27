#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    vector<int> v(n,-1);
    for(int i=0;i<n;i++){
        v[arr[i]]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
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
    rearrange(arr,n);
    
    
    
    return 0;
}