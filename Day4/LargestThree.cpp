//c++ code to find largest three elements in array

#include<iostream>
using namespace std;
int main(){
   
   int n,arr[20];
   int first =0,second =0,third=0;
   cout<<"Enter number of elments in array :";
   cin>>n;

   cout<<"Enter array elements : ";
   for(int i=0;i<n;i++){
       cin>>arr[i];

       if(arr[i]>first){
           third = second;
           second = first;
           first = arr[i];
       }else if(arr[i]>second){
           third = second;
           second = arr[i];
       }else{
           third = arr[i];
       }
   }

   cout<<first<<second<<third;




return 0;
}