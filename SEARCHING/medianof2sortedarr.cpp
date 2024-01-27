#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int median(int arr1[],int n1,int arr2[],int n2){
    int s=0;
    int e=n1;
    while(s<=e){
        int i1=(s+e)/2;
        int i2=(n1+n2+1)/2+i1;
        int mini1=(i1==n1)?INT_MAX:arr1[i1];
        int maxi1=(i1==0)?INT_MIN:arr1[i1-1];
        int mini2=(i2==n2)?INT_MAX:arr2[i2];
        int maxi2=(i2==0)?INT_MIN:arr2[i2-1];

        if(maxi1<=mini2 && maxi2<=mini1){
            if((n1+n1)%2==0){
                return (max(maxi1,maxi2)+min(mini1,mini2));
            }
            else{
                return max(maxi1,maxi2);
            }
        }
        else{
            if(maxi1>mini2){
                e=1-1;
            }
            else{
                s=i1+1;
            }
        }
        


    }
    return -1;
}

int main()
{
int n1;
cin>>n1;
int arr1[n1];
for(int i=0;i<n1;i++){
cin>>arr1[i];
}

int n2;
cin>>n2;
int arr2[n2];
for(int i=0;i<n2;i++){
    cin>>arr2[n2];
}

cout<<median(arr1,n1,arr2,n2);

return 0;
}