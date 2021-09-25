//wap to get the odd values till n

#include<iostream>
using namespace std;
int main(){
   int n;
   int sum=0;
   cout<<"Enter the nth term till you want to get odd values";
   cin>>n;

   for(int i =1;i<n;i++){
       if(i%2!=0){
           cout<<i<<endl;
           sum+=i;
       }
   }

   cout<<"Sum of all odd values till "<<n<<" is "<<sum;
return 0;
}