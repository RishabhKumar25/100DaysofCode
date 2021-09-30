/*

Linear Search algo

Traverse the array using a for loop.
In every iteration, compare the target value with the current value of the array.
If the values match, return the current index of the array.
If the values do not match, move on to the next array element.
If no match is found, return -1.


time complexity of Linear search algorithm is O(n)



*/

#include<iostream>
using namespace std;
    int flag =0;


void LinearSearch(int arr[],int n,int target){

    for(int i =0;i<n;i++){
        if(arr[i]==target){
            flag =1;
        }
    }

}

int main(){
    int n,k,arr[20];
    cout<<"Enter number of elements : \n";
    cin>>n;

    cout<<"Enter array elements : \n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element you want to search : \n";
    cin>>k;

     LinearSearch(arr,n,k);
    if(flag==1){
        cout<<"Element Found";
    }else{
        cout<<"Element Not Found";
    }
}