#include <iostream>

using namespace std;
void reverse(int arr[],int l,int h){
    
    while(l<h){
        swap(arr[l],arr[h]);
        l++;
        h--;
        

    }
}

void leftrotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   int d;
   cin>>d;
   
    cout<<endl<<"before rotate";
    for(int i=0;i<n;i++){
    cout<<arr[i];

   }
  leftrotate(arr,n,d);

   cout<<endl<<"afteer rotate"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i];}

    return 0;
}