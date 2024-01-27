#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int inif(int arr[],int x){
   int i=0;
   if(arr[i]==x){
    return 0;
   }
   while(arr[i]<x){
    i=i*2;
   }
   if(arr[i]==x){
    return i;
   }

   return binary_search(arr,x,i/2+1,i);
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
    return 0;
}