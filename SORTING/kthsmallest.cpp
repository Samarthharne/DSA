#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool mycompare(int a,int b){
    return a<b;
}
int kthsmall(int arr[],int n,int k){
    sort(arr,arr+n,mycompare);
    return arr[k-1];
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int k;
cin>>k;
cout<<kthsmall(arr,n,k);
return 0;
}