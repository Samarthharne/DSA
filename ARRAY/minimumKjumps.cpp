#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int jumpk(int arr[],int l,int h){
    if(l==h){
        return 0;

    }
    if(arr[l]==0){
        return INT_MAX;
    }

    int mini=INT_MAX;
    for(int i=l+1;i<=h && i <= (l+arr[l]);i++){
        int jump=jumpk(arr,i,h);
        if(jump!=INT_MAX && jump+1<mini){
            mini=jump+1;
        }
    }
    return mini;
}


int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<jumpk(arr,0,n-1);
   


   
   
    
    
    
   
    
    
    
    return 0;
}