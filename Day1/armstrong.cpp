//program to check for armstrong

#include<iostream>
using namespace std;
int main(){
   int n;
   int r;
   int sum=0;
   cout<<"Enter a number to check for armstrong number : ";
   cin>>n;
   int temp = n;
  
  for(int i =n;n!=0;n=n/10){

      r = n%10;
      sum += (r*r*r);

  }

  if(sum == temp){
      cout<<"Armstrong Number";
  }else{
      cout<<"Not a armstrong number";
  }
  
return 0;
}