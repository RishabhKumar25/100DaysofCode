/*Write a C++ program to reverse the digits of a given integer.
Sample Input: 4
Sample Output: 4

Sample Input: 123
Sample Output: 321
*/

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   int reversedNum =0 ;
   int rem =0;
    for(int i =n;n!=0;n=n/10){

        rem = n%10;
        reversedNum = reversedNum *10 + rem;

    }
   cout<<reversedNum;
return 0;
}