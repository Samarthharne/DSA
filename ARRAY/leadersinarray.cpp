#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void lead(int arr[],int n){
    cout<<arr[n-1]<<" ";
    int res=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>res){
            cout<<arr[i]<<" ";
            res=arr[i];
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
    lead(arr,n);
    
    
    return 0;
}