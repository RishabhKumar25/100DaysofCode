//wap to print even elements in an array

#include<iostream>
using namespace std;
int main(){
   int a[20],n;
   cout<<"Enter number of elements : ";
   cin>>n;

   cout<<"Enter elements of array : ";
   for(int i =0;i<n;i++){
       cin>>a[i];
       
   }

   for(int i =0;i<n;i++){
       
       if(a[i]%2==0){
           cout<<a[i]<<endl;
       }
   }
return 0;
}