/*
Write a program in C to make such a pattern like right angle triangle 
with number increased by 1. 

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10
   */

  #include<iostream>
  using namespace std;
  int main(){
     int num=4;
     int k=1;
     for(int i =1;i<=num;i++){
         for(int j=1;j<=i;j++){
             cout<<k++;
         }

         cout<<endl;
     }
  return 0;
  }