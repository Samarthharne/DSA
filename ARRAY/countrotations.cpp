#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cntrotations(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return i+1;
        }
    }
    return -1;
}

int cntrotas(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]<arr[l]  && arr[mid]<arr[h]){
            return mid;
        }
        else if(arr[mid]>arr[h]){
            h=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    return -1;
}

int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<cntrotas(arr,n);
    cout<<endl<<cntrotations(arr,n);
    
    
    return 0;
}