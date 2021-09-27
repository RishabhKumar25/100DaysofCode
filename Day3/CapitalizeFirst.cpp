/*Write a C++ program to capitalize the first letter of each word of a given string.
 Words must be separated by only one space. 
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
   string s;
   cout<<"Enter a string : ";
   getline(cin,s);
   s[0]-=32;
   for(int i =0;i<s.length();i++){
       
       if(s[i] == int(32)){
           s[i+1] = s[i+1]-32;
       }

   }
   cout<<s;
return 0;
}