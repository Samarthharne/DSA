#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N=2e5+2;
int rootN;
struct Q{
    int l,r,idx;
    };
Q q[N];

bool compare( Q q1,Q q2){
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
    int qur;
    cin>>qur;
    rootN=sqrtl(n);
    for(int i=0;i<qur;i++){
        int l,r;
        cin>>l>>r;
        q[i].l=l;
        q[i].r=r;
        q[i].idx=i;

}
sort(q,q+qur,compare);
vector<int> ansM(qur);
int curr_l=0;int curr_r=-1;
int ans=0;
int l,r;
vector<int> freq(10*N,0);
for(int i=0;i<qur;i++){
  l=q[i].l;
  r=q[i].r;
  l--;r--;
  while(curr_r<r){
    curr_r++;
    freq[a[curr_r]]++;
    if(freq[a[curr_r]]==1){
        ans+=1;
    }



  }
  while(curr_l>l){

    curr_r--;
    freq[a[curr_r]]++;
    if(freq[a[curr_r]]==1){
        ans+=1;
    }
}


   while(curr_l<l){
    freq[a[curr_l]]--;
    curr_l++;
    if(freq[a[curr_l]]==0){
        ans-=1;
   }
   }

   while(curr_r>r){
    freq[a[curr_r]]--;
    curr_r--;
    if(freq[a[curr_r]]==0){
        ans-=1;
   }
   }
   ansM[q[i].idx]=ans;
}

for(int i=0;i<n;i++){
    cout<<ansM[i];
}

    
   
   
    
    
    
   
    
    
    
    return 0;
}