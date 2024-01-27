#include <iostream>

using namespace std;
bool found(int arr[],int n,int search){
    for(int i=0;i<n;i++){
        if(arr[i]==search){
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
   int res=found(arr,n,search);
   if(res){
    cout<<"found";
   }
   else{
    cout<<"not Found";
   }

    return 0;
}
