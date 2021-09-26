 /*Write a program in C++ to find the length of a string without
  using the library function.
Sample Output:
Input a string: w3resource.com
The string contains 14 number of characters.
So, the length of the string w3resource.com is:14
*/
#include<iostream>
using namespace std;
int main(){
   char str[50];
   cout<<"Enter the string : ";
   cin>>str;

   int len =0;

   for(int i=0;str[i]!= '\0';i++ ){
       len++;

   }
   cout<<len;
return 0;
}