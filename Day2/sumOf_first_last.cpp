/*Write a program in C++ to find the sum of first and last digit of a number.
 
Sample Output:
Input any number: 12345
The first digit of 12345 is: 1
The last digit of 12345 is: 5
The sum of first and last digit of 12345 is: 6
*/

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number : ";
   cin>>n;

   int last_digit ;
   last_digit = n%10;
   
   while(n>=10){
       n = n/10;
   }

   cout<<n+last_digit;
return 0;
}