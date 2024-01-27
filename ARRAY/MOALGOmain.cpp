#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int rootN;
struct Q{
    int idx,l,r;
};
Q q[N];
bool compare(Q q1,Q q2){
    if(q1.l/rootN==q2.l/rootN){
        return q1.r>q2.r;
    }
    
    return q1.l/rootN<q2.l/rootN;
}

int main()
{ 
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rootN=sqrtl(n);
    int qur;
    cin>>qur;
    vector<int > ansM(qur);
    for(int i=0;i<qur;i++){
        int l,r;
        cin>>l;
        cin>>r;
        q[i].l=l;
        q[i].r=r;
        q[i].idx=i;

    } 

    sort(q,q+qur,compare);
     int curr_l=0;
        int curr_r=-1;
        int l;
        int r;
        int ans=0;
    for(int i=0;i<qur;i++){
       l=q[i].l;
       r=q[i].r;
       l--;
       r--;
        while(curr_l<l){
           ans-=a[curr_l];
           curr_l++;
        }
        while(r>curr_r){
            
            curr_r++;ans+=a[curr_r];
            
        }
        while(curr_l>l){
            curr_l--;
            ans+=a[curr_l];
        }
        while(curr_r>r){
           
            ans-=a[curr_r];
             curr_r--;
        }
        ansM[q[i].idx]=ans;
        
    }
    for(int i=0;i<qur;i++){
        cout<<ansM[i]<<endl;
    }

   



   
   
    
    
    
   
    
    
    
    return 0;
}