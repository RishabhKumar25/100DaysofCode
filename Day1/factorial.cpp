//program to calculate factorial

#include<iostream>
using namespace std;
int main(){
   
   int n;
   int sum=0;
   int fact=1;
   cout<<"Enter a number to calculate factorial : ";
   cin>>n;
   for(int i = 1;i<=n;i++){
      fact = fact * i;
   }
   cout<<fact;
return 0;
}






