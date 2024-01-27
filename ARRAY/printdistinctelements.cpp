#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void printdistinctelements(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
}
    for(auto it : s){
        cout<<it<<" ";
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
  printdistinctelements(arr,n);
    
    
    return 0;
}