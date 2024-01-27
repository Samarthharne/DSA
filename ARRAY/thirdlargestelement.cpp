#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int trdlar(int arr[],int n){
    int lar=arr[0];
    int seclar=-1;
    int trd=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>lar){
            trd=seclar;
            seclar=lar;
            lar=arr[i];
        }
        if(arr[i]!=lar && arr[i]>seclar){
            trd=seclar;
            seclar=arr[i];
        }
        if(arr[i]!=seclar && (arr[i]>trd && arr[i]<seclar)){
            trd=arr[i];
        }
    }
    return trd;
}
  int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<trdlar(arr,n);
    
    return 0;
}