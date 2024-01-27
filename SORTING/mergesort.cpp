#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int arr1[n1];
    int arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[m + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int h)
{
    if (l < h)
    {
        int m = h + (h - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, h);
        merge(arr, l, m, h);
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

    int l = 0;
    int h = n - 1;
    mergesort(arr, l, h);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}