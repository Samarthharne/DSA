#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void starting(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
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
    starting(arr,n);
    
    
    return 0;
}