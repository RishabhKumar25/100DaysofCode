/*
Write a program in C to display the 
pattern like right angle triangle with a number.

The pattern like :

1
12
123
1234

*/

#include<iostream>
using namespace std;
int main(){
   int num = 5;
   for(int i =1;i<=num;i++){
       for(int j =1;j<=i;j++){
           cout<<j<<" ";
       }

       cout<<endl;
   }
return 0;
}