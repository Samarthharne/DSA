#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct interval{
    int s,e;
};

bool mycampare(interval a,interval b){
    return a.s<b.s;
}



void mergeoverlapping(interval arr[],int n){
    sort(arr,arr+n,mycampare);
    int index=0;
    for(int i=1;i<n;i++){
        if(arr[index].e>=arr[i].s){
            arr[index].e=max(arr[index].e,arr[i].e);
        }
        else{
            index++;
            arr[index]=arr[i];
        }
    }
    for(int i=0;i<=index;i++){
        cout<<arr[i].s<<" "<<arr[i].e<<endl;
    }
}


int main()
{
int n;
cin>>n;
interval arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i].s>>arr[i].e;
}
mergeoverlapping(arr,n);
return 0;
}