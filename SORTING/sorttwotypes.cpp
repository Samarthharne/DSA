#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sorttwo(int arr[],int n){
    
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            j++;
            swap(arr[i],arr[j]);

        }
    }

}


int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
sorttwo(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}