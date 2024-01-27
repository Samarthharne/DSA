#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot =arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],pivot);

        }
    }
    swap(arr[i+1],pivot);
    return i+1;

}


void quicksort(int arr[],int l,int h){
    if(l<h){
        int pivotindex=partition(arr,l,h);
        quicksort(arr,l,pivotindex-1);
        quicksort(arr,pivotindex+1,h);
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
return 0;
}