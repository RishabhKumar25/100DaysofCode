#include<iostream>
#include<map>
#include<iterator>
using namespace std;

//map strores "key - value" data
//in ordered map key stored in sorted order
//it is being internally implemented using red black tree
//non contigous memory allocation

int main(){

    /*declaring a map

    map<key dtype , value dtype> name

    */

   map<int,string> m;
   m[1]="abc";  //o(log(n))
   m[2] = "cdc";
   m[3] ="gfg";
   m[6]; //o(log(n)) //by default empty string and if value is tring then by default 0

   //method to insert values
   m.insert({4,"rsr"});
   //iterator pointing to key value pair

   map<int,string> ::iterator it;
   for(it = m.begin();it!=m.end();++it){
       cout<<(*it).first<<" "<<(*it).second<<endl;

   }

   //traversal using auto
   for(auto &val : m){
       cout<<val.first<<" "<<val.second<<endl;
   }

   //if keys are string then alphabetically sorted
   //to get size of map : m.size() size is dynamic



   
return 0;
}