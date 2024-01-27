 #include <iostream>
#include <bits/stdc++.h>
using namespace std;


int lar(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++){
        if(res<arr[i]){
            res=arr[i];
        }

}    
return res;
}

int mini(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++){
        if(res>arr[i]){
            res=arr[i];
        }

}    
return res;
}

int kincrement(int arr[],int n,int k){
     int maxa=lar(arr,n);
     int mina=mini(arr,n);

     int d=(maxa-mina)%k;
     int cnt=0;
     for(int i=0;i<n;i++){
        int res=(maxa-arr[i])/k;
        cnt+=res;
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
    int k;
    cin>>k;
    cout<<kincrement(arr,n,k);
   
   
    
    
    
   
    
    
    
    return 0;
}