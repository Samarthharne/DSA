#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary(int arr[],int l,int h,int key){
   
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==key){
            return mid+1;

        }
        else if(arr[mid]>key){
            return binary(arr,0,mid-1,key);
        }
        else{
            return binary(arr,mid+1,h,key);
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
cout<<binary(arr,0,n-1,key);
return 0;
}