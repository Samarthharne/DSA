#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void even(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
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
    even(arr,n);
    
    
    return 0;
}