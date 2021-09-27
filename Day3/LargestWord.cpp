/*Write a C++ program to find the largest word in a given string. Go to the editor
Example:
Sample Input: C++ is a general-purpose programming language.
Sample Output: programming
Click me to see the sample solution
*/

#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    cout<<"Enter a string";
    getline(cin,s);
    int count =0;
    int prevCount =0;

    for(int i =0;i<s.length();i++){
        
        if(s[i]==int(32)){
            if(count > prevCount){
                prevCount = count;
            };
            break;
        }
    }
   
return 0;
}