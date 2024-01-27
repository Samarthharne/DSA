#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void construct(int arr[],int pair[],int n,int k){
    arr[0]=(pair[0]+pair[1]-pair[n-1])/2;
    for(int i=1;i<k;i++){
        arr[i]=pair[i-1]+arr[0];
    }
    
}
int main()
{ 
    int n;
    cin>>n;
    int pair[n];
    for(int i=0;i<n;i++){
        cin>>pair[i];
    }
    int k;
    cin>>k;
    int arr[k];
   
   


   
   
    
    
    
   
    
    
    
    return 0;
}