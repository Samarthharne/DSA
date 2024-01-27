#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary(int arr[],int n,int key){
    int l=0;int h=n-1;
    while(l<h){
        int mid=l+(h-l)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    return -1;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int key;
cin>>key;
cout<<binary(arr,n,key);
return 0;
}

