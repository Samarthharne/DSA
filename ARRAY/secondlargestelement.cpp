#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int seclar(int arr[],int n){
    int lar=arr[0];
    int res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>res){
            res=lar;
            lar=arr[i];
        }

        if(arr[i]!=lar || res>arr[i]){
            res=arr[i];
        }
    }
    return res;
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<seclar(arr,n);
   
    
    
    return 0;
}