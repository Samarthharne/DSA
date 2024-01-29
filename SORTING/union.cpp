#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void unionn(int a[],int b[],int n,int m){
    int i=0;int j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;j++;
        }
        else if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
        while(i<n){
            cout<<a[i]<<" ";
            i++;
        }
        while(j<m){
            cout<<b[j]<<" ";
            j++;
        }
    
}

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}

unionn(a,b,n,m);


return 0;
}