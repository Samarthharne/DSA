#include <iostream>

using namespace std;
void reverse(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
        swap(arr[l],arr[h]);
        l++;
        h--;
        

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
   cout<<endl<<"before reverse";
    for(int i=0;i<n;i++){
    cout<<arr[i];

   }
   reverse(arr,n);

   cout<<endl<<"afteer reverse"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i];

   }
   
   

  

    return 0;
}