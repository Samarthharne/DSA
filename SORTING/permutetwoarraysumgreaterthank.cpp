#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool mycompare(int a,int b){
    return a>b;
}
bool permute2(int a[],int b[],int n,int k){
    sort(a,a+n);
    sort(b,b+n,mycompare);
    for(int i=0;i<n;i++){
        if(a[i]+b[i]<k)
        {
            return false;
        }
        
         
        
    }
    return true;
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
for(int i=0;i<n;i++){
    cin>>b[i];
}
int k;
cin>>k;
cout<<permute2(a,b,n,k);
return 0;
}