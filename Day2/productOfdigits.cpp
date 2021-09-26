/*Write a program in C++ to calculate product of digits of any number. 
Sample Output:
Input a number: 3456
The product of digits of 3456 is: 360
*/

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   int prod =1;

   while(n>=1){
       prod = prod * (n%10);
      n=n/10;
   }
   cout<<prod;
return 0;
}