#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumgreater(int arr[],int n,int sum){
    int curr_sum=0;
    int len=n+1;
    int start=0;
    int end=0;

    while(curr_sum<sum && end<n){
        curr_sum+=arr[end++];
    }
    while(curr_sum>sum && start<n){
        len=min(len,end-start);

        curr_sum-=arr[start++];
    }

    return len;
}

int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<sumgreater(arr,n,x);
    
    
   
    
    
    
    return 0;
}