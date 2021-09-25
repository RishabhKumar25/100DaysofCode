/*

Write a program in C to make such a pattern like right angle triangle
 with a number which will repeat a number in a row. 

The pattern like :

 1
 22
 333
 4444

 */

#include<iostream>
using namespace std;
int main(){
   int num = 5;

   for(int i=1;i<=num;i++){
       for(int j =1;j<=i;j++){
           cout<<i<<" ";
       }
       cout<<endl;
   }
return 0;
}