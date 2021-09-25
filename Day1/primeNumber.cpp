//code to check for prime number

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number to check for prime number : ";
   cin>>n;
   int flag =0;

   for(int i =2;i<=n/2;i++){
       if(n%i == 0){
           flag = 1;
           break;
       }
   }

   if(flag ==1 ){
       cout<<"Not a prime number";
   }else{
       cout<<"prime number";
   }
return 0;
}