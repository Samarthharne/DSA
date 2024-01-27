#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxele(int a,int b,int c){
    return max(max(a,b),c);
}
int minele(int a,int b,int c){
    return min(min(a,b),c);
}
void samllestriplet(int arr1[],int arr2[],int arr3[],int n){
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    sort(arr3,arr3+n);
    int i=0;
    int j=0;
    int k=0;

    int res_min,res_max,res_mid;
    int diff=INT_MAX;
    while(i<n && j<n && k<n){
    int sum=arr1[i]+arr2[j]+arr3[k];
    int min=minele(arr1[i],arr2[j],arr3[k]);
    int max=maxele(arr1[i],arr2[j],arr3[k]);
    if(min==arr1[i]){
        i++;
    }
    else if(min==arr2[j]){
        j++;
    }
    else{
        k++;
    }

    if(diff>max-min){
        diff=max-min;
        res_max=max;
        res_min=min;
        res_mid=sum-(max+min);
}
    }
    cout<<res_max<<" "<<res_mid<<" "<<res_min<<endl;

}

int main()
{ 
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i]>>arr2[i]>>arr3[i];
    }
    samllestriplet(arr1,arr2,arr3,n);
   
   


   
   
    
    
    
   
    
    
    
    return 0;
}