//find k largest

#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    int temp;
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] =temp;
            }
        }
    }
}

void k_largest(int arr[],int n,int k){

    cout<<k<<"  Largest element is " <<arr[n-k];
    
}


int main(){
   int n;
   int arr[20];
   int k;

   cout<<"Enter number of elements : ";
   cin>>n;
   cout<<"Enter array elements : ";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   cout<<"Enter the value of k : ";
   cin>>k;

   bubble_sort(arr,n);
   k_largest(arr,n,k);
return 0;
}