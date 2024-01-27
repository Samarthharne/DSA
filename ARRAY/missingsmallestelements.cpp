#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missing(int arr[],int l,int h,int f){
   
    if(l<h){
        int mid=l+(h-l)/2;
        if(arr[mid]!=mid+f){
            return missing(arr,l,mid,f);
        }
        else {
            return missing(arr,mid+1,h,f);
        }
        
        
    }  
    return f+l;  
}

int smallest(int arr[],int n){
    if(arr[0]!=0){
       return 0;
    }
    if(arr[n-1]!=n-1){
        return n-1;

    }
    int f=arr[0];
    return missing(arr,0,n-1,f);
    
}


int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<smallest(arr,n);
   
    
    
    
    return 0;
}