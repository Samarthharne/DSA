#include <iostream>
#include <bits/stdc++.h>
using namespace std;



bool isPair(int arr[],int n,int sum,int si){
    int l=si;
    int h=n-1;
    while(l<=h){
        if(arr[l]+arr[h]==sum){
            return true;
        }
        else if(arr[l]+arr[h]<sum){
            l++;
        }
        else{
            h--;
        }
    }
    return false;
    
}


bool istriplet(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        if(isPair(arr,n,sum-arr[i],i+1)){
            return true;
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
return 0;
}