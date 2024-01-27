#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int equi(int arr[],int n){
    int presum=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
    }
    int s=0;
    int l=n-1;
    int left=0;

  for(int i=0;i<n;i++){
        presum-=arr[i];
        
        if(left==presum){
            return i;
        }
        left+=arr[i];


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
    cout<<equi(arr,n);


   
   
    
    
    
   
    
    
    
    return 0;
}