//c++ program to find maximum element

#include<iostream>
using namespace std;
int main(){
   int arr[30],n;
   cout<<"Enter the number of elements : ";
   cin>>n;

   cout<<"Enter array elements : ";
   for(int i =0;i<n;i++){
       cin>>arr[i];
   }

   int max = arr[0];

   for(int i =0;i<n;i++){
       if(arr[i]>=max){
           max = arr[i];
       }
   }

   cout<<"maximum is "<<max;
return 0;
}