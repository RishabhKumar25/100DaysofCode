/*Write a program in C++ to find the Sum of GP series. 
Sample Output:
Input the starting number of the G.P. series: 3
Input the number of items for the G.P. series: 5
Input the common ratio of G.P. series: 2
The numbers for the G.P. series:
3 6 12 24 48
The Sum of the G.P. series: 93
*/

#include<iostream>
using namespace std;
int main(){
   int n,pre;
   int a,d,sum=0;
   cout<<"Enter the first term : ";
   cin>>a;
   cout<<endl<<"Enter total items : ";
   cin>>n;
   cout<<endl<<"Enter the common ratio : ";
   cin>>d;
   
pre = a;
   for(int i=1;i<=n;i++){
       sum = sum+pre;
       cout<<pre<<" ";
       pre = pre * d;




   }
   cout<<endl<<sum;
return 0;
}