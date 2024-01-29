#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void common(int a[],int b[],int c[],int n){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<n && k<n){
        if(a[i]==b[j] && b[j]==c[k]){
            cout<<a[i];
            i++;
            j++;
            k++;
            
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else {
            k++;
        }
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
int b[n];
int c[n];
for(int i=0;i<n;i++){
cin>>b[i];
}
for(int i=0;i<n;i++){
cin>>c[i];
}

common(a,b,c,n);
return 0;
}