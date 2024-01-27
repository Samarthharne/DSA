#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minidiiff(int arr[],int n){
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        int minidiff=arr[i]-arr[i-1];
        res=max(res,minidiff);
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
cout<<minidiff( arr, n);
return 0;
}