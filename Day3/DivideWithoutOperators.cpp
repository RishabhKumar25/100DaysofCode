/*Write a C++ program to divide two integers (dividend and divisor) 
without using multiplication, division and mod operator.
Dividend 7 Divisor 2
Result: 3
Dividend -17 Divisor 5
Result: -3
*/

#include<iostream>
using namespace std;
int main(){
   int dividend , divisor , res =0, count =0;
   cout<<"Enter dividend : ";
   cin>>dividend;

   cout<<endl<<"Enter divisor : ";
   cin>>divisor;

   while(abs(dividend)>=divisor){
       dividend = dividend - divisor;
       ++count;
   }

   cout<<count;
return 0;
}