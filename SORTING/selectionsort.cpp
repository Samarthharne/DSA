#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){
    int temp[n];
    for(int i=0;i<n-1;i++){
        int min_val=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_val]){
               min_val=j;
            }
            

        }
        swap(arr[i],arr[min_val]);
        
    }

   
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionsort(arr,n);

for(int i=0;i<n;i++){
cout<<arr[i];
}
    return 0;
}