/*

Write a program in C++ to find LCM of any two numbers using HCF. 
Sample Output:
Input 1st number for LCM: 15
Input 2nd number for LCM: 25
The LCM of 15 and 25 is: 75

*/

#include<iostream>
using namespace std;
int main(){

    int n1,n2,i,j,hcf,lcm;

    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;

    j = (n1<n2)?n1:n2;

    for(i =1;i<=j;i++){
        if(n1 % i==0 && n2%i==0){
            hcf =i;
        }
    }

   lcm =  (n1 * n2) / hcf;
   cout<<"HCF is : "<<hcf<<endl;
   cout<<"LCM is : "<<lcm;
   
return 0;
}