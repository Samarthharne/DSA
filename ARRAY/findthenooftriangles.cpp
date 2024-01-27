#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int noofTriangles(int arr[],int n){
    sort(arr,arr+n);
    int cnt=0;
    for(int i=0;i<n-2;i++){
        int k=i+2;
        for(int j=i+1;j<n-1;j++){
            while(k<n && arr[i]+arr[j]>arr[k]){
                ++k;
            }
            if(k<j){
                cnt+=k-j-i;
            }
        }
    }
    return cnt;
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    cout<<noofTriangles(arr,n);
    
    return 0;
}