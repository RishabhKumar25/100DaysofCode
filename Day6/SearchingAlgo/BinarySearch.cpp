/*

binary search algorithm

Following are the steps of implementation that we will be following:

Start with the middle element:
If the target value is equal to the middle element of the array, then return the index of the middle element.
If not, then compare the middle element with the target value,
If the target value is greater than the number in the middle index, then pick the elements to the right of the middle index, and start with Step 1.
If the target value is less than the number in the middle index, then pick the elements to the left of the middle index, and start with Step 1.
When a match is found, return the index of the element matched.
If no match is found, then return -1

Time Complexity of Binary Search O(log n)

We need sorted elements to perform binary search



*/

#include<iostream>
using namespace std;

    int flag =0;

int BinarySearch(int arr[],int n,int target){

    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;

    for(int i=s;i<=e;i++){
        if(arr[mid]==target){
            flag =1 ;
            return mid;
        }else if(arr[mid]>target){
            e = mid;
            mid = (s+e)/2;

        }else if(arr[mid]<target){
            s = mid;
            mid = (s+e)/2;
        }
        
    }


}

int main(){
    int n,k,arr[20];

    cout<<"Enter number of elements : \n";
    cin>>n;

    cout<<"Enter array elements in sorted order :\n";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target element :\n";
    cin>>k;
    int res = BinarySearch(arr,n,k);
    if(flag ==1){
        cout<<"Element found at "<<res<<endl;
    }else {
        cout<<"Element not found ";
    }
    
}