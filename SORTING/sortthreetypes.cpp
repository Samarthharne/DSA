#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortthree(int arr[],int n){
    int j=0;
    int mid=n-1;
    for(int i=0;i<mid;i++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
        }
        if(arr[i]==1){
            continue;
        }
        if(arr[i]==2){
            swap(arr[i],arr[mid]);
            mid--;
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


sortthree(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}