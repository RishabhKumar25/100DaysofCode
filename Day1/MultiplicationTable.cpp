// c++ code to get multiplication table of any number

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number to get the table";
   cin>>n;
   for(int i=1;i<=10;i++){
       cout<<n<<" * "<<i<<" = "<<n*i<<endl;
   }
return 0;
}