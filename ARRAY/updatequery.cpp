#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void update(int arr[],int l,int r,int x,int n){
    for(int i=l;i<r+1;i++){
        arr[i]+=x;
    }


}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    update(arr,0,1,10,n);
    print(arr,n);
    
    
   
    
    
    
    return 0;
}