#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int subsum(int arr[],int n,int k){
    vector<int > prefix;
    int presum[n+1];
     presum[0]=arr[0];
    for(int i=0;i<=n;i++){
        presum[i]=presum[i-1]+arr[i-1];
       
    }
    vector<int> subsum;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            subsum.push_back(presum[j]-presum[i]);
        }
    }
    sort(subsum.begin(),subsum.end(),greater<int>{});

    return subsum[k-1];

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
    cout<<subsum(arr,n,k);
    
    
    
    
    return 0;
}