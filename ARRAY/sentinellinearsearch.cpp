#include <iostream>

using namespace std;

bool sentinel(int arr[],int n,int key){
    int last=arr[n-1];
    arr[n-1]=key;
    int i=0;
    while(arr[i]!=key){
        i++;
        arr[n-1]=last;
        if(i<n-1 || arr[n-1]==key){
            return true;
        }
    }
    return false;

}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   int search;
   cin>>search;

   int res=sentinel(arr,n,search);
   if(res){
    cout<<"found";
   }
   else{
    cout<<"not Found";
   }

    return 0;
}