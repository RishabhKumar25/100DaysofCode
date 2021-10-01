/*
Following are the steps involved in insertion sort:

We start by making the second element of the given array, i.e. element at index 1, the key. The key element here is the new card that we need to add to our existing sorted set of cards(remember the example with cards above).
We compare the key element with the element(s) before it, in this case, element at index 0:
If the key element is less than the first element, we insert the key element before the first element.
If the key element is greater than the first element, then we insert it after the first element.
Then, we make the third element of the array as key and will compare it with elements to it's left and insert it at the right position.
And we go on repeating this, until the array is sorted.

Worst Case Time Complexity [ Big-O ]: O(n2)

Best Case Time Complexity [Big-omega]: O(n)

Average Time Complexity [Big-theta]: O(n2)

Space Complexity: O(1)

*/


#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){

    int i,j=0,key;

    for(i =1;i<n;i++){

        key = arr[i];
        j = i-1;

        while( j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j =j-1;
        }

        arr[j+1] = key;
    }

}

void display(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main(){

    int n,arr[20];
    cout<<"Enter number of elements : \n";
    cin>>n;

    cout<<"Enter elements : \n";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array before sorting : \n";
    display(arr,n);

    InsertionSort(arr,n);

    cout<<"Array after sorting : \n";
    display(arr,n);
   
return 0;
}