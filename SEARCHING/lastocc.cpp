#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lastocc(int arr[],int n,int key){
    int l=0;
    int h=n-1;
while(l<=h){
    int mid=h-(l+h)/2;
    if(arr[mid]>key){
        h=mid-1;
    }
    else if(arr[mid]<key){
        l=mid+1;
    }
    else{
        if(mid==n-1 || arr[mid+1]!=arr[mid]){
            return mid+1;
        }
        else{
            l=mid+1;
        }
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
cout<<lastocc(arr,n,key);
return 0;
}