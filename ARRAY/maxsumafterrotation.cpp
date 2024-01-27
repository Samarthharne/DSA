#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int maxsum(int arr[],int n){
    int currval=0;
    int sumval=0;
    for(int i=0;i<n;i++){
        sumval+=arr[i];
        currval+=i*arr[i];
    }

    int maxval=currval;
    for(int i=i;i<n;i++){
        currval=currval +sumval-i*arr[n-i];

        if(maxval<currval){
            maxval=currval;
        }
    }
    return maxval;
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsum(arr,n);
    
   


   
   
    
    
    
   
    
    
    
    return 0;
}