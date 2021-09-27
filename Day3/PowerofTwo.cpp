/*Write a C++ program to check whether a given number is a power of two or not.
Is 8 is power of 2: True
Is 256 is power of 2: True
Is 124 is power of 2: False
*/

#include<iostream>
#include<math.h>
#define INT_MAX 2147483647

using namespace std;
int main(){
   int n;
   cout<<"Enter a number : ";
   cin>>n;

   for (int x = 0; x < INT_MAX; x++)
	{
		if (pow(2, x) == n)
		{
			cout<< "True";
		}
		else if (pow(2, x) > n)
		{
            
			break;
		}
	}

	

return 0;
}