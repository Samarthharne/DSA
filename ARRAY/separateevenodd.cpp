#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void separate(int arr[],int n){
    int j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]%2==0){
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
    separate(arr,n);
    
    
    return 0;
}