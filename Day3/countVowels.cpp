/*Write a C++ program to count all the vowels in a given string. Go to the editor
Example:
Sample Input: eagerer
Sample output: number of vowels -> 4
*/

#include<iostream>
using namespace std;
int main(){
   int count =0;
   string text;

   cout<<"Enter a string : ";
   cin>>text;

   for(int i=0;i<text.length();i++){

      
if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
      ++count;
    if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
      ++count;       

   }
   cout<<count;
return 0;
}
