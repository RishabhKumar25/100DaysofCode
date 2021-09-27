 /*Write a program in C++ to find power of any number using for loop. 
Sample Output:
Input the base: 2
Input the exponent: 5
2 ^ 5 = 32
*/

#include<iostream>
using namespace std;
int main(){
   int b,e;
   int sum=1;

   cout<<"Enter the base : ";
   cin>>b;

   cout<<"Enter the exponent : ";
   cin>>e;

   for(int i=1;i<=e;i++){

       sum =  sum * b;

   }
   cout<<sum;
return 0;
}