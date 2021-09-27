/* Write a C++ program to change every letter in a given string with the letter following 
it in the alphabet (ie. a becomes b, p becomes q, z becomes a). Go to the editor
Example:
Sample Input: w3resource
Sample Output: x3sftpvsdf
*/

#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    cout<<"Enter a string ";
    cin>>s;

    for(int i=0;i<s.length();i++){

        if(s[i] == int(122)){
            s[i] = (int)97;
        }

        else if(s[i] == int(90)){
            s[i] = (int)65;
        }

        else if( isalpha(s[i])){
            s[i]+=1;  
        }
    }

    cout<<s;
   
return 0;
}