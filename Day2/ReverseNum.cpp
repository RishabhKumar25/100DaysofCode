 /* Write a program in C++ to display the number in reverse order. 
Sample Output:
Input a number: 12345
The number in reverse order is : 54321
*/

#include<iostream>
using namespace std;
int main(){
   int num;
   int t,r;
   int sum=0;
   cout<<"Enter a number : ";
   cin>>num;
 for (t = num; num != 0; num = num / 10) 
    {
        r = num % 10;
        sum = sum * 10 + r;
    }
  cout<<sum;
return 0;
}