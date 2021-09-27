// Write a C++ program to check if a given string is a Palindrome or not.

#include<iostream>
using namespace std;
int main(){
   string s;
   cout<<"Enter a string : ";
   cin>>s;

   int i,j;
   int flag =1;
   for(i =0,j=s.length()-1; i<=j;i++,j--){
       if(s[i] != s[j]){
           flag =0;
       }
   }

   if(flag ==0){
       cout<<"Not a palindrome string";
   }else{
       cout<<"Palindrome String";
   }
return 0;
}