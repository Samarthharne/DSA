#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int chocolatedistribution(int arr[],int n,int k){
    sort(arr,arr+n);
    int res=arr[k-1]-arr[0];
    for(int i=1;i<n-k+1;i++){
        res=min(res,arr[i+k-1]-arr[i]);


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

int k;
cin>>k;
cout<<chocolatedistribution(arr,n,k);
return 0;
}