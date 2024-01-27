#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int key){
    int l=0;
    int h=n-1;
while(l<=h){
    int mid=h-(l+h)/2;
    if(arr[mid]>key){
        h=mid-1;
    }
    else if{
        if(arr[mid]<key){
            l=mid+1;
        }
    }
    else{
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid+1;
        }
        else{
            h=mid-1;
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
cout<<firstocc(arr,n,key);
return 0;
}