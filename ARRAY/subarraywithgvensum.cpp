#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool subarraywithgivensum(int arr[],int n,int k){
    int sum=0;
    int s=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        while(sum>k){
            sum-=arr[s];
            s++;
        }
        if(sum==k){
            return true;
        }
    }
    
    return false;
}

int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<subarraywithgivensum(arr,n,sum);
    
    
    
    return 0;
}