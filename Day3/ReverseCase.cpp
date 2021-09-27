/*Write a C++ program to change the case (lower to upper and upper to lower cases) 
of each character of a given string. 
Example:
Sample Input: Pythpn
Sample Output: pYTHON
*/

#include<iostream>
using namespace std;
int main(){
   string s;
   cout<<"Enter a string ";
   cin>>s;
    int i =0;
   while(i<s.length()){
       if(isupper(s[i])){
          s[i] =  tolower(s[i]);
       }else{
          s[i] = toupper(s[i]);
       }

       i++;

   }

   cout<<s;
return 0;
}