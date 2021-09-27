/*Write a C++ program to calculate x raised to the power n (xn).
Sample Input: x = 7.0
n = 2
Sample Output: 49
*/

#include<iostream>
using namespace std;
int main(){
   int b,p;
   int res =1;
   cout<<"Enter base : ";
   cin>>b;
   cout<<"Enter power : ";
   cin>>p;

   for(int i=1;i<=p;i++){
       res = res*b;
   }
   cout<<res;


return 0;
}