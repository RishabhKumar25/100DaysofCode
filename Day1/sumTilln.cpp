//  Write a program in C++ to display n terms of natural number and their sum.

#include<iostream>
using namespace std;
int main(){
   int n,sum=0;
   cin>>n;
   for(int i =1;i<=n;i++)
   {
       cout<<i<<endl;
       sum+=i;
   }
   cout<<sum;
return 0;
}