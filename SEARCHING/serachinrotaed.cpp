#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int esr(int arr[], int n, int x)
{
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if(arr[mid]==x){
            return mid;
        }
        else if (arr[l] < arr[mid])
        {
            if (arr[mid] > x  && arr[l]<=x)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        else   
        {
            if (arr[mid] < x && arr[h]>=x)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
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
    int x;
    cin >> x;
    cout << esr(arr, n, x);
    return 0;
}