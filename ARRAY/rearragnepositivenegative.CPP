#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            j++;
            swap(arr[i],arr[j]);
        }
        
       
        }
         int pos=j+1;
        int neg=0;
        while(pos<n && neg<n && arr[neg]<n){
            swap(arr[pos],arr[neg]);
            pos++;
            neg+=2;


    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
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
   
    rearrange(arr,n);

    
    
    return 0;
}