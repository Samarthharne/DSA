#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void generateallsubsets(vector<int> arr,vector<int> &temp,int index,int n){
    if(index==n){
        
        for(auto it : temp){
            cout<<it<<" ";
        }
        if(temp.size()==0){
            cout<<"{}";
        }
        cout<<endl;
    }
    else{
    temp.push_back(arr[index]);
    generateallsubsets(arr,temp,index+1,n);
    temp.pop_back();
    generateallsubsets(arr,temp,index+1,n);
}

}
int main()
{ 
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr.push_back(j);
    }
    vector<int> temp;
    generateallsubsets(arr,temp,0,arr.size());
    
    
    return 0;
}