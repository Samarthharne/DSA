#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void generateallsubsets(vector<int> arr,int s,int e){
    if(e==arr.size()){
        return ;
    }
    else if(s>e){
        generateallsubsets(arr,0,e+1);
    }
    else{
        cout<<endl<<"[";
        for(int i=s;i<e+1;i++){
            cout<<arr[i]<<" ";

        }
        cout<<"]"<<endl;
        generateallsubsets(arr,s+1,e);
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
    generateallsubsets(arr,0,0);
    
    
    return 0;
}