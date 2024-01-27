#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{ 
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int len=sqrt(len)+1;
    vector<int> b(len,INT_MAX);
    for(int i=0;i<n;i++){
        b[i/len]=min(b[i/len],v[i]);
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=INT_MAX;
        for(int i=l;i<=r;i++){
            if(i%len==0 && i+len-1<=r){
                ans=min(ans,b[i/len]);
            }
            else{
                ans=min(ans,b[i/len]);
            }
            
            
        }
        cout<<ans<<endl;
    }
   


   
   
    
    
    
   
    
    
    
    return 0;
}