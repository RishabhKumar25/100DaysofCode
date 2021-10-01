/*

Starting from the first element, we search the smallest element in the array, and replace it with the element in the first position.
We then move on to the second position, and look for smallest element present in the subarray, starting from index 1, till the last index.
We replace the element at the second position in the original array, or we can say at the first position in the subarray, with the second smallest element.
This is repeated, until the array is completely sorted.

Worst Case Time Complexity [ Big-O ]: O(n2)

Best Case Time Complexity [Big-omega]: O(n2)

Average Time Complexity [Big-theta]: O(n2)
*/



#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){

    int temp;
   

    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }

        if(min!=i){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] =temp;
        }

    }

}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
    }

}


int main(){

    int n,arr[10];
    cout<<"Enter number of elements : \n";
    cin>>n;
    cout<<"Enter elements of array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array before sorting : \n";
    display(arr,n);

    SelectionSort(arr,n);

    cout<<"Array after sorting : \n";
    display(arr,n);


   
return 0;
}