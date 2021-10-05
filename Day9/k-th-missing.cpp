#include<iostream>
using namespace std;
int main(){
   int arr[] = {2,3,4,7,11};
   int arr1[11];
   int arr2[6];
   int k = 5;

   //op : 9
   //missing : 1 5 6 8 9 10 12 ...

for(int i=0;i<11;i++){
    arr1[i] = i;
}
int i=0;
while(i<=5){

    for(int j=i;j<11;j++ ){
        if(arr[i]==arr1[j]){
            break;
            
        }else{
            arr2[j] = arr1[j]; 

        }
    }
}


   for(int i=0;i<6;i++){
       cout<<arr2[i]<<endl;

   }
return 0;
}