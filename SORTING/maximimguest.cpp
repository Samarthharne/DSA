#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int guest(int arr[],int dept[],int n){
    int i=1;
    int cnt=1;
    int res=1;
    int j=0;
    sort(arr,arr+n);
    sort(dept,dept+n);
    while(i<n && j<n){
        if(arr[i]<=dept[j]){
            cnt++;
            i++;
        }
        else{
            cnt--;
            j++;
            
        }
        res=max(res,cnt);
    }
    return res;
}


int main()
{
int n;
cin>>n;
int arr[n];int dept[n];
for(int i=0;i<n;i++){
cin>>arr[i];
cin>>dept[i];
}


cout<<guest(arr,dept,n);
return 0;
}