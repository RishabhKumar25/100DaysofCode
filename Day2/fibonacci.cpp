
#include<iostream>
using namespace std;
int main(){
   int n =10;
   int pre =0;
   int next =1;
   int curr;

   cout<<pre<<" "<<next<<" ";
int count = 2;
   while(count !=n){
       curr = pre+next;
       cout<<curr<<" ";
       pre = next;
       next = curr;
       count++;
   }
return 0;
}