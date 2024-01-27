#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void except(int arr[],int n){
    int lp[n];
    int rs[n];
    lp[0]=arr[0];
    for(int i=1;i<n;i++){
        lp[i]=lp[i-1]*arr[i];
    }
    
    
    rs[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rs[i]=rs[i+1]*arr[i];
    }
    
   
    int ps[n];
    ps[0]=rs[1];
    ps[n-1]=lp[n-2];
    for(int i=1;i<n-1;i++){
        ps[i]=lp[i-1]*rs[i+1];
    }

    for(int i=0;i<n;i++){
        cout<<ps[i]<<" ";
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
    except(arr,n);

   
   


   
   
    
    
    
   
    
    
    
    return 0;
}
