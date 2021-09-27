/* Write a C++ program to reverse a given string.
Example:
Sample Input: w3resource
Sample Output: ecruoser3w
*/

#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    char t;
    cout<<"Enter a string : ";
    cin>>s;

    for(int i=0,j=s.length()-1 ;i<=j;i++,j--){

        t = s[i];
        s[i] =s[j];
        s[j] =t;

    }

    cout<<s;
   
return 0;
}