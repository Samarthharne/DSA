#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void s01(int arr[],int n){
    int j=0;
    int l=n-1;
    for(int i=0;i<n && i<=l;){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
        else if(arr[i]==2){
             swap(arr[i],arr[l]);
        l--;
    }
    else{
       i++;
    }
        
        

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
    s01(arr,n);
    
    
    
   
    
    
    
    return 0;
}

