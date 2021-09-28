//find second largest

#include<iostream>
using namespace std;
int main(){
   int n;
   int first ,second;
   int arr[20];

   cout<<"Enter number of elements : ";
   cin>>n;
   cout<<"Enter array elements : ";
   for(int i =0;i<n;i++){
       cin>>arr[i];

       if(arr[i]>first){
           second = first;
           first = arr[i];
       }else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }

   }

   cout<<"Second largest element : "<<second;
return 0;
}