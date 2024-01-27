#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void minmax(int arr[], int n)
{
    int mini, maxi;
    int i = 0;
    if (n % 2 == 0)
    {
        if (arr[0] > arr[1])
        {
            mini = arr[1];
            maxi = arr[0];
        }
        else
        {
            mini = arr[0];
            maxi = arr[1];
        }
        i = 2;
    }
    else
    {
        if (arr[0] > arr[1])
        {
            mini = arr[1];
            maxi = arr[0];
        }
        else
        {
            mini = arr[0];
            maxi = arr[1];
        }
        i = 1;
    }

    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
            }
            if (arr[i + 1] < mini)
            {
                mini = arr[i + 1];
            }
        }
        else
        {
            if (arr[i + 1] > maxi)
            {
                maxi = arr[i];
            }
            if (arr[i] < mini)
            {
                mini = arr[i + 1];
            }
        }
        i += 2;
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
        return 0;
    }