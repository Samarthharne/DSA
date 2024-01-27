#include <iostream>

using namespace std;
bool metabinarysearch(int arr[],int n,int key)
{
       
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
   int res=metabinarysearch(arr,n,search);
   if(res){
    cout<<"found";
   }
   else{
    cout<<"not Found";
   }

    return 0;
}