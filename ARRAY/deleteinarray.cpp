#include <iostream>

using namespace std;
void delet(int arr[],int n,int pos){
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
        
    }
    
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   int pos;
   cin>>pos;
    cout<<endl<<"before ";
    for(int i=0;i<n;i++){
    cout<<arr[i];

   }
  delet(arr,n,pos);

   cout<<endl<<"afteer delete"<<endl;
    for(int i=0;i<n-1;i++){
    cout<<arr[i];}


   
    return 0;
}