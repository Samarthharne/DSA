#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lel(int arr[],int n){
    int leftarr[n];
    // int rightarr[n];
    leftarr[0]=arr[0];
    for(int i=1;i<n;i++){
        leftarr[i]=max(arr[i],leftarr[i-1]);
    }
    int rig=INT_MAX;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>leftarr[i]  &&  rig>arr[i]){
            return arr[i];

        }
        else{
           rig=min(rig,arr[i]);
        }
    }

    return -1;


}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}