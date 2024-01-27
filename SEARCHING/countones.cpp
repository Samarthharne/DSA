#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countones(int arr[], int n)
{
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] < 1)
        {
            h = mid - 1;
        }
        else if (arr[mid] > 1)
        {
            l = mid + 1;
        }
        else
        {
            if (arr[mid] == n - 1 || arr[mid + 1] != 1)
            {
                return mid + 1;
            }
            else
            {
                l = mid + 1;
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
    cout<<countones(arr,n);
    return 0;
}