/*Write a C++ program to count all the words in a given string. 
Example:
Sample Input: Python
Sample Output: number of words -> 1
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
   string s;
   int count =0;
   cout<<"Enter a string ";
   getline(cin,s);

   for(int i = 0;i<s.length();i++){

       if(s[i] == ' ')
       count++;
   }
   cout<<count+1;
return 0;
}