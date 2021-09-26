/*Write a program in C++ to find out the sum of an A.P. series. Go to the editor
Sample Output:
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 8
Input the common difference of A.P. series: 5
The Sum of the A.P. series are :
1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148
*/

#include<iostream>
using namespace std;
int main(){
   int a,n,d,sum=0;
   int pre =0;
   cout<<"Enter first term : ";
   cin>>a;
   cout<<endl<<"Enter total number of terms : ";
   cin>>n;
   cout<<endl<<"Enter common difference : ";
   cin>>d;

pre = a;
   for(int i =1;i<=n;i++){
       sum = sum+pre;
       cout<<pre<<" ";
       pre = pre+d;
       

   }
  cout<<sum;
return 0;
}