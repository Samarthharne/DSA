#include <iostream>

using namespace std;
int peak(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=h-(l+h)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])){
            return mid;
        }
        else if(mid>0 && arr[mid+1]>arr[mid]){
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
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<peak(arr,n);

    return 0;
}
