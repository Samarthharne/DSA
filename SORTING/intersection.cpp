#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void intersection(int a[],int b[],int n,int m){
    int cnt=0;int i=0;int j=0;
    
    while(i<n && j<m){

        if(i<n && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
          
          i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;j++;
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
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}

intersection(a,b,n,m);


return 0;
}