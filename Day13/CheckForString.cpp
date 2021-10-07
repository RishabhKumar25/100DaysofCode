/*

given N strings and Q queries.
In each query you are given a string print yes
if string is present else print no

*/

#include<iostream>
#include<unordered_set>
#include<iterator>

using namespace std;
int main(){
   
   unordered_set<string> s;
int N;
   cout<<"Enter number of strings : ";
   cin>>N;
cout<<"Enter all strings : \n";
   for(int i =0;i<N;i++){
       string str;
       cin>>str;
       s.insert(str);
   }

   int Q;
   cout<<"Enter number of query : s";
   cin>>Q;

   while(Q--){
       string str;
       cin>>str;
       if(s.find(str) == s.end())
       {
           cout<<"No"<<endl;
       }else{
           cout<<"Yes";
       }
   }

return 0;
}