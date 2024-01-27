#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isfes(int arr[],int n,int k,int ans){
    int sum=0;
    int req=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>ans){
            req++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }

    }
    return (req<=k);
}


int miniallo(int arr[],int n,int k){
    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx=max(mx,arr[i]);

    }
    int low=mx;
    int high=sum;
    int res=0;
    while(low<=high){
        int mid=high-(low+high)/2;
        if(isfes(arr,n,k,mid)){
            res=mid;
            high=mid-1;

        }else{
            low=mid+1;
        }
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

int k;
cin>>k;
cout<<miniallo(arr,n,k);
return 0;
}