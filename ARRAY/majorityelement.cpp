 #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maj(int arr[],int n){
    int res=arr[0];
    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]==res){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt==0){
            res=arr[i];
            cnt=1;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(res==arr[i]){
            cnt++;
        }
        if(cnt>n/2)
        {
            return res;
        }
    }
    return -1;

}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maj(arr,n);
   
    
    
    
   
    
    
    
    return 0;
}

