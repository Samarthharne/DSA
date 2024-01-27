 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool issum(int arr[],int n,int sum){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int e=n-1;
        int s=i=1;
        while(s<e){
            if(arr[i]+arr[s]+arr[e]==sum){
                return true;
            }
            else if(arr[i]+arr[s]+arr[e]>sum){
                e--;
            }
            else{
                s++;
            }
            
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
    cout<<issum(arr,n,sum);
   
    
    
    
   
    
    
    
    return 0;
}

