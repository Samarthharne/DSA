#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sq(int arr[],int n,int key){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=h-(l+h)/2;
        int sq=mid*mid;
        if(sq==key){
            return mid;

        }
        else if(sq>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    return -1;
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