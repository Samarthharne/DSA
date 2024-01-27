 #include <iostream>
#include <bits/stdc++.h>
using namespace std;


int mo(int arr[],int n,int l,int r){
    int sum=0;
     for(int i=l;i<=r;i++){
         sum+=arr[i];   
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
    int l,r;
    cin>>l>>r;
    cout<<mo(arr,n,l,r);


   
   
    
    
    
   
    
    
    
    return 0;
}