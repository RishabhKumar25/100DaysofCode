/*
Write a program in C++ to find the sum of the series 
1 +11 + 111 + 1111 + .. n terms. Go to the editor
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum of the series is: 12345
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    int prev =1;
    cout<<"Enter the number till which you want to calculate the sum";
    cin>>n;
    int sum =0;
    for(int i =1;i<=n;i++){
        // sum = sum + (pow(10,i));
        // prev = prev+sum;
        sum = sum+prev;
        prev =(prev*10) +1;

    }
    cout<<sum;
   
return 0;
}