#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxprofit(int arr[],int n){
    int pro[n];
    for(int i=0;i<n;i++){
        pro[i]=0;
    }
    int maxprice=arr[n-1];
    for(int i=n-2;i>=0;i--){
       if(maxprice<arr[i]){
        maxprice=arr[i];
       }

       pro[i]=max(pro[i+1],maxprice-arr[i]);
    }
    int minprice=arr[0];
    for(int i=1;i<n;i++){

        if(minprice>arr[i]){
            minprice=arr[i];
        }
        pro[i]=max(pro[i-1],pro[i]+(arr[i]-minprice));
    }

    int res= pro[n-1];
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
    cout<<maxprofit(arr,n);
    
    
   
    
    
    
    return 0;
}