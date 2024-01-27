#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subarraywithmaxsum(int arr[],int n){
    int maxending=arr[0];
    int sum=0;
    for(int i=1;i<n;i++){
          maxending=max(arr[i],maxending+arr[i]);
          sum=max(sum,maxending);
    }
    return sum;
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<subarraywithmaxsum(arr,n);
    
    
    
    return 0;
}