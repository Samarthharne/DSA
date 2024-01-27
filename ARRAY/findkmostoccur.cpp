#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
    if(p1.second == p2.second){
        return p1.first>p2.first;

    }
    return p1.second>p2.second;
}

void most(int arr[],int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    vector<pair<int,int>> freq(m.begin(),m.end());
    sort(freq.begin(),freq.end(),compare);
    for(int i=0;i<k;i++){
        cout<<freq[i].first<<" ";
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
    int k;
    cin>>k;
    most(arr,n,k);


   
   
    
    
    
   
    
    
    
    return 0;
}