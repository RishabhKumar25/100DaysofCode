//write a program to remove all the duplicates from array



#include<iostream>
using namespace std;

void bubble_sort(int a[],int n){
    int temp;

    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] =temp;

            }
        }
    }

}

int remove_dupli(int a[],int n){

    int temp[20];
    int j =0;

    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
        temp[j++] = a[i];
    }

    temp[j++] = a[n-1];

    for(int i=0;i<j;i++){
        a[i] = temp[i];
    } 

    return j;

}


int main(){

    int a[20],n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
   int size = remove_dupli(a,n);
   for(int i =0;i<size;i++){
       cout<<a[i];
   }
   
return 0;
}