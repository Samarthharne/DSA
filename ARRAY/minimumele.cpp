#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mini(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++){
        if(res>arr[i]){
            res=arr[i];
        }

}    
return res;
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mini(arr,n);
    
    return 0;
}