 /*
 Write a program in C to display the pattern like right angle triangle 
 using an asterisk. 

The pattern like :

*
**
***
****

*/

#include<iostream>
using namespace std;
int main(){

    int n = 5;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
   
return 0;
}