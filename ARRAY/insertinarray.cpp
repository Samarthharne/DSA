#include <iostream>

using namespace std;
void insert(int arr[],int n,int ele,int pos){
    for(int i=n;i>pos-1;i--){
        arr[i]=arr[i-1];
        
    }
    arr[pos-1]=ele;
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   int ele,pos;
   cin>>ele>>pos;
    cout<<endl<<"before ";
    for(int i=0;i<n;i++){
    cout<<arr[i];

   }
  insert(arr,n,ele,pos);

   cout<<endl<<"afteer insert"<<endl;
    for(int i=0;i<n+1;i++){
    cout<<arr[i];}


   
    return 0;
}