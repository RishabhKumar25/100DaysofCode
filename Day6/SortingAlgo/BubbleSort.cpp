/*

Bubble Sort Algorithm

Following are the steps involved in bubble sort(for sorting a given array in ascending order):

Starting with the first element(index = 0), compare the current element with the next element of the array.
If the current element is greater than the next element of the array, swap them.
If the current element is less than the next element, move to the next element. Repeat Step 1.

Hence the time complexity of Bubble Sort is O(n2).

The main advantage of Bubble Sort is the simplicity of the algorithm.

The space complexity for Bubble Sort is O(1), because only a single additional memory space is required i.e. for temp variable.

Also, the best case time complexity will be O(n), it is when the list is already sorted.

Following are the Time and Space complexity for the Bubble Sort algorithm.

Worst Case Time Complexity [ Big-O ]: O(n2)
Best Case Time Complexity [Big-omega]: O(n)
Average Time Complexity [Big-theta]: O(n2)
Space Complexity: O(1)




*/

#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){

    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

void Display(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int n,arr[20];

    cout<<"Enter number of elements in arry \n";
    cin>>n;

    cout<<"Enter elements of arry \n";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Before Sorting : \n";
    Display(arr,n);



    BubbleSort(arr,n);
    cout<<"Array After Sorting : \n";

    Display(arr,n);
}