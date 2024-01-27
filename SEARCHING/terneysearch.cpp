#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int treney(int arr[],int l,int h,int key){
    int l1=l+(h-1)/3;
    int l2=h-(h-l)/3;
    if(arr[l1]==key){
        return l1;
    }
    if(arr[l2]==key){
        return l1;
    }
    if(key<arr[l1]){
        return treney(arr,l,l1-1,key);
    }
    else if(key >arr[l1]  && key<arr[l2]){
        return treney(arr,l1+1,l2-1,key);
    }
    else if(key>arr[l2]){
        return treney(arr,l2+1,h,key);
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
cout<<treney(arr,0,n-1,key);
return 0;
}